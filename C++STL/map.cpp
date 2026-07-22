#include<iostream>
#include<map>

using namespace std ;

int main(){
    map<int ,string > M ; 
    M.insert({2 , "Manthankumar"}) ;
    M.insert({1 , "Mistry"}) ;
    M.insert({3 , "Hiteshbhai"}) ;

    for(auto m : M){
        cout << m.first << " " << m.second << endl ; 
    }

    M.insert({0 , "=>=>"}) ;
    M.insert({-1 , "=>=>"}) ; 

    cout << "Is three is present in map : " << M.count(3) << endl ;
    

    M.erase(2) ; 
    M.erase(M.begin()) ; 
    cout << "After removing : " << endl ; 

    for(auto it = M.begin() ; it != M.end() ; it ++){
        cout << it->first << " " << it->second << endl; 
    }

    return 0 ;   
}