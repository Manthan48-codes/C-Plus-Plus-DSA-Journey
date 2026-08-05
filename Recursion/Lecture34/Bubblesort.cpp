#include<iostream>

using namespace std ; 

void Bubblesort(int *arr , int n){
    if(n == 0 || n == 1){
        return ;
    }
    for(int i = 0 ; i < n - 1 ; i ++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]) ;
        }
    }

    Bubblesort(arr , n - 1 ) ;
}

int main(){
    int arr[6] = {5,7,8,3,1,9} ;

    Bubblesort(arr,6) ;
    for(int i = 0; i < 6 ; i ++){
        cout << arr[i] << " " ;
    }
    cout <<  endl ;


    return 0 ;
}