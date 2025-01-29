#include <iostream>

using namespace std;

// Function to calculate the determinant of a matrix
//int determinant(int matrix[3][3], int n) {
//    int det = 0;
//    
//    if (n == 1) {
//        return matrix[0][0];
//    }
//    
//    if (n == 2) {
//        // Determinant for 2x2 matrix
//        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
//    }
//
//    int temp[3][3];  // Temporary matrix to store cofactors
//    int sign = 1; // To alternate signs
//
//    for (int f = 0; f < n; f++) {
//        // Get cofactor matrix for first row
//        int row = 0;
//        for (int i = 1; i < n; i++) {
//            int col = 0;
//            for (int j = 0; j < n; j++) {
//                if (j != f) {
//                    temp[row][col] = matrix[i][j];
//                    col++;
//                }
//            }
//            row++;
//        }
//        // Add or subtract based on position
//        det += sign * matrix[0][f] * determinant(temp, n - 1);
//        sign = -sign;  // Alternate signs
//    }
//
//    return det;
//}

// Function to get the cofactor matrix for a given matrix
//void getCofactor(int matrix[3][3], int temp[3][3], int p, int q, int n) {
//    int i = 0, j = 0;
//
//    for (int row = 0; row < n; row++) {
//        for (int col = 0; col < n; col++) {
//            if (row != p && col != q) {
//                temp[i][j++] = matrix[row][col];
//                if (j == n - 1) {
//                    j = 0;
//                    i++;
//                }
//            }
//        }
//    }
//}

// Function to find the adjoint (adjugate) of a matrix
void adjoint(int matrix[3][3], int adj[3][3], int n) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1;
    int temp[3][3]; // Temporary matrix to store cofactors

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            getCofactor(matrix, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, n - 1);  // Transpose the cofactor matrix
        }
    }
}

int main() {
    int n ,m;
	cout<<"enter nuber of rows and column";
	cin>>n;
	cin>>m;  // Size of the matrix (fixed to 3x3 for simplicity)
    int matrix[n][m], adj[n][m];

    cout << "Enter the elements of the 3x3 matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the adjoint of the matrix
//    adjoint(matrix, adj, n);

    // Display the adjoint matrix
//    cout << "The adjoint (adjugate) of the matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

