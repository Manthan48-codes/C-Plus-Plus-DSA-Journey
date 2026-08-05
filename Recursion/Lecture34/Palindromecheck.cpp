#include<iostream>

using namespace std;

bool palindrome(string& str , int i ){
    int j =  str.length() - 1 - i ; 
    if(i > j){
        return true ;
    }
    if(str[i] != str[j]){
        return false ;
    }
    else{
        palindrome(str , i + 1 ) ;
    }
}

int main(){
    string name = "ABBaBBA" ;

    int ans = palindrome(name , 0 ) ;

    if(ans){
        cout << "Palindrome" << endl ;
    }
    else{
        cout << "Not Palindrome" << endl ;
    }

}