#include <iostream>
#include <cstring>
using namespace std;

// Function prototypes
void showAddress(const char* str);
void concatenateStrings(char* str1, const char* str2);
int compareStrings(const char* str1, const char* str2);
int stringLength(const char* str);
void convertToUpper(char* str);
void reverseString(char* str);
void insertString(char* str1, const char* str2, int pos);

int main() {
    char string1[100];
    char string2[100];
    char option;
    int position;

    cout << "Enter string 1: ";
    cin.getline(string1, 100);
    cout << "Enter string 2: ";
    cin.getline(string2, 100);

    cout << "\nMenu:";
    cout << "\nA) Show address of each character in string";
    cout << "\nB) Concatenate two strings";
    cout << "\nC) Compare two strings";
    cout << "\nD) Length of the string";
    cout << "\nE) Convert all lowercase characters to uppercase";
    cout << "\nF) Reverse the string";
    cout << "\nG) Insert a string in another string at a user specified position";
    cout << "\nEnter your choice: ";
    cin >> option;

    switch(option) {
        case 'A':
        case 'a':
            showAddress(string1);
            showAddress(string2);
            break;
        case 'B':
        case 'b':
            concatenateStrings(string1, string2);
            cout << "Concatenated string: " << string1 << endl;
            break;
        case 'C':
        case 'c':
            if(compareStrings(string1, string2) == 0)
                cout << "Strings are equal." << endl;
            else
                cout << "Strings are not equal." << endl;
            break;
        case 'D':
        case 'd':
            cout << "Length of string 1: " << stringLength(string1) << endl;
            cout << "Length of string 2: " << stringLength(string2) << endl;
            break;
        case 'E':
        case 'e':
            convertToUpper(string1);
            convertToUpper(string2);
            cout << "Uppercase string 1: " << string1 << endl;
            cout << "Uppercase string 2: " << string2 << endl;
            break;
        case 'F':
        case 'f':
            reverseString(string1);
            reverseString(string2);
            cout << "Reversed string 1: " << string1 << endl;
            cout << "Reversed string 2: " << string2 << endl;
            break;
        case 'G':
        case 'g':
            cout << "Enter the position to insert string 2 into string 1: ";
            cin >> position;
            insertString(string1, string2, position);
            cout << "Modified string 1: " << string1 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function to show address of each character in string
void showAddress(const char* str) {
    cout << "Address of each character in string: ";
    for(int i = 0; str[i] != '\0'; i++) {
        cout << &(str[i]) << " ";
    }
    cout << endl;
}

// Function to concatenate two strings
void concatenateStrings(char* str1, const char* str2) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    for(int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0'; // Add null terminator
}

// Function to compare two strings
int compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0; // Strings are equal
}

// Function to calculate the length of a string
int stringLength(const char* str) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to convert all lowercase characters to uppercase
void convertToUpper(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }
}

// Function to reverse a string
void reverseString(char* str) {
    int len = stringLength(str);
    for(int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Function to insert a string into another string at a specified position
void insertString(char* str1, const char* str2, int pos) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    if(pos < 0 || pos > len1) {
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i = len1; i >= pos; i--) {
        str1[i + len2] = str1[i];
    }
    for(int i = 0; i < len2; i++) {
        str1[pos + i] = str2[i];
    }
}
