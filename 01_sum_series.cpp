/*Practical 1: Write a program to compute the sum of the first n terms of the following series:
    S = 1 - 1/2^2 + 1/3^3 – …….
    */

#include<iostream> //This  library is used for input and output operations in C allowing the program to use functions like 'cout' and 'cin' for input/output operations.
#include<cmath> //This library, which is included in C++, provides mathematical functions like 'pow()' that are not part of the standard language itself. It
using namespace std; //This line declares that the program will use the 'std' namespace to avoid prefix standard library elements with 'std::' .

double sum(int n)//This defines a function named 'sum' that takes an integer parameter 'n' and returns a double value.
    {
        double S = 0.0;//A variable with 'double' as datatype that will hold the sum of the series

        for(int i = 1; i<=n; i++) //This lines starts a 'for' loop that iterates from to 'n'
            {
                double term = 1.000000 /pow(i,i) ; //This line calculates the term of the series for the current value of 'i' using 1/(i^i) and stores it in the variable 'term'

                if(i%2 == 0) //This lines check if 'i' when divided by 2 gives 0 or not or simply put if 'i' is even.
                    {
                        S = S - term; //This line subtracts the current term from the sum 'S' if the current value of 'i' is even.
                    }
                
                else // This line introduces the alternative case when the current value of 'i' is odd.
                    {
                        S = S + term; //This line adds the current term to the sum 'S' if the current value of 'i' is odd.
                    }
            }
        
        return S; //This line returns the final sum 'S' calculated by the function 'sum'.
    }

int main() //This line defines the main function, which is the entry point of the program.
    {
        int n; //Declaration of an integer type variable named 'n', which will store the number of terms in the series.

        cout<<"Enter the number of terms you want in the series : "; //This line  prompts the user to enter the number of terms or simply put it just acts just like 'printf'
        cin>>n; //This line takes an integer input from the user and stores  it in the variable 'n' or simply put it acts as 'scanf'.

        double result = sum(n); //The 'result' variable stores the returned value of the 'sum' function.

        cout<<"Sum is "<<result; //This  line prints out the computed sum on the screen.

        return 0; //This line ends the execution of the program and returns 0 indicating success.

    }