# Cache Simulation Using C++

## Program Specifications

### Address Translation Between Main Memory and Caches
Below are two pointers that show the start and end of main memory on a random run  
    * First Address: 0x5a2de7ec5280 | Last Address: 0x5a2de7f452c0  
        - it can be seen that the only difference in these addresses is the last 6 values or 24 bits  

When deciding how to address data the offset from the start of the caches block must first be calculated  
    * log2(64) = 6 offset bits for L1 and L2  
Then the number of index bits for each cache needs to be found.  
    * L1 cache size = 4 KiB = 4096 bytes -> 4096 / 64 = 64 blocks -> index bits = log2(64) = 6 bits  
    * L2 cache size = 32 KiB = 32768 bytes -> 32768 / 64 = 512 blocks -> index bits = log2(512) = 9 bits  
Lastly, the number is tag bits is the remaining number of bits.  

## What is a cache? 
Caches are a part of computer architecture, and they store frequently used data to improve a programs performance by reducing access time. A computer can have multiple caches, depending on how much data there is to be referenced. Typically, in computers there are three levels of caches, the smallest L1 (64KiB), medium sized L2 (256KiB), and the largest L3 (16MiB). By having multiple cache levels, if there is a missed hit one of the smaller caches. 