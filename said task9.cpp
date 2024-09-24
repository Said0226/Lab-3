#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    // Input the 3x3 matrix from the user
    cout << "Enter 9 elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transposed matrix
    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

