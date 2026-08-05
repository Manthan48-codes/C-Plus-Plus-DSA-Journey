#include<iostream>

using namespace std ; 

void getName(int n ,string arr[]){
    if(n==0){
        return ;
    }
    int digit = n % 10 ; 
    n = n / 10;

    getName(n , arr);

    cout << arr[digit] << " " ;
}

int main(){
    int a ; 
    cin >> a ; 

    string arr[10] = {"Zero" , "One" , "Two" , "Three" , "Four" ,
                        "Five" , "Six" , "Seven" , "Eight" , "Nine"} ;

    if(a == 0){
        cout << "Zero"; 
        return 0 ;
    }

    getName(a , arr) ; 

    return 0;
}