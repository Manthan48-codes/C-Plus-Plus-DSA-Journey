#include<iostream>

using namespace std;

int climbing(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int ans = climbing(n - 1) + climbing(n - 2);

    return ans;
}

int main(){
    int n; 
    cin >> n;

    cout << climbing(n) << endl;

    return 0;
}