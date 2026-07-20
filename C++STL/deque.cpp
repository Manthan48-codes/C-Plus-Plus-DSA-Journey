#include<iostream>
#include<deque>

using namespace std ; 

int main(){
    deque<int>dec ; 

    dec.push_back(1) ; 
    dec.push_front(2) ; 

    cout << "At first position " << dec.at(0) << endl ; 
    
    //AFTER POP BACK AND POP FRONT 
   /* dec.pop_back() ; 
    cout << "After pop back " << dec.at(0) << endl  ;*/ 

    cout << "Before erase size " << dec.size() << endl ; 
    dec.erase(dec.begin() , dec.begin()+1 ) ; 
    cout << "After erase size " << dec.size() << endl ; 
    return 0 ; 

}



