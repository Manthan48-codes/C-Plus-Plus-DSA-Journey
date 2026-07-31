#include<iostream>

using namespace std ;

int main(){
    int n = 5 ; 
    cout << "Num is " << n << endl ; 

    cout << "The address of num is : " << &n << endl ; 

    /*int *p = &num ; 
    cout << "The address is : " << p << endl ; 
    cout << "The value is : " << *p << endl ;
    cout <<"Size of integer : " << sizeof(num) << endl ;
    cout << "Size of address : " << sizeof(*p) << endl ;

    double p1 = 3.14 ;
    double *ptr1 = &p1 ; 
    cout << "The address of num is : " << &p1 << endl ; 
    cout << "The address is : " << ptr1 << endl ; 
    cout << "The value is : " << *ptr1 << endl ;
    cout <<"Size of integer : " << sizeof(p1) << endl ;
    cout << "Size of address : " << sizeof(*ptr1) << endl ;
    cout << "Size of address : " << sizeof(ptr1) << endl ;
*/
    int *ptr = 0 ; 
    ptr = &n ; 
    cout << "The address is : " << ptr << endl ; 
    cout << "The value is : " << *ptr << endl ;
    
    int num = 5;
    int a = num ; 
    
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    //copying a pointer
    int *q = p ; 
    cout << p << "-" << q << endl ;
    cout << *p << "-" << *q << endl ;


    //important concept
    int i = 3; 
    int *t = &i;
    //cout << (*t)++ << endl;
    *t = *t +1;
    cout << *t << endl;
    cout << " before t" << t << endl; 
    t=t+ 1;
    cout <<"After t " << t << endl;
    return 0 ; 
} 