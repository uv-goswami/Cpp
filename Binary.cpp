#include <iostream>
using namespace std;

// Function to perform binary search without recursion
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int index = binarySearch(arr, size, target);
    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element " << target << " not found" << endl;
    return 0;
}
