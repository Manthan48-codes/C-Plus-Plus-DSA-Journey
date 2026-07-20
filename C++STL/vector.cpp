/*#include<iostream>
#include<vector>

using namespace std ;

int display(vector<int>&V){
    for(int i = 0 ; i < V.size() ; i ++){
        cout << V[i] << " "  ;  
    }
    cout << endl ; 
}

int main(){
    vector<int>A ; 
    int size ;
    int element ; 
    cout << "Enter your size of Vector : " ; 
    cin >> size ;  

    for(int j = 0 ; j < size ; j ++ ){
        cout << "Enter your element in your vector :  "  ;
        cin >> element ; 
        A.push_back(element)  ; 
    }
    A.pop_back();
    display(A) ;
}*/

#include<iostream>
#include<vector>

using namespace std ; 

int main(){
    vector<int>vec = { 1, 2, 3, 4, 5} ; 
    for(int i : vec){
        cout << i << " "  ; 
    }

    cout << endl ;
    
    // FOR FINDING SIZE OF VECTOR 
    cout << "Size of vector is " << vec.size() << endl ;
    
    //ADDING ELEMENT IN LAST USING PUSH_BACK 
    vec.push_back(99);
        for(int i : vec){
        cout << i << " "  ; 
    }
    cout << endl ;
    cout << "After pushback size of vector " << vec.size() << endl ; 
    
    //REMOVING LAST DIGIT FROM VECTOR USING POP_BACK  
    vec.pop_back()  ;
    for(int i : vec){
        cout << i << " "  ; 
    }
    cout << endl ;
    cout << "After popback size of vector " << vec.size() << endl ; 
    //PRINTING FIRST AND THE LAST DIGIT OF VECTOR 
    cout << "First and Last digit of Vector " << vec.front() << " and " << vec.back() << endl ;
    
    //FOR PRINTING EXACT VALUE USING AT()  
    cout << "The value of index 2 is  " << vec.at(2) << endl ; 

    return 0 ;

}