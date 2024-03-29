#include <iostream>
#include <conio.h>

using namespace std;

class Number
    {
        private:
            int num;
        public:
            Number(int num) //Constructor
                {
                    this->num = num; //This pointer
                }

            long factorial()//function to calculate the factorial of the number stored in the object.
                {
                    long f = 1;
                    int i;
                    for(i =1; i<= num; i++)
                        {
                            f = f*i;
                        }
                    return f;
                }
            long factorial(int n) //method overloading is a feature that allows multiple function with the same name but different parameters to be defined within the same scope.
                {
                    if(n==1)
                        {
                            return 1;
                        }
                    else
                        {
                            return n*factorial(n-1); //recursion
                        }
                }
    };

int main()
    {
        Number x(5); //An object 'x' of the class 'Number' is created.
        cout << "Factorial of 5: " << x.factorial() <<endl;
        cout << "Factorial of 7: " << x.factorial(7) <<endl;
        
    }