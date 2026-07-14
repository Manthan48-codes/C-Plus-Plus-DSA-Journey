/*#include<iostream>
using namespace std ; 

int max(int num[]  , int n ){
    int max = (-2^31) ;
    for(int i = 0 ; i < n ; i++ ){
        if(num[i] > max){
            max = num[i] ; 
        } 
    }
    return max ; 
}
int min(int num[] , int n){
    int min = 2^31 ;
    for( int i = 0 ; i < n ; i ++ ){
        if (num[i] < min){
            min = num[i] ; 
        }
    }
    return min ; 
}

int main(){
    int size ; 
    cin >> size ;
    int num[100];
    for (int i = 0 ; i < size ; i++){
        cin >> num[i]; 
    }
    cout << "The maximum value : " << max(num , size) << endl; 
    cout << "The minimum value : " << min(num , size) << endl;

}
*/
// sum of an arrays
/*
#include<iostream>
using namespace std ; 

int sum(int arr[] ,  int n){
    int A  = 0 ; 
    for(int i= 0 ; i < n ; i++ ){
        A = arr[i] + A ; 
    }
    return A ; 
}

int main(){
    int n ; 
    cin >> n ; 
    int arr[n] ; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ; 
    }
    
    cout << "The sum of an array is " << sum( arr , n ) << endl  ; 
}
#include<iostream>
using namespace std ;


bool search(int arr[] , int size , int key ){
    for (int i = 0 ; i < size ; i ++){
        if( arr[i] == key){
            return 1 ; 
        }
    }
    return 0 ;
}

int main(){
    int arr[10] = { 0 , 10 , 11 , 12 , -13 , 15, 15, 111, 14 ,-120 }  ; 
    int key ; 
    cout << "Enter your ker to found in Array : " ;
    cin >> key ;

    bool found  = search(arr, 10 , key ) ; 
    if(found){
        cout << "yes" << endl ;
    }
    else{
        cout << "absent " << endl ;
    }
    
}*/

#include<iostream>
using namespace  std;

void multi(int arr[] , int n){
    int multix = 1 ; 
    for (int i  = 0 ; i < n ; i ++ ){
        multix = multix * arr[i]  ;
    } 
        for(int j = 0 ; j < n ; j ++) {
            cout << multix / arr[j]  << " "  ; 
        }
    }

int main()  {

    int A[6] = {9 , 8 , 5 , 6 , 2 , 2 }  ;

    multi(A , 6) ;


    return 0 ; 
}