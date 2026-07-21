#include<iostream>
#include<set>

using namespace std; 

int main(){
    set<int> S ; 

    S.insert(10) ;
    S.insert(-1) ;
    S.insert(8) ;
    S.insert(11) ;
    S.insert(2) ;

    for(auto x : S){
        cout << x << " " ;
    }
    cout << endl  ;
    //Erasing 0
    S.erase(2) ;
    cout << "After Erasing two : "  ;  
    for(auto d : S){
        cout << d << " " ;
    }
    cout << endl  ;
    for(auto it = S.begin(); it != S.end(); it++){
    cout << *it << " ";
    }
    cout << endl ;

    S.clear() ; 
    if(S.empty()){
        cout << "Set is clear ." << endl ;
    }
}