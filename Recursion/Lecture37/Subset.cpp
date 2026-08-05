#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int>& arr, vector<vector<int>>& ans, vector<int> output, int i) {

    // Base Case
    if(i >= arr.size()) {
        ans.push_back(output);
        return;
    }

    // Exclude
    solve(arr, ans, output, i + 1);

    // Include
    output.push_back(arr[i]);

    solve(arr, ans, output, i + 1);
}

vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> ans;
    vector<int> output;

    solve(nums, ans, output, 0);

    return ans;
}

int main() {

    vector<int> arr = {1, 2, 3 };

    vector<vector<int>> ans = subsets(arr);

    for(auto subset : ans) {

        cout << "{ ";

        for(auto element : subset) {
            cout << element << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}