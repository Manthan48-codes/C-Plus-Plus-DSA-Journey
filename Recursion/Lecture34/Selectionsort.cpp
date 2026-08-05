#include<iostream>

using namespace std ;

void Selection(int *arr , int n ){
    if(n == 0 ||n == 1){
        return ; 
    }
    int min = 0 ; 
    for(int j = 1 ; j < n ; j ++){
            if(arr[min] > arr[j]){
                min = j ;
            }
        }
    swap(arr[0] , arr[min]) ;
    

    Selection(arr + 1 , n - 1) ; 

}

int main(){
    int arr[6] = {7,8,9,4,5,2} ;

    Selection(arr , 6) ;
    for(int i = 0 ; i < 6 ; i ++){
        cout << arr[i] << " " ;
    }

    return 0 ;
}