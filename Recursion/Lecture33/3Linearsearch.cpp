#include<iostream>

using namespace std ;

void printarray(int *arr , int n){
    cout << "Size of array : " << n << endl ;
    for(int i = 0 ; i < n ; i ++){
        cout <<"Your array : "<< arr[i] << " " ; 
    }
    cout << endl ;
}

bool linearSearch(int* arr , int size , int k){
    printarray(arr,size) ;
    if(size == 0){
        return false ; 
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool Remaining = linearSearch(arr+1,size-1,k) ;
        return Remaining ; 
    }
}

int main(){
    int arr[6] = {7,8,2,21,9,17} ; 
    int size = 6 ; 
    int key = 22 ;

    int ans = linearSearch(arr , size , key) ;
    if(ans){
        cout << "Found" << endl ;
    }
    else{
        cout << "Not Found" << endl ;
    }

    return 0 ; 
}