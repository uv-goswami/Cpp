#include <iostream>
#include <conio.h>

using namespace std;

class Size
    {
        private:
            int feet, inch;

        public:
            Size(int feet, int inch)// This is a constructor of the 'Size' class. It is a special member that gets called automatically when an object is created.
                {
                    this-> feet = feet; // Inside the constructor, 'this' is a pinter that pints to the current object. it is useful when the constructor parameter and the class members have same name.
                    this-> inch = inch;// By using this pinter ensures that the correct member variable are assigned the values from the constructor's parameters.
                }
            
            Size addSize(Size x) // This is a member function of the 'Size' class . It takes an object of type 'Size' as a parameter. This function is responsible for adding dimensions of the current'Size' object with another 'Size' object('x') and returns a new 'Size' object representing the two sizes.
                {
                    //Here, we are calculating the sum of the feet and the inches of both 'Size' objects and storing them in variables 'f' and 'i', respectively.'this->feet' and 'this->inch' refer to the feet and inch values of the current object, while 'x.feet' and 'x.inch' refer to the feet and inch values of the 'Size object passed as a parameter('x).
                    int f = x.feet + this->feet;
                    int i = x.inch + this->inch;
                    if(i>=12)
                        {
                            f++;
                            i -= 12;
                        }//If the sum of inches i.e 'x.inch + this->inch'  is greater than or equal to 12 then we increment the 'f' variable and subtract 12 from 'i' variable.
                    return Size(f,i);// it returns new 'Size' object with the sum of two objects values.
                }

            Size operator + (Size x) //This defines the addition operator '+' as a member function of th 'Size' class. It takes a 'Size' object 'x' as a paraMETER AND RETURNS a 'Size' object, which represents the result of adding the curent object's dimensions to 'x'.
                {
                    int f = x.feet + this -> feet;
                    int i = x.inch + this -> inch;
                    if(i>=12)
                        {
                            f++;
                            i -= 12;
                        }
                    return Size(f,i);
                }
            void showSize()
                {
                    cout << "Size is " << feet << " feet and " << inch << " inch." <<endl;
                }
    };

int main()
    {
        Size p(4,9), q(8,7);
        Size r = p+q;
        r.showSize();
    }