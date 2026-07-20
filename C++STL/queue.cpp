#include<iostream>
#include<queue>

using namespace std ; 

int main(){
    queue<int> A ; 

    cout << "Is this queue is empty : " << A.empty() << endl ;

    A.push(10) ; 
    A.push(20) ;
    A.push(30) ;
    A.push(40) ;
    A.push(50) ;

    cout << "Front number of this queue : " << A.front() << endl; 
    cout << "Size of Queue : " << A.size() << endl ; 

    //After pop
    A.pop();
    cout << "Front number of this queue after pop : " << A.front() << endl; 
    cout << "Size of Queue after pop : " << A.size() << endl ; 

    cout <<"The recent number is or back number : "<< A.back() << endl ; 

    return 0 ; 

}