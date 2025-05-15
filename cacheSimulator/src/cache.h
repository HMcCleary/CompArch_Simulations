#ifndef CACHE_SIM_H
#define CACHE_SIM_H

#include <iostream>
#include <cstdlib>
#include <cstdint>

typedef uint8_t byte;

const int BLOCK_SIZE  = 64;    // bytes
const int MAIN_BLOCKS = 8192;  // 512 KiB / 64 B
const int L2_BLOCKS   = 512;   // 32 KiB / 64 B
const int L1_BLOCKS   = 64;    // 4 KiB / 64 B

// Struct for each cache line
struct CacheLine {
    bool valid;
    uint64_t tag;
    byte data[BLOCK_SIZE];
};

// Global declarations
extern byte main_memory[MAIN_BLOCKS][BLOCK_SIZE];
extern CacheLine L2[L2_BLOCKS];
extern CacheLine L1[L1_BLOCKS];

// Function declarations
void inititalize_Memory(void);
void print_mainMem(int start, int end); 


#endif
