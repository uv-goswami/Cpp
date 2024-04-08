#include <iostream>
using namespace std;

int gcd(int a, int b) // Defines a function named 'gcd' that calculates the GCD of two integers a and b.
    {
        if(b == 0) // Checks if the second number b is equal to 0, indicating the base case of the recursion. If it is, then returns the first number
            {
                return a;
            }
        
        return gcd(b, a % b); //Recursively calls the gcd function with 'b' and 'a%b' as arguments.
    }

int main()
    {
        int num1, num2;

        cout << "Number1: ";
        cin >> num1;

        cout << "Number2: ";
        cin >> num2;

        int result = gcd(num1,num2); // Calling the function 'gcd' and storing result in the variable 'result'.

        cout << "GCD of " << num1 << " and " << num2 << " is " << result <<endl;


        return 0;
    }
