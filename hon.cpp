#include <iostream>
using namespace std;

int main() {
    int matrix[2][2];
    int matrix1[2][2];
    int product[2][2] = {0}; // Initialize the product array to zero

    cout << "Enter values of matrix 1: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter values of matrix 2: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl << endl;
    }

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix1[i][j] << "  ";
        }
        cout << endl << endl;
    }

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += matrix[i][k] * matrix1[k][j]; // Corrected here
            }
        }
    }

    cout << "Product of the matrices is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << product[i][j] << "  ";
        }
        cout << endl << endl;
    }

    return 0;
}

