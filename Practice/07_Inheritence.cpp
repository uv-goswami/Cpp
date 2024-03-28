#include <iostream>
#include <conio.h>
using namespace std;

class Num2 //Parent Class
    {
        int a, b;
        public:
            Num2(int a, int b)//Constructor
                {
                    this->a = a;
                    this->b = b;
                }
            
            int getA()
                {
                    return a;
                }

            int getB()
                {
                    return b;
                }

            int p2()
                {
                    return a*b;
                }
            
            int g2()
                {
                    return a>b?a:b;
                }
    };

class Num3 : public Num2 //Child Class, Inherits from 'Num2' class
    {
        int c;
        public:
            Num3(int a, int b, int c) : Num2(a,b)//Constructor
                {
                    this->c = c;
                }
            
            int getC()
                {
                    return c;
                }
            
            int p3()
                {
                    return p2() * c;
                }
            
            int g3()
                {
                    return g2() > c? g2():c; // This is a ternary conditional operator. It checks if the greater value between 'a' and 'b' (returned by 'g2()') is greater than 'c'. If it is, it returns the greater value of 'a' and 'b'; otherwise returns 'c'
                }
    };


int main()
    {
        Num2 x(5,6);
        cout << "Product of " <<x.getA() << " and " << x.getB() << ": " << x.p2()<< endl;
        cout << "Greater of " << x.getA() << " and " << x.getB() << ": " << x.g2() <<endl;

        Num3 y(7,8,9);
        cout << "Product of " <<y.getA() << " and " << y.getB() << " and " << y.getC() << ": " << y.p3()<< endl;
        cout << "Greater of " << y.getA() << " and " << y.getB() << " and " << y.getC() << ": " << y.g3() <<endl;
        
        getch(); // To prevent the console window from closing immediately




        return 0;
    }