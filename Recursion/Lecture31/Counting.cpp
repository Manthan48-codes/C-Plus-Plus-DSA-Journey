#include<iostream>

using namespace std ; 

int print(int n){
    if(n == 0){
        return 1 ;
    }
    int SmallPr = print(n - 1) ;

    cout << n << endl ; 

    //int SmallPr = print(n - 1) ;
}

int main(){
    int n ; 
    cin >> n ; 

    print(n)  ;

    return 0; 
}