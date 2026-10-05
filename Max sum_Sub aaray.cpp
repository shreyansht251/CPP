#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Standard fixed-size array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Dynamic array using std::vector
    vector<int> dynamicArray = {1, 2, 3};
    dynamicArray.push_back(4); // Add an element

    cout << "Vector elements: ";
    for (int val : dynamicArray) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}