#include<iostream>

using namespace std ; 

int power(int n){
    if(n == 0){
        return 1 ; 
    }
    int SmallPr = power(n-1) ;
    int BigPr = 2 * SmallPr ;

    return BigPr ; 
}

int main(){
    int n; 
    cin >> n;
    
    cout << power(n) << endl ; 

    return 0 ;
}