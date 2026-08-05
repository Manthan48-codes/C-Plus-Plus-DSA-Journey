/*
#include<iostream>

using namespace std ; 

int main(){

    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << a << endl;     // 10
    cout << *p << endl;    // 10
    cout << **q << endl;   // 10

    
    return 0 ; 
}

#include <iostream>
using namespace std;

int main() {
    int i = 5;

    int *p = &i;
    int **p2 = &p;

    cout << i << endl;
    cout << &i << endl;

    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    cout << p2 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;

    return 0;
}

//update pointer
#include <iostream>
using namespace std;

int main() {

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    i++;

    cout << "After" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}*/



#include <iostream>
using namespace std;

int main() {

    int i = 5;

    // Pointer
    int *p = &i;

    // Double Pointer
    int **p2 = &p;

    cout << "--------- Value ---------" << endl;
    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "**p2 = " << **p2 << endl;

    cout << "\n--------- Addresses ---------" << endl;
    cout << "&i = " << &i << endl;
    cout << "p = " << p << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << "\n--------- Pointer Addresses ---------" << endl;
    cout << "&p = " << &p << endl;
    cout << "p2 = " << p2 << endl;
    cout << "&p2 = " << &p2 << endl;

    cout << "\n--------- Updating Value ---------" << endl;

    (*p)++;
    cout << "After (*p)++ : " << i << endl;

    (**p2)++;
    cout << "After (**p2)++ : " << i << endl;

    cout << "\n--------- Relations ---------" << endl;

    cout << "p = " << p << endl;
    cout << "&i = " << &i << endl;

    cout << "*p = " << *p << endl;
    cout << "i = " << i << endl;

    cout << "*p2 = " << *p2 << endl;
    cout << "&p = " << &p << endl;

    cout << "**p2 = " << **p2 << endl;

    return 0;
}