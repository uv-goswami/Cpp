#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}

    virtual void display() {
        std::cout << "Name: " << name << std::endl;
    }
};

class Student : public Person {
private:
    std::string course;
    int marks;
    int year;

public:
    Student(const std::string& n, const std::string& c, int m, int y)
        : Person(n), course(c), marks(m), year(y) {}

    void display() override {
        std::cout << "Student details:" << std::endl;
        Person::display();
        std::cout << "Course: " << course << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

class Employee : public Person {
private:
    std::string department;
    double salary;

public:
    Employee(const std::string& n, const std::string& dept, double sal)
        : Person(n), department(dept), salary(sal) {}

    void display() override {
        std::cout << "Employee details:" << std::endl;
        Person::display();
        std::cout << "Department: " << department << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Person* personPtr;

    Student student1("Alice", "Computer Science", 95, 2023);
    Employee employee1("Bob", "Engineering", 75000.0);

    personPtr = &student1;
    personPtr->display();

    personPtr = &employee1;
    personPtr->display();

    return 0;
}
