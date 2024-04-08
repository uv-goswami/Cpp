#include <iostream>
using namespace std;


int binarySearch(int arr[], int low, int high, int target)
    {
        if (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target)
                    {
                        return mid;
                    }
                if (target < arr[mid])
                    {
                        return binarySearch(arr, low, mid - 1, target);
                    }
                return binarySearch(arr, mid + 1, high, target);
            }
        return -1;
    }

int main()
    {
        int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target = 23;
        int index = binarySearch(arr, 0, size - 1, target);
        if (index != -1)
            {
                cout << "Element " << target << " found at index " << index << endl;
            }
        else
            {
                cout << "Element " << target << " not found" << endl;
            }
        return 0;
    }
