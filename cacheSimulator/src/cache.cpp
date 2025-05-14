#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cstdint>
#include "cache.h"

const int MAIN_MEMORY_SIZE = 1024; // 1 KB of main memory
const int BLOCK_SIZE = 16;         // 16 bytes per block
const int NUM_BLOCKS = MAIN_MEMORY_SIZE / BLOCK_SIZE;

uint8_t main_memory[MAIN_MEMORY_SIZE]; // Simulated main memory

// Initialize memory with fake data
void initializeMemory() {
    srand(time(nullptr));
    for (int i = 0; i < MAIN_MEMORY_SIZE; ++i) {
        main_memory[i] = rand() % 256; // random byte
    }
}

// Print contents of memory for debugging
void printMemory(int start, int end) {
    for (int i = start; i < end; ++i) {
        if (i % 16 == 0) std::cout << std::endl << std::setfill('0') << std::setw(4) << i << ": ";
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)main_memory[i] << " ";
    }
    std::cout << std::dec << std::endl;
}