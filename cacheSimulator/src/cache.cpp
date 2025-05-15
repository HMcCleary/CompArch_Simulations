#include "cache.h"
#include <ctime>  // Add to top of cache.cpp
#include <cstdlib>
#include <iomanip>

byte main_memory[MAIN_BLOCKS][BLOCK_SIZE];
CacheLine L1[L1_BLOCKS];
CacheLine L2[L2_BLOCKS];

void inititalize_Memory(){
    std::srand(std::time(nullptr));
    for (int i = 0; i < MAIN_BLOCKS; ++i) {
        for (int j = 0; j < BLOCK_SIZE; ++j) {
            // get random 1 byte value
            main_memory[i][j] = std::rand() % 256;
        }
    }

    for (int i = 0; i < L1_BLOCKS; ++i)
        L1[i].valid = false;
    for (int i = 0; i < L2_BLOCKS; ++i)
        L2[i].valid = false;
}


void print_mainMem(int start, int end) {
    for (int addr = start; addr < end; addr++) {
        if ((addr - start) % 16 == 0)
            std::cout << "\n0x" << std::setw(4) << std::hex << std::setfill('0') << addr << ": ";

        int block = addr / BLOCK_SIZE;
        int offset = addr % BLOCK_SIZE;

        std::cout << std::setw(2) << std::hex << (int)main_memory[block][offset] << " ";
    }
    std::cout << "\n";
}

