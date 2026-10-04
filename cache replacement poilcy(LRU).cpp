#include <iostream>
#include <list>
using namespace std;

int main() {

    // Cache size
    int capacity = 3;

    // LRU cache
    list<int> cache;

    // Pages to be inserted
    int pages[] = {1, 2, 3, 1, 4, 5};

    // Loop through pages
    for(int page : pages) {

        // Remove page if already exists
        cache.remove(page);

        // If cache is full
        if(cache.size() == capacity) {

            // Remove least recently used page
            cache.pop_back();
        }

        // Insert current page at front
        cache.push_front(page);

        // Display cache contents
        cout << "Cache: ";

        for(int x : cache) {

            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}