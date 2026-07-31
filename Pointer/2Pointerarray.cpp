#include<iostream>

using namespace std ; 

int sum (int *arr ,int n){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i ++ ){
        sum += arr[i] ; 
    }

    return sum ; 
}

int main(){

    //int arr[10] = {1,2,3,4,5} ; 

    //int *ptr = &arr ; 

   /* cout << "The address of your array : " << arr << endl ;
    cout << "The address of your array : " << &arr[9] << endl ;

    //cout << "The value of your array : " << *ptr << endl ; 

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl; 
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;

    int i = 0 ; 
    //i[arr] = *(i + arr) 
    cout << i[arr]  ; 

   
    // Array of size 10
    // Remaining elements are initialized to 0
    int b[10] = {1, 2};

    // Prints the address of the whole array
    // (Same address as first element, but different type)
    cout << &b << endl;

    // Array name acts as a pointer to the first element
    cout << b << endl;

    // Address of the first element
    cout << &b[0] << endl;

    // Pointer storing the address of the first element
    int *c = &b[0];

    // Prints the address stored in pointer c
    cout << c << endl;

    // Dereference: prints the value at that address
    cout << *c << endl;

    // Prints the address of the pointer variable itself
    cout << &c << endl;

*/

    int arr[5] = {1,2,3,4,5} ;
    cout << arr << endl ; 
    cout << sum(arr , 5) << endl ;


    //We write 8 beacause 8th term is null character ( \0 )
    char num[8] = "Manthan" ;
    cout << num << endl ; 
    return 0 ; 
}