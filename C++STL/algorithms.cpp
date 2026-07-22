#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ; 

int main(){
    vector<int> V ; 
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    V.push_back(40);
    V.push_back(50);
     
    cout <<"Vector v is "; 
    for(int k : V){
        cout << k << " " ; 
    }

    cout << endl ;
    
    //BINARY SEARCH
    cout << "Is 40 is present : "<< binary_search(V.begin() , V.end() , 40) << endl ;

    //to find index of lower bound
    cout << "Index Lower bound : " << lower_bound(V.begin() , V.end() , 25) - V.begin()<< endl ; 
    
    //to find index of upper bound 
    cout << "Index Upper bound : " << upper_bound(V.begin() , V.end() , 40) - V.begin()<< endl ;

    int a= 3 ; 
    int b= 2 ; 

    cout <<"Maximum btw a and b is " << max(a,b) << endl ; 
    cout <<"Minimum btw a and b is " << min(a,b) << endl ; 
    
    swap(a,b);
    cout << "after swap a = "<< a << endl ;
    
    string A = "abcd" ;
    reverse(A.begin() , A.end()) ; 
    cout<< A << endl ; 

    rotate(V.begin() , V.begin() + 2 , V.end()) ;
    cout << "After rotate : " ; 
    for(auto j : V){
        cout << j << " ";
    } 
    cout << endl ;
    
    sort(V.begin() , V.end()) ; 
    cout << "After sorting : " ; 
    for(auto j : V){
        cout << j << " ";
    } 
    cout << endl ;


}