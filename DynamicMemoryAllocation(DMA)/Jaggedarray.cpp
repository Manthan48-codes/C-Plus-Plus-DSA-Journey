#include <iostream>
using namespace std;

int main() {

    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    // Array of pointers
    int **arr = new int*[row];

    // To store number of columns of each row
    int *colSize = new int[row];

    // Input
    for(int i = 0; i < row; i++) {

        cout << "Enter number of columns for row " << i << ": ";
        cin >> colSize[i];

        // Allocate memory for this row
        arr[i] = new int[colSize[i]];

        cout << "Enter " << colSize[i] << " elements: ";

        for(int j = 0; j < colSize[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "\nJagged Array:\n";

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < colSize[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Delete memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] colSize;

    return 0;
}