#include <iostream>
#include <algorithm>
using namespace std;


void reverseArray(int arr[], int size) {
    cout << "Reversed Array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void findSecondLargestAndSmallest(int arr[], int size) {
    if (size < 2) {
        cout << "Not enough elements to find second largest and second smallest." << endl;
        return;
    }


    sort(arr, arr + size);

    int secondSmallest = arr[0], secondLargest = arr[size - 1];
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }


    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] != arr[size - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    cout << "Second Smallest: " << secondSmallest << endl;
    cout << "Second Largest: " << secondLargest << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    findSecondLargestAndSmallest(arr, size);

    return 0;
}