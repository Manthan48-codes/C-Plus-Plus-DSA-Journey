/*
#include<iostream> 
using namespace std ; 

bool studentcount(int arr[] , int n , int x , int m ){

    int count = 1 ; 
    int tsum = 0  ;
    for(int i = 0 ; i <= x ; i++){
        if(tsum + arr[i] <= m){

            tsum += arr[i]  ;
            
        }
        else {
            count ++ ;
            if(count > m || arr[i] > m){
                return false ; 
            }
            tsum = arr[i]  ;
        }
    }
    return true ; 

}
int book(int arr[]  , int n ){
    int s = 0; 
    int sum = 0 ;
    int B = -1 ; 
    for(int i = 0 ; i <= n ; i ++ ){
        sum = sum + arr[i]   ;
    }
    int A = sum   ;
    int e = A ; 
    int m = s + (e - s)/2 ; 

    while(s < e){
        if(studentcount( arr ,  n ,  m )){
            e = m - 1 ; 
        }
        else if(A <= m){
            s = m + 1 ; 
            B = m  ;
        }
        m = s + (e - s)/2 ;
    }
    return B  ;
}
int main(){

    int A[4] = {10,20,30,40} ; 
    int n = 2  ; 

    cout << book(A , 2) << endl ; 


    return 0  ;
}

//BOOK ALLOCATION PROBLEM 

#include<iostream> 
using namespace std ;

bool studentcount(int arr[] , int n , int student , int mid ){
    int count = 1 ; 
    int totalsum = 0 ; 
    for(int j = 0 ; j < n ; j ++ ){
        if(totalsum + arr[j] <= mid){
            totalsum = totalsum + arr[j] ; 
        }
        else{
            count ++ ;
            if(count > student || arr[j] > mid ){
                return false ; 
            }
            totalsum = arr[j]  ;
        }

    }
    return true ; 
}

int book(int arr[] , int n , int student){
    int s = arr[0];

for(int i = 1; i < n; i++) {
    if(arr[i] > s) {
        s = arr[i];
    }
}
    int B = 0 ; 
    int ans = -1 ;
    for(int i = 0 ; i < n ; i ++){
        B = B + arr[i]  ; 
    }
    int sum = B ;
    int e = sum ; 
    int mid= s + (e-s)/2  ; 
    while(s <= e){
        if(studentcount(arr , n , student , mid) ){
            ans = mid ; 
            e = mid - 1 ; 
        }
        else{
            s = mid + 1  ;
        }
        mid= s + (e-s)/2  ;
    }
    return ans ; 
}

int main(){

    int A[4] = { 10, 20, 30, 40 }  ;
    int student = 2 ; 

    int X = book(A , 4 , 2) ; 

    cout << X << endl  ;


    return 0  ;
}


//PAINTER PARTIAN PROBLEM  
#include<iostream>
using namespace std ; 

bool painters(int arr[]  , int n , int painter , int  mid){
    int count = 1 ; 
    int extsum = 0 ; 
    for(int k = 0 ; k < n ; k ++ ){
        if(extsum + arr[k] <= mid){
            extsum += arr[k] ;  
        }
        else{
            count ++ ;
            if(arr[k] > mid || count > painter){
                return false ; 
            }
            extsum = arr[k] ; 
        }
    }
    return true ; 
}

int partian(int arr[]  ,int n , int painter){
    int start = arr[0];

for(int k = 1; k < n; k++){
    if(arr[k] > start){
        start = arr[k];
    }
}
    int E = 0 ;
    for(int i = 0 ; i < n ; i++){
        E = E + arr[i] ; 
    }
    int sum = E ; 
    int end = sum ;
    int mid = start + (end - start)/ 2 ; 
    int X = - 1 ; 
    while(start <= end){
        if(painters(arr , n , painter , mid)){
            X = mid ; 
            end = mid - 1 ;  
        }
        else {
            start = mid + 1 ; 
        }
        mid = start + (end - start)/ 2 ; 
        }
        return X ; 
    }


int main(){

    int A[5] = {100 , 120 , 130 , 150 , 180 }   ; 
    int painters = 2 ; 

    cout << "The minimum possible maximum time of painter is " << partian(A , 5 , 2 ) << endl ;

}
    */ 