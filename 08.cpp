#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> >  matrix;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        matrix.resize(rows, std::vector<int>(cols, 0));
    }

    void inputMatrix() {
        std::cout << "Enter elements of the matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrices are not of same dimensions.");
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrices are not compatible for multiplication.");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.matrix[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns for the matrix: ";
    std::cin >> rows >> cols;

    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    std::cout << "Enter elements of first matrix:" << std::endl;
    matrix1.inputMatrix();
    std::cout << "Enter elements of second matrix:" << std::endl;
    matrix2.inputMatrix();

    int choice;
    std::cout << "Select an operation to perform:" << std::endl;
    std::cout << "1. Sum\n2. Product\n3. Transpose\n";
    std::cin >> choice;

    try {
        Matrix result(rows, cols);
        switch (choice) {
            case 1:
                result = matrix1 + matrix2;
                result.displayMatrix();
                break;
            case 2:
                result = matrix1 * matrix2;
                result.displayMatrix();
                break;
            case 3:
                result = matrix1.transpose();
                result.displayMatrix();
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
