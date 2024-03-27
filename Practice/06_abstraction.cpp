#include <iostream>
#include <conio.h> //This includes the console input-output library, which provides functions like 'getch(); for reading a single character from the console without echoing it.
#include <cmath> //This includes the math library, which provides mathematical functions like 'sqrt()' , 'sin()', etc.
#include <cstring> //This includes the string manipulation library, which provides functions for string handeling operations like 'strcpy()', 'strcmp()', etc.

using namespace std;

class Employee //Using 'class' keyword we define a class called 'Employee'
    {
        private: //This keyword specifies that the following members are accessible only within the class.
            int empid;
            char name[50]; //This declares a character array to store the basic salary of the employee.
            int basic;

            double getDa() //This is a private member function called 'Da'which returns a double as a data type.
                {
                    if(basic >= 10000)
                        {
                            return 0.6*basic;
                        }
                    else if(basic>= 6000)
                        {
                            return 0.4*basic;
                        }
                    else
                        {
                            return 0.3*basic;
                        }
                }
            
            double getHRA()
                {
                    return 0.45*basic;
                }
            
            double getPF()
                {
                    return 0.12*basic;
                }

        //Above we have used Abstraction, to represent the concept of an Employee without exposing the implementation details of the data is stored or manipulated.

        public: // Access specifier 'public' makes the member functions 
            Employee(int empid, char *name, int basic) // This is the constructor of the 'Employee' class, which initializes the member variables 'empid', 'name', and 'basic' with the values passed as arguments.
                {
                    this-> empid = empid; //It assigns the value of the 'empid' parameter to the 'empid' member variable of the class. The 'this->' pointer refers to the current instance of the class, allowing access to its member vbariables.
                    strcpy(this-> name, name);
                    this->basic = basic;
                }
            
            double getSalary()
                {
                    return (basic + getDa() + getHRA() - getPF());
                }
            
            char *getName()
                {
                    return name;
                }
            
            int getBasic()
                {
                    return basic;
                }
            
            int getEmpid()
                {
                    return empid;
                }
    };

int main()
    {
        int empid, basic;
        char name[50];

        cout << "Employee ID: ";
        cin >> empid;

        cin.ignore(); // Ignores any remaining characters in buffer/input stream particularly the newline character '\n' , to prevent it from being consumed by the next input operation.
        
        cout << "Name: ";
        cin.getline(name, 50); //Reads a line of text input by the user and stores it in the 'name' variable.

        cout << "Basic: ";
        cin >> basic;

        Employee *e = new Employee(empid, name, basic); //Creates a new 'Employee' object dynamically using the new keyword and passes the the arguments to the constructor.

        cout << "Salary of " << e->getName()<< " is " << e->getSalary();
        getch(); //Pauses the program until a key is pressed.

        return 0;
    }