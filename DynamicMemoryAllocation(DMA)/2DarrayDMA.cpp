#include <iostream>
using namespace std;

int main() {

    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    int col;
    cout << "Enter number of columns: ";
    cin >> col;

    // Allocate memory for rows
    int **arr = new int*[row];

    // Allocate memory for columns
    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input
    cout << "Enter " << row * col << " elements:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "\n2D Array:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Delete each row
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }

    // Delete array of pointers
    delete[] arr;

    return 0;
}
