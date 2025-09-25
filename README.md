# 🛠️ MSM Simulator (OpenBMC-Inspired)

This project simulates ISR-driven telemetry using C++11 concurrency primitives (`std::promise`, `std::future`). It models a legacy PIC-based Machine Status Monitoring System (MSM) reimagined for host-side validation and control.

## Features
- Simulated sensor ISR using threads
- Host-side blocking wait via `std::future`
- Modular design for telemetry expansion

## Build & Run
```bash
make run
