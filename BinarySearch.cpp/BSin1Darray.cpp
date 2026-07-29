//BINARY SEARCH 
#include<iostream>
using namespace std ; 

int binary(int array[] , int n  , int key){
    int start = 0 ; 
    int end = n - 1 ; 

    int mid = start + (end - start)/2 ; 
    
    while(start <= end ){
        if(array[mid] == key){
            return mid ; 
        }
        if(array[mid] < key){
            start = mid + 1 ; 
        }
        if(array[mid] > key){
            end = mid - 1 ; 
        }
        mid = start + (end - start)/2 ;
    }
    return -1 ;
}

int main (){

    int even[6] = { 1,2,15,17,19,21} ;
    int odd[5] =  { -2,0,1,15,18} ;
    
    int index = binary(even , 6 , 21)  ;
    int oindex = binary(odd , 5 , -2 )  ;

    cout << "The index of 21 is " << index << endl ; 
    cout << "The index of -2 is " << oindex << endl ; 

}