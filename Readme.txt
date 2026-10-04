GROUP NUMBER:  Group 2 the unassigned


GROUP MEMBERS:
1. Adonay kiros   ID: 
2. Mewael yohannes  ID: ugr/195553/17

EXPLANATION OF THE PROBLEM

1. Congestion Control
This program simulates congestion control using the AIMD algorithm. 
It increases the congestion window when the network is stable and decreases it when congestion occurs.

2. Virtual Memory
This program implements a paging-based virtual memory system.
It translates logical addresses into physical addresses using page tables.

3. Cache Replacement
This program implements the Least Recently Used (LRU) cache replacement policy.
When the cache becomes full, the least recently used page is removed.

THE PROGRAMMING LANGUAGE USED:

C++

STEPS TO RUN THE PROGRAM

Compile:
on windows
 congestion_control.cpp 
 virtual_memory.cpp 
 lru_cache.cpp 

Run:
on linux
./congestion
./memory
./cache

EXPECTED OUTPUT EXAMPLES

1. Congestion Control

Transmission Round 1
Congestion Window Size: 2

Transmission Round 6
Congestion Detected!
Congestion Window Size: 3

2. Virtual Memory

Input:
2050

Output:
Page Number: 2
Offset: 2
Frame Number: 1
Physical Address: 1026

3. LRU Cache

Input:
1 2 3 1 4 5

Output:
Cache: 1
Cache: 2 1
Cache: 3 2 1
Cache: 1 3 2
Cache: 4 1 3
Cache: 5 4 1

DEPENDENCIES / ADDITIONAL REQUIREMENTS

- C++ Compiler
- Standard C++ Library
- Terminal or Command Prompt