#include<iostream>
#include<list>
#include <typeinfo>

using namespace std ; 

void display(list<int>& l1){
    list<int> :: iterator it ;
    for(it = l1.begin() ; it != l1.end() ; it++ ){
         cout << *it << " " ; 
    }
    cout << endl ; 
}

int main(){
    list<int> list1 ; 
    list1.push_back(5); 
    list1.push_back(-15); 
    list1.push_back(14); 
    list1.push_back(50); 
    list1.push_back(0); 
    list1.push_back(8); 
    cout<<"Size of List is "<<list1.size()<<endl;
    display(list1) ;
    
    list1.sort() ; 
    display(list1) ; 

    list1.remove(0) ; 
    cout << "After removing 0 : " ; 
    display(list1) ;
    cout << "After removing size of list : " << list1.size() << endl ;  

    list1.reverse() ; 
    cout << "After reverse list : "  ; 
    display(list1)  ;

    //FOR FINDING THE TYPE OF ANY VARIABLE WE USE typeid(variable_name).name()
    auto a = 48 ;
    cout << "Type of auto a is "<< typeid(a).name() << endl ; 
         /*   
         P-> Pointer
         K -> const
         c -> char
         => const char*    
         */
    auto b = "Manthan" ; 
    cout << "Type of auto b is " << typeid(b).name() << endl ; 
    
    //IN LIST at() FUNCTION IS NOT ALLOWED  
    //cout << list1.at(2)  ;

    return 0  ; 
}