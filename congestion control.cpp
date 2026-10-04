#include <iostream>
using namespace std;

int main() {

    // Initial congestion window size
    int cwnd = 1;

    // Simulate 10 transmission rounds
    for(int i = 1; i <= 10; i++) {

        cout << "Transmission Round " << i << endl;

        // Simulate congestion at round 6
        if(i == 6) {

            cout << "Congestion Detected!" << endl;

            // Multiplicative Decrease
            cwnd = cwnd / 2;
        }
        else {

            // Additive Increase
            cwnd = cwnd + 1;
        }

        // Display congestion window size
        cout << "Congestion Window Size: "
             << cwnd << endl;

        cout << "---------------------" << endl;
    }

    return 0;