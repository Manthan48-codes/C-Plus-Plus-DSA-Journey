#include<iostream>

using namespace std ; 

int sumS(int arr[] , int n){
    int sum = 0 ; 
    for(int i = 0 ; i < n ; i ++){
        sum += arr[i] ; 
    }

    return sum ; 
}

int main(){
    int a = 5 ; 
    int &b = a ; 
    cout << a << endl ;
    a ++ ; 
    cout << a << endl ;
    a +=2 ; 
    cout << a << endl ;
    b ++ ; 
    cout << b << endl ;

    int arr[5] = {1,2,3,4,5} ; 
    cout << sumS(arr , 5) << endl ;

    return 0 ; 
}