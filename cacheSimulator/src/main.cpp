#include "cache.h"
#include <iostream>

int main() {
    initializeMemory();
    printMemory(0, 64); // Show first 64 bytes for demo

    // You can now simulate accessing specific memory addresses
    // and model how a cache would load and store blocks.

    return 0;
}