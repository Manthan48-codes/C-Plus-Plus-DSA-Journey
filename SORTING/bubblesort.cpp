//BUBBLE SORTING 
#include<iostream>
using namespace std ; 

void bubble(int arr[] , int n ){
    for(int i = 1 ; i < n - 1 ; i ++){
        for(int j = 0 ; j < n - i ; j ++ ){
            if (arr[j] > arr[j+1]){
                swap(arr[j] ,arr[j + 1 ]) ; 
            }
        }
    }
}

int main() {

    int X[6] = { 4  , 2 ,  9 , 1 , 6 , 10 } ;

    bubble(X , 6) ;
    for(int i = 0 ; i < 6 ;  i ++ ) {

        cout << X[i] << " "  ; 

    }

    return 0 ;
}
