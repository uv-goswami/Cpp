#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class number 
    {
        int n;
        public:
            number(int num)
                {
                    n = num;
                }

            int square()
                {
                    return n*n;
                }
            
            int cube()
                {
                    return n*n*n;
                }
            
            double cuberoot()
                {
                    return pow(n, 1.0/3);
                }
    };

int main()
    {
        number x(7); // static binding or compile time polymorphism i.e in static binding  the type and memory occupied by the object is known at compile time.

        number *y = new number(9);//In Dynamic binding memory is allocated at the run time using "new" keyword. 

        cout << "Square is: " << x.square()<< endl;
        cout << "Cube is: " << x.cube() << endl;
        cout << "Cuberoot is " << x.cuberoot() << endl;

        cout << "Square is: " << y->square()<< endl;
        cout << "Cube is: " << y->cube() << endl; // "->" is a this pointer used to refer the current object. It is generally used when field name and parameter names are same.
        cout << "Cuberoot is " << y->cuberoot();

        getch();


        return 0;
    }