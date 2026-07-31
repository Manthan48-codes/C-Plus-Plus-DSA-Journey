#include<iostream>

using namespace std ; 

inline int getmax(int &a , int &b ){
    return (a>b ? a : b )  // Tertiary operator(means if(a>b){return a}else{return b}); 
}

int main(){
    int a = 3 , b = 4  ;
    int ans = 0 ;
    
    //Inline function means (ans = a>b ? a : b )assigned value like macro 
    ans = getmax(a,b) ;
    cout << ans << endl ;

    a += 3 ;
    b += 1 ;
    //Inline function means (ans = a>b ? a : b )assigned value like macro 
    ans = getmax(a,b) ;
    cout << ans << endl ;


    return 0;
    
}