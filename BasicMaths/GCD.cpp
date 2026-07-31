#include<iostream>

using namespace std ; 

int gcdnum(int a , int b){

    if(a == 0){
        return b ; 
    }
    if(b == 0){
        return a ; 
    }
    while(a!= b){
        if(a>b){
            a = a - b ;  
        }
        if(b>a){
            b = b - a ; 
        }
    }
    return a ; 
}
int main(){
    int a , b ; 
    cout << "Enter your two numbers : "  ; 
    cin >> a >> b ;

    int ans = gcdnum(a , b) ; 
    cout << "Your GCD number is : "<< ans ;
}