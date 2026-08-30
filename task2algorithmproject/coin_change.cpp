#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {

    int coins[] = {10, 5, 2, 1};

    int amount;

    cout << "Enter Amount: ";
    cin >> amount;

    // Start Runtime Measurement
    auto start = high_resolution_clock::now();

    cout << "Coins Used:\n";

    for(int i = 0; i < 4; i++) {

        while(amount >= coins[i]) {
            cout << coins[i] << " ";
            amount = amount - coins[i];
        }
    }

    // Stop Runtime Measurement
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nRuntime: " << duration.count() << " microseconds" << endl;

    return 0;
}