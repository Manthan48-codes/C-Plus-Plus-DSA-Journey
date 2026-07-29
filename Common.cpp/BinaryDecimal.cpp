//DECIMAL TO BINARY 
#include<iostream>

using namespace std ; 

int main(){
    int n ; 
    cout << "Enter a no to convert decimal to binary : " ; 
    cin >> n ; 
    int ans = 0 ;
    int A = 1 ;
    while(n!=0){
        int bit = n%2 ; 
        ans = ans + bit*A ; 
        A = A*10 ; 
        n = n/2 ;
    }
    cout << "The binary digit of your n is " << ans << endl ; 

    return 0 ; 
}

//BINARY TO DECIMAL
#include<iostream>

using namespace std ; 

int main(){
    int n ; 
    cout << "Enter a no to convert binary to decimal : " ; 
    cin >> n ; 
    int ans = 0 ;
    int A = 1 ;
    while(n!=0){
        int bit = n%10 ; 
        ans = ans + bit*A ; 
        A = A*2 ; 
        n = n/10 ;
    }
    cout << "The decimal number of your n is " << ans << endl ; 

    return 0 ; 
}