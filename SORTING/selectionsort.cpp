//SELECTION SORTING

#include <iostream>
using namespace std;

void selection(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        int minselection = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[minselection] > arr[j]) {
                minselection = j;
            }
        }

        swap(arr[i], arr[minselection]);
    }
}

int main() {

    int A[5] = {9, 5, 7, 4, 12};

    selection(A, 5);

    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }

    return 0;
}




