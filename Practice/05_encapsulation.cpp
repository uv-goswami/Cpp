#include <iostream>
using namespace std;

//Encapsulation refers to the bundling of data/attributes and methods that operate on that data within a single unit. None of the members of a class should be accessible outside the class.

class Employee
    {
    private:
        string Name;
        string Company;
        int Age;

    public:
        void setName(string name)// Setter
            {
                Name = name;
            }
        string getName() // Getter
            {
                return Name;
            }
        void setCompany(string company)
            {
                Company = company;
            }
        string getCompany()
            {
                return Company;
            }
        void setAge(int age)
            {
                Age = age;
            }
        int getAge()
            {
                return Age;
            }
        
        void Introduce()
            {
                cout << "Name: " << Name << endl;
                cout << "Company: " << Company << endl;
                cout << "Age: " << Age << endl;
            }

        Employee(string name, string company, int age) //Constructor
            {
                Name = name;
                Company = company;
                Age = age;
            }
    };


int main()
    {
        Employee emp1 = Employee("Yuvraj", "Berozgaar", 20);
        emp1.Introduce();

        cout << endl;

        Employee emp2 = Employee("abc", "xyz", 25);
        emp2.Introduce();

        cout << endl;

        emp1.setAge(21);
        cout << emp1.getName() << " is " << emp1.getAge() << " years old" << endl;

        return 0;
    }

