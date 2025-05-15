#include "cache.h"
#include <ctime>
#include <random>

int main(){

    inititalize_Memory();

    print_mainMem(0, 64);

    std::srand(std::time(nullptr));
    int hits = 0, misses = 0;


    void* start = (void*)&main_memory[0][0];
    void* end = (void*)&main_memory[MAIN_BLOCKS][BLOCK_SIZE]; 
    std::cout << "First Address: " << start
              << " | Last Address: " << end << std::endl;

    int trials; 
    int hits = 0;
    int misses = 0; 
    std::cout << "How many tests should be run? ";
    std::cin >> trials; 

    for (int i = 0; i < trials; i++){
        
    }
    std::cout << static_cast<int>(*(((unsigned char*)start) + 17)) << std::endl;


    return 0; 
}