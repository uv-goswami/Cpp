#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int ALPHABET_SIZE = 26;
    int alphabetCount[ALPHABET_SIZE] = {0};

    cout << "Enter a string (case insensitive): ";
    char input[1000]; // Assuming maximum input length of 1000 characters
    cin.getline(input, 1000); // Read a line of text from the user

    // Iterate through each character of the input
    for (int i = 0; i < strlen(input); ++i) {
        char c = tolower(input[i]); // Convert the character to lowercase
        if (isalpha(c)) { // Check if the character is an alphabet
            int index = c - 'a'; // Calculate the index for the alphabet
            alphabetCount[index]++; // Increment the count for the alphabet
        }
    }

    // Print the table of alphabet occurrences
    cout << "Alphabet\tCount" << endl;
    for (char c = 'a'; c <= 'z'; ++c) {
        int index = c - 'a';
        cout << c << "\t\t" << alphabetCount[index] << endl;
    }

    return 0;
}
