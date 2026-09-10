#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputAndSortArray() {
    int size;

    cout << "Enter the number of integers: ";
    cin >> size;

    while (size <= 0) {
        cout << "Please enter a positive number: ";
        cin >> size;
    }

    vector<int> arr(size);

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "\nSorted array: [";
    for (int i = 0; i < size; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << arr[i];
    }
    cout << "]\n";
}

int main() {
    inputAndSortArray();
    return 0;
}
