#include <iostream>
using namespace std;
 
// Function to calculate GCD using recursion
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRecursive(b, a % b);
    }
}

// Function to calculate GCD without using recursion
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate GCD using recursion
    int resultRecursive = gcdRecursive(num1, num2);
    cout << "GCD using recursion: " << resultRecursive << endl;

    // Calculate GCD without using recursion
    int resultIterative = gcdIterative(num1, num2);
    cout << "GCD without recursion: " << resultIterative << endl;

    return 0;
}
