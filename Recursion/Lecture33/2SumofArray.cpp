#include<iostream>

using namespace std ; 

int getSum(int *arr , int size){
    if(size == 0){
        return 0 ;
    }
    if(size == 1){
        return arr[0] ; 
    }
    int Small = getSum(arr + 1 , size - 1) ; 
    int sum = arr[0] + Small ; 

    return sum ; 
}

int main(){
    int arr[6] = {9,9,9,9,9,9} ; 
    int size = 6 ; 

    int ans = getSum(arr , size) ; 

    cout << "Your Sum is : " << ans << endl ;


    return 0 ;
}