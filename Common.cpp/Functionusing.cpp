/*#include<iostream>
using namespace std ; 

bool prime(int n){
    for (int i  = 2 ; i < n ; i++){
        if(n%i == 0){
          return 0; ; 
        }
    }
    return 1;

}
int main(){
    int n ; 
    cin >> n ;
    if (prime(n)){
        cout << "Is a prime no " << endl ; 
    } 
    else {
    cout << "not a prime no " << endl ;
}
    return 0 ;

}


int ap(int n){
    int A = (3*n) + 7 ; 
    return A ;
}

int main(){
    int n ;
    cout << "give number to find nth term AP : " << endl ; 
    cin >> n ; 
    cout << "your nth term is " << ap(n)<< endl ; 
}


#include<iostream>
using namespace std;

int  Z(int a){
    int count = 0 ; 
    while(a > 0 ){
       if(a&1){
        count ++ ;
       }
       a = a >> 1 ;
    } 
    return count ;
}

int main(){
    int c , b ;
    cout << "Enter the vallue of A and B : " << endl ;
    cin >> c >> b ;

    cout << "Binary of A  : " << Z(c) << endl ; 
    cout << "Binary of B  : " << Z(b) << endl ; 

    cout << "Total Bit set of A and B of  1   :  " << Z(c) + Z(b) << endl ; 
}*/

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