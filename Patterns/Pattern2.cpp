/*#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;

    int row = n ;
    while(row > 0 ){
        int col= 1 ;
        while(col <= row){
            cout << col  ;
            col ++ ;
        }

        int A = 2 ;
        while( A < n ){
            cout<< '*' ;
            A ++ ;

        }
        cout << endl ;
        row -- ;
    }
}
#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>> n ;

    int row = 1;
    while (row <= n) {

        // Left numbers
        int col = 1;
        while (col <= n - row + 1) {
            cout << col;
            col++;
        }

        // Stars
        int star = 1;
        while (star <= (row - 1) * 2) {
            cout << "*";
            star++;
        }

        // Right numbers
        col = n - row + 1;
        while (col >= 1) {
            cout << col;
            col--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
    */

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = n;

    while(row > 0) {

        // Left numbers
        int col = 1;
        while(col <= row) {
            cout << col;
            col++;
        }

        // Stars
        int star = 1;
        while(star <= (n - row) * 2) {
            cout << '*';
            star++;
        }

        // Right numbers
        int right = row;
        while(right >= 1) {
            cout << right;
            right--;
        }

        cout << endl;
        row--;
    } 

    return 0;
}