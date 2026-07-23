//REVERSING OF ARRAY FROM  POSITION 
/*#include<iostream> 
#include<vector>

using namespace std ; 

void reverse(vector<int>&Z , int n, int m){
    int start = m ; 
    int end = n - 1 ; 
    while(start < end){
        swap(Z[start] ,Z[end]) ; 
        start ++ ; 
        end -- ; 
    }
}

int main(){
    vector<int>A(5) ; 
    A = {5,4,3,2,1} ; 
    vector<int>B(6) ; 
    B ={6,5,4,3,2,1} ;

    reverse(A , 5 , 2) ; 
    for(int i = 0 ; i < 5 ; i ++ ){
        cout << A[i] << " "   ;
    }

    cout << endl ; 


    reverse(B , 6 , 3) ; 
    for(int j = 0 ; j < 6 ; j ++ ){
        cout << B[j] << " "  ; 
    }
}
//REVERSE ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> reverse(vector<int> v){
    int m = 0 ;
    int n = v.size() - 1 ;
    while(m <= n ){
        swap(v[m] , v[n]) ; 
        m ++ ;
        n -- ; 
    }
    return v ; 
}

void print(vector<int>v){
    for(auto i : v){
        cout << i << " " ; 
    }
    cout << endl ; 
}

int main(){
    vector<int> vec ; 
    vec.push_back(5); 
    vec.push_back(0); 
    vec.push_back(4); 
    vec.push_back(2); 
    vec.push_back(15);
    
    vector<int> ans = reverse(vec) ; 
    print(ans);

    return 0 ; 
}

//MERGING TWO ARRAYS
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std ; 

vector<int>display(vector<int>v , vector<int>x){
//void display(vector<int>v , vector<int>x){
    cout <<"1st Array : " ;
    for(auto i : v){
    cout << i <<" "; 
    }
    cout << endl ; 
    cout <<"2nd Array : " ;
    for(auto j : x){
    cout << j << " "; 
    }
    cout << endl ;
    
    //set<int> A ;
    vector<int> A ;
    for(auto i : v){
        //A.insert(i) ;
        A.push_back(i) ;  
    }
    for(auto i : x){
        //A.insert(i) ;
        A.push_back(i) ; 
    }
    sort(A.begin() , A.end()) ; 
    cout << "After merging and it sorting : " ; 
    for(auto i : A){
        cout << i << " " ; 
    }
    cout << endl ; 
}

int main(){
    vector<int>a1 = {1,3,5,7,9,9} ;
    vector<int>a2 = {8,10,8} ; 

    display(a1 , a2); 
}

//MOVES ZEROES AT THE END 
#include<iostream>
#include<vector>

using namespace std ; 

void move(vector<int>& V){
    int nonzero = 0 ; 
    //nonzero show the position of the nonzero value
    for(int i = 0 ; i < V.size() ; i ++){
        if(V[i]!=0){
            swap(V[i], V[nonzero]) ; 
            nonzero ++ ;
        }
    }
}

int main(){
    vector<int> A = {1,0,2,3,0,0,7,0,8,0,9} ; 

    move(A) ; 
    for(auto i : A){
        cout << i << " " ; 
    }
    cout << endl ;
}

//ROTATED ARRAY 
#include<iostream>
#include<vector>

using namespace std ; 

void rotate(vector<int> &nums , int k ){
    vector<int>temp(nums.size()) ; 
    for(int i = 0 ; i < nums.size() ; i ++){
        temp[(i+k)%nums.size()] = nums[i] ; 
    }
    nums = temp ; 
}

int main(){
    vector<int> A = {1,23,4,5,6,7} ; 
    rotate(A,4) ; 
    for(auto i : A){
        cout << i << " " ; 
    }
    cout << endl ;

    return 0 ; 
}

//CHECK IF ARRAY IS SORTED AND ROTATED

#include<iostream>
#include<vector>

using namespace std ; 

bool check(vector<int>v){
    int count = 0 ; 
    int n = v.size() ; 
    for(int i = 1 ; i < n ; i ++){
        if(v[i-1]>v[i])
        count ++ ; 
    }
    if(v[n - 1] > v[0])
    count ++ ; 

    return count <= 1 ;
}

int main(){
    vector<int>a = {1,2,3,4,5} ;
    vector<int>b = {2,3,5,6,1} ;
    vector<int>c = {9,9,9,9,9} ; 
    vector<int>d = {7,2,8,1,9} ;  

    cout << check(a) << endl ;
    cout << check(b) << endl ;
    cout << check(c) << endl ;
    cout << check(d) << endl ;

}*/

//SUM OF TWO ARRAY
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findArraySum(vector<int>& A, int n, vector<int>& B, int m) {

    int i = n - 1;
    int j = m - 1;
    int carry = 0;

    vector<int> ans;

    while(i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if(i >= 0)
            sum += A[i--];

        if(j >= 0)
            sum += B[j--];

        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    vector<int> a = {1,5,6,3};
    vector<int> b = {2,2,8,2};

    vector<int> c = findArraySum(a, 4, b, 4);

    for(auto x : c){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}