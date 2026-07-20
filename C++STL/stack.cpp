#include<iostream>
#include<stack>

using namespace std ; 

int main(){

    stack<int>A; 

    cout << "Your stack is empty : " << A.empty() << endl ; 

    A.push(10) ; 
    A.push(20) ; 
    A.push(30) ;
    A.push(40) ;
    A.push(50) ;

    cout << "At the top number or recent number is " << A.top() << endl ; 
    cout << "Size of stack is " << A.size() << endl ; 
 
    A.pop() ; 
    cout << "after pop top number : " << A.top() << endl ; 
    cout << "After pop size is " << A.size() << endl ;




    return 0 ; 
}