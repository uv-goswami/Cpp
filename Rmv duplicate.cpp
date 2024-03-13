#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    int index = 0; // Initialize an index to keep track of the current position in the modified array

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        int j; // Declare a variable to store the index of the duplicate element, if found

        // Check if the current element is a duplicate of any previous element
        for (j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                break; // If a duplicate is found, break out of the loop
            }
        }

        // If the loop completes without finding a duplicate, copy the current element to the modified array
        if (j == index) {
            arr[index++] = arr[i];
        }
    }

    n = index; // Update the size of the array to the number of unique elements
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr, n); // Remove duplicates from the array

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
