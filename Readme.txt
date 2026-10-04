Operating Systems and System Programming Simulations

 Academic Project
This project was developed as a group assignment for the Operating Systems and System Programming course at Mekelle University, Ethiopian Institute of Technology–Mekelle (EITM), Department of Software Engineering.

Course: Operating Systems and System Programming
Course Code: SEng3122
Section: 2
Group: 2 (Unassigned)

 Group Members
1. Adonay Kiros
2. Mewael Yohannes

Submission Date: May 6, 2026


 Project Overview

This project implements simulations of three important concepts related to operating systems and system programming:

1. Congestion Control using the Additive Increase Multiplicative Decrease (AIMD) algorithm
2. Virtual Memory Management using paging and page-table address translation
3. Cache Replacement using the Least Recently Used (LRU) policy

The project includes problem analysis, algorithms, pseudocode, C++ implementations, and sample input/output.


 1. Congestion Control
This program simulates network congestion control using the Additive Increase Multiplicative Decrease (AIMD) algorithm.

 How it works
* When the network is stable, the congestion window increases gradually.
* When congestion is detected, the congestion window is reduced.
* The program displays the congestion window size for each transmission round.

 Example Output
Transmission Round 1
Congestion Window Size: 2

Transmission Round 6
Congestion Detected!
Congestion Window Size: 3


 2. Virtual Memory Management

This program implements a simplified **paging-based virtual memory system**.

It demonstrates how a logical address can be translated into a physical address using a page table.

 Main operations
* Accept a logical address
* Calculate the page number
* Calculate the offset
* Find the corresponding frame number from the page table
* Calculate the physical address
* Detect invalid page numbers


Address Translation
Physical Address = (Frame Number × Page Size) + Offset

 Example

Input:
Enter Logical Address: 2050

Output:
Page Number: 2
Offset: 2
Frame Number: 1
Physical Address: 1026


 Invalid Input Example
Input:
Enter Logical Address: 5000

Output:
Invalid Page Number!


 3. Cache Replacement Policy

This program implements the Least Recently Used (LRU) cache replacement policy.

When the cache becomes full, the page that has not been used for the longest time is removed and replaced by the newly requested page.

 Example Input
1 2 3 1 4 5


 Example Output
Cache: 1
Cache: 2 1
Cache: 3 2 1
Cache: 1 3 2
Cache: 4 1 3
Cache: 5 4 1



 Programming Language
* C++

 Requirements

* A C++ compiler such as GCC or MinGW
* Standard C++ Library
* Terminal or Command Prompt


 Project Files

* congestion control.cpp — AIMD congestion-control simulation
* virtual memory system(paging system).cpp — paging-based virtual-memory simulation
* cache replacement poilcy(LRU).cpp — LRU cache-replacement simulation
* input & output.txt — sample input and output
* Readme.txt — project instructions and overview


 Compilation
Because the source filenames contain spaces and parentheses, enclose each filename in quotation marks when compiling.

 Congestion Control
g++ "congestion control.cpp" -o congestion


 Virtual Memory
g++ "virtual memory system(paging system).cpp" -o virtual_memory


 LRU Cache
g++ "cache replacement poilcy(LRU).cpp" -o lru_cache


 Running the Programs
 Windows

congestion.exe
virtual_memory.exe
lru_cache.exe


 Linux

./congestion
./virtual_memory
./lru_cache


 Learning Outcomes

Through this project, we gained practical experience with:

* Operating system concepts
* Memory management
* Paging and address translation
* Cache replacement algorithms
* Network congestion control
* Algorithm design and implementation
* C++ programming
* Problem analysis and testing
