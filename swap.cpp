#include<iostream>
using namespace std ; 

void reverse(int arr[] , int n){
    int start = 0 ; 
    int end = n - 1 ; 

    while (start < end){
        swap(arr[start] , arr[end]) ;
        start ++ ;
        end -- ;
    }
    
}

void printArray(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++ ){
        cout << arr[i]<< " " ;
    }
    cout << endl ;
}

int main(){
    int x[6] = {1 , 2 , 3 , 4, 5 , 6 };
    int y[5]= {1,2,3,4,5} ; 

    reverse(x , 6); 
    reverse(y , 5);
    
    printArray(x, 6 );
    printArray(y, 5);

    return 0 ;
}