#include <iostream>

#ifndef CACHE_SIZE
#define CACHE_SIZE 32768
#endif

#ifndef BLOCK_SIZE
#define BLOCK_SIZE 64
#endif

#ifndef ASSOCIATIVITY
#define ASSOCIATIVITY 4
#endif
// make CACHE_SIZE=16384 BLOCK_SIZE=32 ASSOCIATIVITY=2
int main() {
    std::cout << "Cache Config: "
              << "Size=" << CACHE_SIZE
              << " | Bytes, Block=" << BLOCK_SIZE
              << " | Bytes, Associativity=" << ASSOCIATIVITY << std::endl;
}
