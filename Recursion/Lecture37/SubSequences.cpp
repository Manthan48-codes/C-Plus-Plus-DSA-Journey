#include <iostream>
#include <vector>
using namespace std;

void solve(string str, vector<string>& ans, string output, int index) {

    // Base Case
    if(index >= str.length()) {

        if(!output.empty()) {
            ans.push_back(output);
        }

        return;
    }

    // Exclude
    solve(str, ans, output, index + 1);

    // Include
    output.push_back(str[index]);

    solve(str, ans, output, index + 1);
}

vector<string> subsequences(string str) {

    vector<string> ans;
    string output = "";

    solve(str, ans, output, 0);

    return ans;
}

int main() {

    string str;

    cout << "Enter String: ";
    cin >> str;

    vector<string> ans = subsequences(str);

    cout << "\nAll Non-Empty Subsequences:\n";

    for(string s : ans) {
        cout << s << endl;
    }

    return 0;
}