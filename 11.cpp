#include <iostream>
#include <fstream>
#include <string>

class Student {
public:
    int rollNo;
    std::string name;
    std::string className;
    int year;
    int totalMarks;

    void input() {
        std::cout << "Enter Roll No.: ";
        std::cin >> rollNo;
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Class: ";
        std::cin >> className;
        std::cout << "Enter Year: ";
        std::cin >> year;
        std::cout << "Enter Total Marks: ";
        std::cin >> totalMarks;
    }

    void display() {
        std::cout << "Roll No.: " << rollNo << ", Name: " << name << ", Class: " << className << ", Year: " << year << ", Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    Student students[5];

    // Store 5 objects of Student class in a file
    std::ofstream outputFile("students.txt");
    if (outputFile) {
        for (int i = 0; i < 5; ++i) {
            students[i].input();
            outputFile << students[i].rollNo << " " << students[i].name << " " << students[i].className << " " << students[i].year << " " << students[i].totalMarks << std::endl;
        }
        outputFile.close();
    } else {
        std::cerr << "Error: Unable to open file for writing" << std::endl;
        return 1;
    }

    // Retrieve and display the records from the file
    std::ifstream inputFile("students.txt");
    if (inputFile) {
        for (int i = 0; i < 5; ++i) {
            inputFile >> students[i].rollNo >> students[i].name >> students[i].className >> students[i].year >> students[i].totalMarks;
            students[i].display();
        }
        inputFile.close();
    } else {
        std::cerr << "Error: Unable to open file for reading" << std::endl;
        return 1;
    }

    return 0;
}
