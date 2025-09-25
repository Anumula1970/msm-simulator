
// src/main.cpp
#include <iostream>
#include <thread>
#include <future>
#include <chrono>

void sensor_isr(std::promise<std::string> packetPromise) {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    packetPromise.set_value("Sensor: Temp=28.5°C, Humidity=60%");
}

int main() {
    std::promise<std::string> packetPromise;
    std::future<std::string> packetFuture = packetPromise.get_future();

    std::thread sensorThread(sensor_isr, std::move(packetPromise));

    std::cout << "Waiting for sensor data...\n";
    std::string result = packetFuture.get();
    std::cout << "Received: " << result << std::endl;

    sensorThread.join();
    return 0;
}
