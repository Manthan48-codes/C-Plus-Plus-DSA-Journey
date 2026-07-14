//ALTERNATE SWAPING
/*#include<iostream>
using namespace std ;

void my(int arr[] , int n ){

    int start = 0 ; 
    while(start + 1 < n){
    int end = start + 1 ;
    swap(arr[start], arr[end]) ; 
    start = start + 2  ;
    } 
}

void printM(int arr[] , int n){
    for (int i = 0 ; i < n ; i ++ ){
        cout << arr[i] << " " ; 
    }
    cout << endl ;
}
int main(){
    int A[5] = {1,2,3,4,-5};
    int B[6] ={6,-5,4,-3,2,1} ; 

    my(A , 5 );
    my(B , 6 );
    
    printM(A , 5) ; 
    printM(B , 6) ; 
    
   return 0 ; 
} 


//triplet to find given sum    
#include<iostream>
using namespace std ;

int main(){

    int k ;
    cin >> k ; 

    int i[6] = { 1 , 2 , 3, 4, 5 , 6} ;

    for (int x = 0 ; x < 6 ; x ++ ){
        for(int y = x + 1 ; y < 6 ; y ++ ){
            for(int z = y + 1 ;z < 6 ; z ++  ){
                if(i[x] + i[y] + i[z] == k){
                    cout << i[x]<< " " << i[y] << " " << i[z] << endl; 
                }
                else{
                    cout << "Given value is higher than input array . " << endl ;
                }
            }
        }
    }
    return 0 ;
}
// SORTING OF 1 AND 0  

#include<iostream>
using namespace std ;

void printarray(int a[] , int n ){
    for (int i = 0 ; i < n ; i ++){
        cout << a[i] << " " ; 
    }
    cout << endl ;
}

void sort(int a[] , int n){
    int left = 0 ; 
    int right = n - 1 ;
        while(left < right ){
            if (a[left] == 0){
                left ++ ;
            }
            else if(a[right] == 1){
                right -- ; 
            }
            else if(a[left] == 1 && a[right] == 0 ){
                swap(a[left] , a[right]) ; 
            }
        }
    }




int main (){
    int A[13] = {1,0,0,0,0,0,0,1,1,0,1,0,0} ;

     
    sort( A , 13) ; 
    printarray( A , 13) ;
}


// SORTING OF 0 , 1 , 2 :
#include<iostream> 
using namespace std ; 

void printarray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ; 
    }
    cout << endl ;  
}

void sorting(int arr[] , int n ){
    int low = 0 ;
    int mid = 0 ; 
    int high = n - 1 ; 

    while(mid <= high){
        if(arr[mid] == 0 ){
            swap(arr[mid] , arr[low]) ; 
            low ++ ; 
            mid ++ ; 
        }
        else if(arr[mid] == 1 ){
            mid ++ ; 
        }
        else if(arr[mid] == 2 ){
            swap(arr[mid] , arr[high]) ; 
            high -- ; 
        }
    }
}



int main(){

    int A[6] = { 1,0,2,1,0,2 } ;

    sorting( A  , 6 );
    printarray( A  , 6 ) ;

    return 0 ; 
}

*/