#include<iostream>
#include<cstring>
using namespace std;

void showAddress(const char* str, const char* varName);
void concatenate(char* str1, const char* str2);
int compare(const char* str1, const char* str2);
int length(const char* str);
void uppercase(char* str);
void reverse(char* str);
void insert(char* str1, const char* str2, int pos);

int main()
    {
        char string1[100];
        char string2[100];
        char option;
        
        cout << "Enter String 1: ";
        cin.getline(string1, 100);

        cout << "Enter String 2: ";
        cin.getline(string2, 100);
        

        cout<< "\nMenu: ";
        cout<< "\nA) Show address of each character in string";
        cout<< "\nB) Concatenate two string";
        cout<< "\nC) Compare two strings";
        cout<< "\nD) Length of the strings(Use Pointers)";
        cout<< "\nE) Convert all lowercase characters to uppercase";
        cout<< "\nF) Reverse the string";
        cout<< "\nG) Insert a string in another string at a user specified position";
        cout<< "\nEnter your option: ";
        cin>> option;

        if(option == 'A' || option == 'a')
            {
                showAddress(string1, "String1");
                showAddress(string2, "String2");
            }

        else if(option == 'B' || option == 'b')
            {
                concatenate(string1, string2);
            }

        else if(option == 'C' || option == 'c')
            {
                if(compare(string1, string2) == 0)
                    {
                        cout << "Strings are equal." <<endl;
                    }
                else
                    {
                        cout << "Strings are not equal." <<endl;
                    }
                
            }

        else if(option == 'D' || option == 'd')
            {
                cout << "Length of string1: " <<length(string1) << endl;
                cout << "Length of string2: " <<length(string2) << endl;
            }

        else if(option == 'E' || option == 'e')
            {
                cout << "Uppercase version of String1: ";
                uppercase(string1);
                cout << endl;
                cout << "Uppercase version of String2: ";
                uppercase(string2);
                cout << endl;
            }
        
        else if(option == 'F' || option == 'f')
            {
                cout << "Reverse of String1: ";
                reverse(string1);

                cout << endl <<"Reverse of string 2:";
                reverse(string2);

                
            }

        else if(option == 'G' || option == 'g')
            {
                int n;
                cout << "Enter the specified position: " ;
                cin >> n;
                insert(string1, string2, n);
                cout << "Modified String: "<<string1 <<endl;
            }

        else
            {
                cout << "Enter a Valid Option.";
            }


        return 0;
    }




void showAddress(const char* str, const char* varName)
    {

        cout << "\nAddress of each character in " << varName <<":" <<endl;
        for(int i=0; str[i] != '\0'; i++)
            {
                cout <<str[i] <<": " << (void*)(&str[i]) << "\n";
            }
        cout << endl;
    }

void concatenate(char* str1, const char* str2)
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);

        for(int i = 0; i<len2; i++)
            {
                str1[len1 + i] = str2[i];
            }
        
        str1[len1 + len2] = '\0';

        cout << str1;
    }

int compare(const char* str1, const char* str2)
    {
        int i = 0;
        while(str1[i] != '\0' && str2[i] != '\0')
            {
                if(str1[i] != str2[i])
                    {
                        return str1[i] - str2[i];
                    }
                i++;
            }
        return 0;
    }

int length(const char* str)
    {
        int len = 0;
        while(str[len] != '\0')
            {
                len++;
            }
        return len;
    }

void uppercase(char* str)
    {
        for(int i = 0; str[i]!= '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        str[i] = str[i] - 32;
                    }
            }
        cout << str;
    }

void reverse(char* str)
    {
        int len = strlen(str);
        for(int i = 0; i< len/2; i++)
            {
                char temp = str[i];
                str[i] = str[len - 1 - i];
                str[len -1-i] = temp;
            }
        cout<< str;
    }

void insert(char* str1, const char* str2, int pos)
    {
        pos = pos -1;
        int len1 = strlen(str1);
        int len2 = strlen(str2);

        if(pos< 0 || pos> len1)
            {
                cout << "Invalid position!" << endl;
                return;
            }
        
        for( int i = len1; i >= pos; i--)
            {
                str1[i + len2] = str1[i];
            }
        
        for (int i = 0; i < len2; i++)
            {
                str1[pos + i] = str2[i];
            }
    }