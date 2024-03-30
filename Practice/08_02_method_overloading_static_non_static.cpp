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

            long factorial()//non-static or instance member --> member that always need an object or instance to use them.
                {
                    long f = 1;
                    int i;
                    for(i =1; i<= num; i++)
                        {
                            f = f*i;
                        }
                    return f;
                }
            static long factorial(int n) //Static or class member --> A method that can be used without an object and can directly be used using a class name with scope resolution operator. 'static' keyword is used to declare such members.
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
        cout << "Factorial of 7: " << Number :: factorial(7) <<endl;
        
    }