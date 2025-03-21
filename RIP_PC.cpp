// NOTE : ---------- THIS WILL KILL YOUR SYSTEM DO IT AT YOUR OWN RISK ------------
//=================== THE FINAL BOSS ============================================

#include <iostream>
#include <thread>
#include <vector>
#include <fstream>
#include <cmath>
#include <cstdlib>

void burnCPU() {
    while (true) {
        volatile double x = 1.0;
        for (int i = 0; i < 10000000; i++) {
            x = std::sin(x) * std::cos(x) * std::tan(x);  // Pointless math ops
        }
    }
}

void burnRAM() {
    while (true) {
        volatile char *mem = new char[100000000]; // Allocate 100MB repeatedly
        for (int i = 0; i < 100000000; i++) mem[i] = rand() % 256;
    }
}

void burnStorage() {
    while (true) {
        std::ofstream file("torture_test.txt", std::ios::binary);
        char buffer[1024 * 1024]; // 1MB buffer
        std::fill_n(buffer, sizeof(buffer), rand() % 256);
        for (int i = 0; i < 1024; i++) { // Write 1GB to disk repeatedly
            file.write(buffer, sizeof(buffer));
        }
        file.close();
    }
}

void burnGPU() {
    while (true) {
        system("glxgears &"); // Opens infinite OpenGL gears windows
    }
}

int main() {
    unsigned int threads = std::thread::hardware_concurrency();
    std::vector<std::thread> workers;

    std::cout << "🔥 **ULTIMATE SYSTEM DESTROYER STARTED** 🔥\n";
    std::cout << "Spawning " << threads << " CPU torture threads...\n";

    for (unsigned int i = 0; i < threads; i++) workers.emplace_back(burnCPU);
    
    std::cout << "Burning RAM...\n";
    workers.emplace_back(burnRAM);

    std::cout << "Burning Storage...\n";
    workers.emplace_back(burnStorage);

    std::cout << "Burning GPU...\n";
    workers.emplace_back(burnGPU);

    for (auto &t : workers) t.join(); // Keep everything running

    return 0;
}
