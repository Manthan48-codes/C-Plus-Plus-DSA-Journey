/*#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0 ; 
    int A = 1 ;
    while (n!=0){
        int bit = n%10 ;
        ans = ans + (bit*A) ; 
        A = A * 2 ;
        n = n/10 ;
    }

    cout<< ans << endl ;
    
    int m ;
    int mask = 0 ;

    if(ans == 0 ){
        cout << 0 << endl ; 
    }
    while(ans!=0){
    m = (mask << 1 ) | 1 ;
    ans >> 1 ; 
    } 

    
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;     // decimal number

    int ans = 0;
    int place = 1;
    int temp = n;

    // Decimal to Binary
    while(temp != 0) {
        int bit = temp % 2;
        ans = ans + bit * place;
        place *= 10;
        temp /= 2;
    }

    cout << "Binary = " << ans << endl;

    // Mask banana
    int mask = 0;
    temp = n;

    while(temp != 0) {
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    int complement = (~n) & mask;

    cout << "Complement Decimal = " << complement << endl;
}*/

#include<iostream>

using namespace std ;

long long factorial(int n){

    long long A = 1 ; 
    for (int i = 1 ; i <= n ; i++){ 
         A = A * i ;
    }
    
    return A ;   
}

long long ncr(int n , int r){
    long long num = factorial(n);
    long long B = factorial(n - r)* factorial(r) ;

    long long C = num / B ;

    return C ; 
}

int main(){
    int n ; 
    int r ; 
    cin >> n >> r ; 

    cout << "Your ans is " << ncr(n , r) << endl ; 
}