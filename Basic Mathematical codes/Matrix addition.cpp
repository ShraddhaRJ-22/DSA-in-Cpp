#include<iostream>
using namespace std;

int main() {
    // Define three 2x2 matrices
    int matA[2][2], matB[2][2], matC[2][2];

    // Input elements for the first matrix
    cout << "Enter 1st matrix elements: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> matA[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter 2nd matrix elements: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> matB[i][j];
        }
    }

    // Perform matrix addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    // Display the result matrix
    cout << "Matrix Addition: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matC[i][j] << " "; // Print each element of the result matrix
        }
        cout << endl; // Print a newline after each row
    }

    return 0;
}

