#include<iostream>
#include<array>

using namespace std ;

int main(){
    array<int,4>A = {1,2,3,4} ; 

    //FOR SIZE OF ARRAY
    int size = A.size();
    cout<< "Size of array : " << size << endl ;

    //AT() TO FIND ELEMENT THROUGH INDEX
    cout<< "Element at 2 : " << A.at(2) << endl ; 

    //FRONT() TO FIND FIRST ELEMENT OF ARRAY
    cout << "First element : " << A.front() << endl ; 

    //BACK() TO FIND LAST ELEMENT OF ARRAY 
    cout << "Last element : " << A.back() << endl ; 
    
    //EMPTY() TO CHECK ARRAY IS EMPTY OR NOT 
    cout << "Array is empty or not : " << A.empty() << endl ;

    //CAPACITY() TO CHECK CAPACITY OF THE ARRAY 
}