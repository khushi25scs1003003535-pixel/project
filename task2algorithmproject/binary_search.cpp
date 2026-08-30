#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];

    cout << "Enter the elements in sorted order:\n";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int start = 0;
    int end = size - 1;

    // Start Runtime Measurement
    auto begin = high_resolution_clock::now();

    // Binary Search
    while (start <= end) {

        int middle = (start + end) / 2;

        if (numbers[middle] == target) {

            auto finish = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(finish - begin);

            cout << "Element found at index " << middle << endl;
            cout << "Runtime: " << duration.count() << " microseconds" << endl;
            return 0;
        }

        if (numbers[middle] < target) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }

    auto finish = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(finish - begin);

    cout << "Element not found in the array." << endl;
    cout << "Runtime: " << duration.count() << " microseconds" << endl;

    return 0;
}





