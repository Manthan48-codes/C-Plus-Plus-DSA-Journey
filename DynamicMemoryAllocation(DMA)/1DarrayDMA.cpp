#include <iostream>
using namespace std;

int main() {

    // -------- Static Memory Allocation --------
    int arr[5];

    cout << "Enter 5 elements for static array: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Static Array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -------- Dynamic Memory Allocation --------
    int n;
    cout << "Enter size of dynamic array: ";
    cin >> n;

    int *m = new int[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> m[i];
    }

    cout << "Dynamic Array: ";
    for(int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    // -------- Releasing Dynamic Memory --------
    delete[] m;
    m = nullptr;

    return 0;
}