#include <iostream>
using namespace std;

void rmv(int arr[], int& n) // This line defines a function named 'rmv' that takes an integer array 'arr' and its size 'n' as parameters. This function removes duplicates from the array and updates the size 'n' accordingly.
    {
        int index = 0; //This line initializes an integer variable 'index' to keep track of the current position in the modified array.
        for (int i = 0; i<n; i++) //This line starts a 'for' loop that iterates from '0' to 'n-1', inclusive.
            {
                int j; //This line declares an integer variable 'j' to store the index of the duplicate element, if found.

                for(j=0; j<index; j++) //This line starts a 'for' loop inside another 'for' loop that iterates from '0' to 'index-1', inclusive. It checks for duplicates by comparing elements of the array with previous elements up to the current position.
                    {
                        if(arr[i]==arr[j]) // This line checks if the current element 'arr[i]' is equal to any of the previous elements 'arr[j]' encountered so far. If duplicate is found, the 'if' condition is true.
                            {
                                break; //This line breaks out of the inner loop if a duplicate element is found, as there's no need to continue checking for duplicates.
                            }
                    }

            if(j == index) // This line checks if the inner loop completed without finding a duplicate.
                {
                    arr[index++] = arr[i]; //This line copies the current element 'arr[i]' to the modified array at index 'index', and then increments 'index' to prepare for the next unique element.
                }
            }

        n = index; //This line updates the size of the array 'n' to the number of unique elements in the modified array.

    }

int main() //This line defines the main function, which is the entry point of the program.
    {
        int arr[] = {1, 2, 3, 3, 4, 4, 5, 2, 1, 6, 7, 6, 8}; //This line initializes an integer array 'arr' with duplicate elements.
        int s = sizeof(arr)/sizeof(arr[0]); //This line calculates the size of the array.

        cout << "Original Array: "; 
        for(int i=0; i<s; i++) //This line starts a 'for' loop to iterate through the original array and print its elements.
            {
                cout << arr[i] << " ";
            }
        cout << endl; // This  line prints out a newline character after printing all elements in the array.

        rmv(arr, s); // This line calls the 'rmv' function to remove duplicates from the array.

        cout << "Array after removing duplicates: ";
        for(int i=0; i< s; i++) //This line starts a 'for' loop to iterate through the modified array and print its elements.
            {
                cout << arr[i]<< " ";
            }
        cout << endl;
        
        return 0; //This line indicates successful completion of the program  and returns 0 as an exit status.
    }
