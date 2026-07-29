#include<iostream>
using namespace std ; 

int fibonacci(int n){

    if(n == 0 ){
        return 0 ;
    }

    if(n==1){
        return 0 ;
    }
    if(n==2){
        return 1 ; 
    }

    int A = 0  , B = 1 , C ;
    for(int i = 3 ; i <= n ; i ++ ){
    C = A + B ;
    A = B ;
    B = C ;
    }
    return B;
}

int main(){
    int n ;
    cout << "Enter your n to find nth term : " ;
    cin >> n ;

    cout << fibonacci(n) << endl ;
}