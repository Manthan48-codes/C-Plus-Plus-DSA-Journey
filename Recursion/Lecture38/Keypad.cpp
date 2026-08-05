//Letter Combination of a Phone number
#include<iostream>
#include<vector>

using namespace std;
void solve(string n, vector<string>& ans, string output, int index, string mapping[]){
    if(index >= n.length()){
        ans.push_back(output);
        return;
    }
    int key = n[index] - '0';
    string values = mapping[key];
    for(int i = 0; i < values.length(); i ++){
        output.push_back(values[i]);
        solve(n, ans, output, index + 1, mapping);
        output.pop_back();
    }
}
int main(){
    string n;
    cout << "Enter any two Number between 2 to 9 : ";
    cin >> n;
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    solve(n, ans, output, index, mapping);

    cout << "\nLetter Combinations are:\n";
    for(auto i : ans){
        cout << i <<" " ;
    }
    cout << endl;
    return 0;
}