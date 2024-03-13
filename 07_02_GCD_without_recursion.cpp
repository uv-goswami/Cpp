#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
    return a;
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
