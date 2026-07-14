//REVERSE OF ARRAY 
#include<iostream> 
#include<vector>

using namespace std ; 

void reverse(vector<int>&Z , int n, int m){
    int start = m ; 
    int end = n - 1 ; 
    while(start < end){
        swap(Z[start] ,Z[end]) ; 
        start ++ ; 
        end -- ; 
    }
}

int main(){
    vector<int>A(5) ; 
    A = {5,4,3,2,1} ; 
    vector<int>B(6) ; 
    B ={6,5,4,3,2,1} ;

    reverse(A , 5 , 2) ; 
    for(int i = 0 ; i < 5 ; i ++ ){
        cout << A[i] << " "   ;
    }

    cout << endl ; 


    reverse(B , 6 , 3) ; 
    for(int j = 0 ; j < 6 ; j ++ ){
        cout << B[j] << " "  ; 
    } 
}