#include<iostream>
#include<queue>

using namespace std ;

int main(){
    /*DEFUALT OR FOR MAX HEAP
    priority_queue<int>pq ;*/ 
    //FOR MIN HEAP 
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(2) ;
    pq.push(15) ;
    pq.push(1) ;
    pq.push(35) ;
    pq.push(22) ;

    while(!pq.empty()){
        cout << pq.top() << " " ; 
        pq.pop() ; 
    }
    cout << endl ; 

}