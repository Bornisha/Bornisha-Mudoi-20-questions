// This code is developed by Bornisha Mudoi
#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int mat[10][10]; // maximum size fixed to 10x10 for simplicity

public:
    // Constructor to input matrix
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    // Input matrix elements
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Display matrix
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix Addition
    Matrix add(Matrix b) {
        Matrix result(rows, cols);
        if (rows != b.rows || cols != b.cols) {
            cout << "Addition not possible, dimensions mismatch!\n";
            return result;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] + b.mat[i][j];
            }
        }
        return result;
    }

    // Matrix Subtraction
    Matrix subtract(Matrix b) {
        Matrix result(rows, cols);
        if (rows != b.rows || cols != b.cols) {
            cout << "Subtraction not possible, dimensions mismatch!\n";
            return result;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] - b.mat[i][j];
            }
        }
        return result;
    }

    // Matrix Multiplication
    Matrix multiply(Matrix b) {
        Matrix result(rows, b.cols);
        if (cols != b.rows) {
            cout << "Multiplication not possible, dimensions mismatch!\n";
            return result;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < b.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * b.mat[k][j];
                }
            }
        }
        return result;
    }

    // Transpose of matrix
    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[j][i] = mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    Matrix A(r1, c1);
    A.input();

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    Matrix B(r2, c2);
    B.input();

    cout << "\nMatrix A:\n";
    A.display();
    cout << "\nMatrix B:\n";
    B.display();

    cout << "\nAddition (A+B):\n";
    Matrix sum = A.add(B);
    sum.display();

    cout << "\nSubtraction (A-B):\n";
    Matrix diff = A.subtract(B);
    diff.display();

    cout << "\nMultiplication (A*B):\n";
    Matrix prod = A.multiply(B);
    prod.display();

    cout << "\nTranspose of Matrix A:\n";
    Matrix tA = A.transpose();
    tA.display();

    cout << "\nTranspose of Matrix B:\n";
    Matrix tB = B.transpose();
    tB.display();

    return 0;

}
