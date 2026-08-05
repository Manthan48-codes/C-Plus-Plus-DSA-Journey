#include<iostream>

using namespace std ; 

bool isSorted(int *arr , int n ){
    if(n == 0 || n == 1 ){
        return true ;
    }
    if(arr[0] > arr[1]){
        return false ; 
    }
    else{
        int moveNext = isSorted(arr + 1 , n - 1) ;
        return moveNext ; 
    }
}

int main(){
    int arr[6] = {1,2,3,102,14,15} ; 

    int ans = isSorted(arr,6) ;
    if(ans){
        cout << "Your array is sorted." << endl ; 
    }
    else{
        cout << "Your array is Not Sorted." << endl ;
    }

    return 0;
}