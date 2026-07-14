//OCCURENCE OF ANY NUMBER ITS FIRST OCCUREMCE AND ITS LAST . 
/*#include<iostream>
using namespace std ; 

int firstoccur(int array[] , int n , int key){
        int start = 0 ;
        int end = n - 1 ;
        int ans = -1 ; 
        while(start <= end){
            int mid = start + (end - start )/2  ;
        if(array[mid] == key){
            ans = mid ; 
            end = mid - 1 ;  
        }
        else if(array[mid] > key){
            end = mid - 1; 
        }
        else if(array[mid] < key){
            start = mid + 1  ;
        }
        mid = start + (end - start )/2  ;
  x  }
    return ans ; 
}
int lastoccur(int array[] , int n , int key){
        int start = 0 ;
        int end = n - 1 ;
        int ans = -1 ; 
        while(start <= end){
            int mid = start + (end - start )/2  ;
        if(array[mid] == key){
            ans = mid ; 
            start = mid + 1 ;  
        }
        else if(array[mid] > key){
            end = mid - 1; 
        }
        else if(array[mid] < key){
            start = mid + 1  ;
        }
        mid = start + (end - start )/2  ;
    }
    return ans ; 
}
int main(){ 
    int A[8] ={0 , 0 , 0 , 1 , 1 , 2 , 2 , 2 } ;

    int B = firstoccur(A , 8 , 1 ) ;
    int C = lastoccur(A , 8 , 1 ) ;
    cout <<"First occurence of 1 is " <<  B << endl ;
    cout << "Last occurence of 1 is "  <<  C << endl ;
    cout << B << " "<< "AND"<< " " << C << endl ;

    int D =  lastoccur(A , 8 , 1 ) -  firstoccur(A , 8 , 1 ) + 1 ;
    cout << "The total no of occurence is  " << D << endl  ; 

    return 0 ;
} 

// FOR FINDING HIGHEST NUMBER IN GIVEN ARRAY 
#include<iostream>
using namespace std ; 

int top(int array[] , int n ){
    int start = 0  ;
    int end = n - 1 ; 
   
    while(start < end){
        int mid = start + (end -start)/2  ; 

    if(array[mid] < array[mid + 1]){
        start = mid + 1 ; 
    }
    else {
        end =  mid ;
    }
    }
    return start ;
}

int main(){

    int A[6] = { 1 , 4 , 5 ,6 , 3 , 1 } ; 

    int B = top(A , 6) ; 
    cout << "The mountain top index no. is " << B << endl ;
    cout << "The mountain top no. is " << A[B] << endl ;

}

// FOR FINDING PIVOT OF AN ARRAY
#include<iostream>
using namespace std ; 

int pivotn(int array[] , int n){
    int start = 0  ;
    int end = n - 1 ; 
    while(start < end){
        int mid = start + (end - start)/2  ;
        if(array[mid] >= array[0]){
            start = mid  + 1  ; 
        }
        else{
            end = mid ; 
        }
    }
    return start  ;
}

int main(){
    int A[6]  = {6,7,8,2,3,4} ; 

    int B = pivotn( A  , 6)  ; 
    cout << "The index of pivot number is " << B << endl ;
    cout << "The Pivot number is " << A[B] << endl ;


    return 0   ;
}

//BINARY SEARCH FOR SORTED ARRAY

#include<iostream>
using namespace std ; 

bool present(int array[]  ,int n  , int key){
    int start  =  0 ;
    int end =  n - 1  ;
    while( start <= end ){

        int mid = start + (end - start)/2   ;

        if(array[mid] == key){
           return true  ;
        }
        else if(array[mid] < key){
            start = mid + 1  ; 
        }
        else if(array[mid] > key){
            end = mid - 1 ; 
        }
    }
    return false  ; 
}
   

int main(){
    int A[6] = {1,2,3,4,5,6} ;
    int key  =  2  ; 

    int B = present(A , 6 , 1 )  ;
    cout << B <<endl ; 

}
//The index and number of binary search of rotated array  . 
#include<iostream>
using namespace std ; 

int pivot(int arr[]  , int n ){
    int s = 0 ; 
    int e = n - 1  ;
    while(s < e){
        int m = s + (e - s)/2  ; 
        
        if(arr[m] >= arr[0]){
            s  = m  +  1   ;
        }
        else{
            e = m  ;
        }
    }
    return s  ;
}

int binarysearch(int arr[] , int n  , int s , int e , int key){

    int start = s ;
    int end = e ; 
    int mid = start + (end - start)/2  ;
    while(start <= end){
        if (arr[mid] == key){
            return mid  ;
        }
        else if(arr[mid] > key){
            start = mid + 1  ;
        }
        else{
            end = mid - 1  ;
        }
        mid = start + (end - start)/2  ;
    }
    return -1 ; 
}

int main(){

    int A[6] = {7,8,9,1,2,3} ; 

    int P = pivot(A , 6)  ;
    int K = 2 ; 

    if( A[P] <= K  &&  A[5] >= K){
        cout<< "The index of binary search of rotated array is " << binarysearch(A , 6 , P , 5 , 2) << endl  ; 
        cout<< "The Number of binary search of rotated array is " << A[binarysearch(A , 6 , P , 5 , 2)] << endl  ; 
    }
    else{
        cout << "The index of binary search of rotated array is "<< binarysearch(A , 6 , 0 , P , 2) << endl  ; 
         cout<< "The Number of binary search of rotated array is " << A[binarysearch(A , 6 , 0 , P , 2)] << endl  ; 
    }


    return 0  ;
}

// SQUARE ROOT THROUGH BINARY SEARCH 
#include<iostream>
using namespace std ; 

int root( int n ){
    int s = 0 ; 
    int e = n ; 
    int m = s + (e - s)/ 2  ; 

    int ans = -1 ; 

    while(s < e){
        if(m*m < n){
            ans = m ;
            s  =  m + 1 ; 
        }
        else if(m*m > n){
            e = m - 1 ; 
        }
        else if(m*m == n){
            return m ; 
        }
         m = s + (e - s)/ 2  ; 

    }
    return ans ; 
}

int main(){
    
    int n ; 
    cin >> n ; 

    int A = root(n) ; 

    cout << "Squre root of n is " << A << endl ; 
    return 0  ;
}
    */