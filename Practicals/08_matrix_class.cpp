#include <iostream>
using namespace std;

class Matrix //Defining a class named Matrix
    {
        private: //Indicates that the following members are private and accessible only within th class.
            int ** data; // This declares a pointer to a pointer to an integer and is used to store the dynamically allocated memory for the matrix data.
            int rows; //Declaring member Variable to store number of rows.
            int cols; //Declaring member variable to store number of columns

        public: //Indicates that the following members are public and can be accessed outside the class.
            Matrix(int rows, int cols) : rows(rows), cols(cols) //Constructor  for the 'Matrix' class, which initializes the 'rows' and 'cols' variables.
                {
                    data = new int*[rows]; // Dynamically Allocates memory for an array of integer pointer(rows).
                    for(int i=0; i<rows; i++) //Loops through each row.
                        {
                            data[i] = new int[cols]; //Allocates memory for each row to store column values.
                        }
                }
            
        
        void inputMatrix() //This function will prompt the user to input matrix elements row by row and column by column
            {
                for(int i = 0; i<rows; i++)
                    {
                        for(int j =0; j<cols; ++j) //Using nested loop to iterate over each element of the matrix.
                            {
                                cin >> data[i][j];
                            }
                    }
            }


        void displayMatrix() //This function prints the matrix elements row by row.
            {
                cout << "Matrix:" <<endl;
                for(int i=0; i<rows; ++i)
                    {
                        for(int j = 0; j<cols; ++j)
                            {
                                cout << data[i][j]<< " ";
                            }
                            cout << endl;
                        
                    }
            }

        Matrix sum(const Matrix& m2) const //Here 'const' indicates that the object referred to by 'm2' cannot be modified within the function. '&' denotes that 'm2' is a reference to 'Matrix' object.Using a reference allows the function to directly access and operate on the original object passed to it, rather than creating a copy.  
            {
                if(rows != m2.rows || cols != m2.cols) //Checks if the Dimensions of both the matrices are equal or not.
                    {
                        cout << "Matrices are not of the same size" <<endl;
                        exit(1);
                    }
                
                Matrix result(rows, cols);
                for(int i= 0 ; i< rows; ++i)
                    {
                        for(int j = 0; j< cols; ++j)
                            {
                                result.data[i][j] = data[i][j] + m2.data[i][j];
                            }
                    }
                return result;
            }
        
        Matrix pdt(const Matrix& m2) const
            {
                if(cols != m2.rows) //Checks ig the number of columns in the first matrix is equal to the number of rows in the second matrix.
                    {
                        cout << "Matrices are not compatible" <<endl;
                        exit(1);
                    }

                Matrix result(rows,m2.cols); //Create a new matrix to store the product.

                for(int i = 0; i<rows; ++i)
                    {
                        for(int j = 0; j < m2.cols; ++j)
                            {
                                result.data[i][j] = 0;//Initialize the product element to 0.

                                for(int k =0; k<cols; ++k)
                                {
                                    result.data[i][j] += data[i][k] * m2.data[k][j]; //Compute the dot product of the ith row of the first matrix and the jth column of second matrix.
                                }
                            }
                    }
                return result; //Returns the resultant matrix.
            }

        Matrix transpose()const
            {
                Matrix result(cols,rows);
                for(int i =0; i<rows; ++i)
                    {
                        for(int j =0; j< cols; ++j)
                            {
                                result.data[j][i] = data[i][j];
                            }
                    }
                return result;
            }
    };

int main()
    {
        int opt, row1, col1, row2, col2;

        cout << "Enter number of rows for matrix1: ";
        cin >> row1;
        cout << "Enter number of columns for matrix1: ";
        cin >> col1;

        cout << "Enter number of rows for matrix2: ";
        cin >> row2;

        cout << "Enter number of columns for matrix2: ";
        cin >> col2;

        Matrix matrix1(row1, col1);
        Matrix matrix2(row2, col2);

        cout << "\nEnter elements for Matrix1: ";
        matrix1.inputMatrix();

        cout << "\nEnter elements for Matrix2: ";
        matrix2.inputMatrix();


        cout << "\nChose an operation:" <<endl;
        cout << "1. Add" <<endl;
        cout << "2. Product" <<endl;
        cout << "3. Transpose" <<endl;
        cin >>opt;

        Matrix result(row1, col1);

        if(opt == 1)
            {
                if(row1 == row2 && col1 == col2)
                    {
                        result = matrix1.sum(matrix2);
                        cout << "\nSum: \n";
                        result.displayMatrix();
                    }
                else
                    {
                        cout << "Error! Matrices are not equal." <<endl;
                    }
            }
        
        else if(opt == 2)
            {
                if(col1 == row2)
                    {
                        result = matrix1.pdt(matrix2);
                        cout << "Product: \n";
                        result.displayMatrix();
                    }
                
                else
                    {
                        cout << "Error! Matrices are not compatible." << endl;
                    }
            }

        else if(opt == 3)
            {
                result = matrix1.transpose();
                cout << "Transposed Matrix1:\n";
                result.displayMatrix();

                result = matrix2.transpose();
                cout << "Transposed Matrix2:\n";
                result.displayMatrix();
                
            }

        else
            {
                cout << "Invalid Option!"<<endl;
            }


    }
