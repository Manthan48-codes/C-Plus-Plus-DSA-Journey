/*#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int row = 1 ;
    while(row <= n){

        int space = n - row ;
        while (space){
            cout << " " ;
            space --;
        }

        int col = 1 ;
        while(col <= row){
            cout << col ;
            col++ ;
        }

        int count = row - 1  ;
        while (count >= 1 ){
            cout << count  ;
            count -- ;
        } 
        cout<< endl ;
        row ++ ;
    }

}
    */
//REVERSE TRIANGLE 
#include<iostream>
using namespace std ; 

int main(){
    int n; 
    cin >> n ;

    for(int i = n ; i > 0 ; i --){
        for(int j = i ; j > 0 ; j --){
            cout << j <<" "; 
        }
        cout << endl ; 
    }

    return 0 ;
}