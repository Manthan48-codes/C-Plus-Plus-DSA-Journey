//Counting prime numbers in Given number

#include<iostream>
#include<vector>

using namespace std ; 

int primenum(int n){
    vector<bool> k(n + 1 , true) ; 
    int count = 0 ; 
    k[0] = k[1] = false ;
    for(int i = 2 ; i < n ; i ++){
        if(k[i]){
            count ++ ; 
            for(int j = i * 2 ; j < n ; j = j + i){
                k[j] = 0 ;
            }
        }
    }
    return count ; 
}

int main(){
    int n ; 
    cout << "Enter your number : " ; 
    cin >> n  ; 

    int m = primenum(n) ;
    cout << "The total prime number before your number is : " << m << endl ;

    return 0 ; 

}