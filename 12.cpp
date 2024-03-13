#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (inputFile && outputFile) {
        std::string line;
        while (std::getline(inputFile, line)) {
            line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
            outputFile << line << "\n";
        }

        std::cout << "Contents copied and whitespaces removed successfully!" << std::endl;
    } else {
        std::cerr << "Error: Unable to open files!" << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
