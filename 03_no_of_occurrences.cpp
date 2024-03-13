#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sen[50]; //Declaring a character array of size 50, capable of storing upto 49 characters and the null terminator.
    cout << "Enter a sentence: "; // Prompts the user to enter a sentence.
    cin.getline(sen, 50);  //It reads a line of the input from the user and stores it in the "sen" array.

    int count[256] = {0}; //This line declares an integer array 'count' with a size og 256, capable of storing the count of each ASCII character. It initializes all elements of the array to 0.

    for(int i = 0; i < strlen(sen); i++) //This 'for' loop  is used to iterate through each character in the array 'sen'. 
        {
            char c = sen[i]; //It extracts one character from the input sentence stored on the array 'sen' and assigns it to the variable 'c' for further processing.
            if(c != ' ') //If the character  is not a space...
                {
                    count[int(c)]++; // 'int(c) is a typecast operation that converts a character 'c' into its corresponding ASCII integerValue. In C++ characters are internally represented as integer values according to ASCII encoding standard. And It increments the count of that character in the 'count' array.
                }
        }
    
    cout << "Character\tCount" << endl;
    for(int i = 0; i< 256; i++)
        {
            if(count[i] > 0 && char(i) != ' ') // 'char(i)' is also a typecast operation that converts an integer  value 'i' into its corresponding ASCII character.
                {
                    cout << char(i); // converts the integer value 'i' into corresponding ASCII Character<< 
                    cout <<"\t\t"; 
                    cout<< count[i]; //Outputs the count of occurrences of the character stored in 'count[i]'.
                    cout<< endl;
                }
        }
    
    

    return 0;
}
