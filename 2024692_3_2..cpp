#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
void checkMatrixType(int matrix[3][3], int size);
void checkMatrixOrder(int rows, int cols);
void calculateMatrixTranspose(int matrix[3][3], int result[3][3], int size);
void calculateMatrixAdjoint(int matrix[3][3], int result[3][3], int size);
void calculateMatrixInverse(int matrix[2][2]);
void multiplyMatrices(int matrix1[3][3], int rows1, int cols1, int matrix2[3][3], int rows2, int cols2, int result[3][3]);

int main() {
    int choice, size;
    int matrix[3][3], result[3][3];
    int matrix1[3][3], matrix2[3][3];
    int rows1, cols1, rows2, cols2;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: 
            cout << "Enter size (2 or 3): ";
            cin >> size;
            cout << "Enter elements of the matrix:\n";
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    cin >> matrix[i][j];
            checkMatrixType(matrix, size);
            break;

        case 2: 
            cout << "Enter rows and columns: ";
            cin >> rows1 >> cols1;
            checkMatrixOrder(rows1, cols1);
            break;

        case 3: 
            cout << "Enter size (2 or 3): ";
            cin >> size;
            cout << "Enter elements of the matrix:\n";
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    cin >> matrix[i][j];
            calculateMatrixTranspose(matrix, result, size);
            cout << "Transpose of the matrix:\n";
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++)
                    cout << result[i][j] << " ";
                cout << endl;
            }
            break;

        case 4: 
            cout << "Enter size (2 or 3): ";
            cin >> size;
            cout << "Enter elements of the matrix:\n";
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    cin >> matrix[i][j];
            calculateMatrixAdjoint(matrix, result, size);
            cout << "Adjoint of the matrix:\n";
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++)
                    cout << result[i][j] << " ";
                cout << endl;
            }
            break;

        case 5: // Inverse of a 2x2 matrix
            cout << "Enter a 2x2 matrix:\n";
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    cin >> matrix[i][j];

            break;

        case 6: 
            cout << "Enter rows and columns of first matrix: ";
            cin >> rows1 >> cols1;
            cout << "Enter elements of the first matrix:\n";
            for (int i = 0; i < rows1; i++)
                for (int j = 0; j < cols1; j++)
                    cin >> matrix1[i][j];

            cout << "Enter rows and columns of second matrix: ";
            cin >> rows2 >> cols2;
            if (cols1 != rows2) {
                cout << "Matrix multiplication not possible.\n";
                break;
            }
            cout << "Enter elements of the second matrix:\n";
            for (int i = 0; i < rows2; i++)
                for (int j = 0; j < cols2; j++)
                    cin >> matrix2[i][j];

            multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, result);
            cout << "Result of matrix multiplication:\n";
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < cols2; j++)
                    cout << result[i][j] << " ";
                cout << endl;
            }
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}


void displayMenu() {
    cout << "\nMatrix Operations Menu:\n";
    cout << "1. Identify the type of matrix\n";
    cout << "2. Identify the order of the matrix\n";
    cout << "3. Find the transpose of a matrix\n";
    cout << "4. Find the adjoint of a matrix\n";
    cout << "5. Find the inverse of a matrix\n";
    cout << "6. Multiply two matrices\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

void checkMatrixType(int matrix[3][3], int size) {
    bool isDiagonal = true, isScalar = true, isIdentity = true, isZero = true;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                if (matrix[i][j] == 0) isDiagonal = false;
                if (matrix[i][j] != 1) isIdentity = false;
            } else {
                if (matrix[i][j] != 0) isDiagonal = isScalar = isIdentity = false;
            }
            if (matrix[i][j] != 0) isZero = false;
        }
    }

    if (isZero)
        cout << "Matrix is Zero.\n";
    else if (isIdentity)
        cout << "Matrix is Identity.\n";
    else if (isScalar)
        cout << "Matrix is Scalar.\n";
    else if (isDiagonal)
        cout << "Matrix is Diagonal.\n";
    else
        cout << "Matrix is Square but not special.\n";
}

void checkMatrixOrder(int rows, int cols) {
    cout << "Order of the matrix: " << rows << "x" << cols << endl;
}

void calculateMatrixTranspose(int matrix[3][3], int result[3][3], int size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[j][i] = matrix[i][j];
}

void calculateMatrixAdjoint(int matrix[3][3], int result[3][3], int size) {
    
    if (size == 2) {
        result[0][0] = matrix[1][1];
        result[0][1] = -matrix[0][1];
        result[1][0] = -matrix[1][0];
        result[1][1] = matrix[0][0];
    }
}

void calculateMatrixInverse(int matrix[2][2]) {
    int det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    if (det == 0) {
        cout << "Inverse cannot be calculated (determinant is 0).\n";
        return;
    }
    cout << "Inverse of the matrix:\n";
    cout << matrix[1][1] / det << " " << -matrix[0][1] / det << endl;
    cout << -matrix[1][0] / det << " " << matrix[0][0] / det << endl;
}

void multiplyMatrices(int matrix1[3][3], int rows1, int cols1, int matrix2[3][3], int rows2, int cols2, int result[3][3]) {
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
}