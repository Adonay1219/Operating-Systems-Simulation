#include <iostream>
using namespace std;

int main() {

    // Page table
    int pageTable[4] = {5, 9, 1, 7};

    // Page size in bytes
    int pageSize = 1024;

    int logicalAddress;

    // Input logical address
    cout << "Enter Logical Address: ";
    cin >> logicalAddress;

    // Calculate page number
    int pageNumber = logicalAddress / pageSize;

    // Calculate offset
    int offset = logicalAddress % pageSize;

    // Check if page number is valid
    if(pageNumber >= 4) {

        cout << "Invalid Page Number!" << endl;

        return 0;
    }

    // Get frame number from page table
    int frameNumber = pageTable[pageNumber];

    // Calculate physical address
    int physicalAddress =
        (frameNumber * pageSize) + offset;

    // Display results
    cout << "Page Number: "
         << pageNumber << endl;

    cout << "Offset: "
         << offset << endl;

    cout << "Frame Number: "
         << frameNumber << endl;

    cout << "Physical Address: "
         << physicalAddress << endl;

    return 0;
}