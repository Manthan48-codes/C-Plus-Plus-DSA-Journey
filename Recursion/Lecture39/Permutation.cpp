//Permutation of an Integer
#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> fire, vector<vector<int>>& ans, int index){
    if(index >= fire.size()){
        ans.push_back(fire);
        return;
    }
    for(int i = index; i < fire.size(); i ++){
        swap(fire[index],fire[i]);
        solve(fire, ans, index + 1);
        swap(fire[index],fire[i]);
    }
}

int main(){
    int n;
    cout << "Enter a size : ";
    cin >> n;
    vector<int> fire(n);
    cout << "Enter a number : ";
    for(int i = 0; i < n; i++){
        cin >> fire[i];
    }
    vector<vector<int>> ans;
    int index = 0;

    solve(fire, ans, index);

    for(auto m : ans){
        for(int n : m){
        cout << n <<" ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}