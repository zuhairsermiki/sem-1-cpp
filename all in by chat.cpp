#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the determinant of a 2x2 matrix
int determinant2x2(int matrix[2][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

// Function to calculate the determinant of a 3x3 matrix
int determinant3x3(int matrix[3][3]) {
    int det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
              matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
              matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    return det;
}

// Function to find the adjoint of a 2x2 matrix
void adjoint2x2(int matrix[2][2], int adj[2][2]) {
    adj[0][0] = matrix[1][1];
    adj[0][1] = -matrix[0][1];
    adj[1][0] = -matrix[1][0];
    adj[1][1] = matrix[0][0];
}

// Function to find the adjoint of a 3x3 matrix
void adjoint3x3(int matrix[3][3], int adj[3][3]) {
    adj[0][0] = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
    adj[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
    adj[0][2] = matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1];
    adj[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    adj[1][1] = matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0];
    adj[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);
    adj[2][0] = matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0];
    adj[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);
    adj[2][2] = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

// Function to find the inverse of a 2x2 matrix
bool inverse2x2(int matrix[2][2], float inv[2][2]) {
    int det = determinant2x2(matrix);
    if (det == 0) {
        cout << "Inverse does not exist (determinant is 0)" << endl;
        return false;
    }
    float invDet = 1.0 / det;
    inv[0][0] = matrix[1][1] * invDet;
    inv[0][1] = -matrix[0][1] * invDet;
    inv[1][0] = -matrix[1][0] * invDet;
    inv[1][1] = matrix[0][0] * invDet;
    return true;
}

// Function to find the inverse of a 3x3 matrix
bool inverse3x3(int matrix[3][3], float inv[3][3]) {
    int det = determinant3x3(matrix);
    if (det == 0) {
        cout << "Inverse does not exist (determinant is 0)" << endl;
        return false;
    }
    float invDet = 1.0 / det;

    int adj[3][3];
    adjoint3x3(matrix, adj);

    // Multiply adjugate by 1/determinant to get the inverse
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inv[i][j] = adj[i][j] * invDet;
        }
    }
    return true;
}

// Function to perform Gaussian elimination to reduce a matrix to RREF
void rref(int matrix[3][3]) {
    int lead = 0;
    int rowCount = 3;
    int columnCount = 3;

    for (int r = 0; r < rowCount; r++) {
        if (lead >= columnCount) return;

        int i = r;
        while (matrix[i][lead] == 0) {
            i++;
            if (i == rowCount) {
                i = r;
                lead++;
                if (columnCount == lead) return;
            }
        }

        swap(matrix[i], matrix[r]);

        int lv = matrix[r][lead];
        for (int j = 0; j < columnCount; j++) {
            matrix[r][j] /= lv;
        }

        for (int i = 0; i < rowCount; i++) {
            if (i != r) {
                int lv = matrix[i][lead];
                for (int j = 0; j < columnCount; j++) {
                    matrix[i][j] -= lv * matrix[r][j];
                }
            }
        }
        lead++;
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(float matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix2x2[2][2] = {{5, 3}, {2, 6}};
    int matrix3x3[3][3] = {{5, 3, 2}, {2, 6, 1}, {1, 4, 3}};
    int adj2x2[2][2], adj3x3[3][3];
    float inv2x2[2][2], inv3x3[3][3];

    // Determinant of 2x2
    cout << "Determinant of 2x2 matrix: " << determinant2x2(matrix2x2) << endl;

    // Determinant of 3x3
    cout << "Determinant of 3x3 matrix: " << determinant3x3(matrix3x3) << endl;

    // Adjoint of 2x2
    adjoint2x2(matrix2x2, adj2x2);
    cout << "Adjoint of 2x2 matrix:" << endl;
    displayMatrix(adj2x2);

    // Adjoint of 3x3
    adjoint3x3(matrix3x3, adj3x3);
    cout << "Adjoint of 3x3 matrix:" << endl;
    displayMatrix(adj3x3);

    // Inverse of 2x2
    if (inverse2x2(matrix2x2, inv2x2)) {
        cout << "Inverse of 2x2 matrix:" << endl;
        displayMatrix(inv2x2);
    }

    // Inverse of 3x3
    if (inverse3x3(matrix3x3, inv3x3)) {
        cout << "Inverse of 3x3 matrix:" << endl;
        displayMatrix(inv3x3);
    }

    // Reduced Row Echelon Form for 3x3
    cout << "Reduced Row Echelon Form of 3x3 matrix:" << endl;
    rref(matrix3x3);
    displayMatrix(matrix3x3);

    return 0;
}

