#include <iostream>

using namespace std;

int main() {
    int rows = 4, cols = 4;
    int matrix[4][4] = { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    };
    
    int searchValue, found = 0;

    cout << "Enter the value to be searched: ";
    cin >> searchValue;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == searchValue) {
                found = 1;
                cout << "Value found at row " << i + 1 << ", column " << j + 1 << endl;
            }
        }
    }

    if (!found) {
        cout << "Value not found in the matrix." << endl;
    }

    return 0;
}

