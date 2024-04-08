#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int result[])
{
    int i = 0, j = 0, k = 0;
    

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    while (i < size1)
        result[k++] = arr1[i++];


    while (j < size2)
        result[k++] = arr2[j++];
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[size1 + size2];

    merge(arr1, size1, arr2, size2, result);

    cout << "Array1: ";
    for(int i =0; i<size1; i++)
        {
            cout << arr1[i] << " ";
        }

    cout << endl;

    cout << "Array2: ";
    for(int i =0; i<size2; i++)
        {
            cout << arr2[i] << " ";
        }

    cout <<endl;

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; ++i)
        cout << result[i] << " ";

    return 0;
}
