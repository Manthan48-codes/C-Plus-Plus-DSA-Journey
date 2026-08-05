/*class Solution {
  private:
  bool found(vector<vector<int>> maze, int xs, int ys, vector<vector<int>> temp, int ss){
      if((xs >= 0 && xs < ss) && (ys >=0 && ys < ss) && maze[xs][ys] == 1  && temp[xs][ys] == 0){
          return true;
      }
      else{
          return false;
      }
  }
  void solve(vector<vector<int>> maze, vector<string> &ans, int x, int y,
                                    int ss, vector<vector<int>> temp, string path){
        if(x == ss - 1 && y == ss - 1){
            ans.push_back(path);
            return;
        }
        temp[x][y] = 1;
        int xs = x + 1;
        int ys = y;
        if(found(maze, xs, ys, temp, ss)){
            path.push_back('D');
            solve(maze, ans, x, y, ss, temp, path);
            path.pop_back();
        }
        xs = x;
        ys = y - 1;
        if(found(maze, xs, ys, temp, ss)){
            path.push_back('L');
            solve(maze, ans, x, y, ss, temp, path);
            path.pop_back();
        }
        xs = x;
        ys = y + 1;
        if(found(maze, xs, ys, temp, ss)){
            path.push_back('R');
            solve(maze, ans, x, y, ss, temp, path);
            path.pop_back();
        }
        xs = x - 1;
        ys = y;
        if(found(maze, xs, ys, temp, ss)){
            path.push_back('U');
            solve(maze, ans, x, y, ss, temp, path);
            path.pop_back();
        }
        
        temp[x][y] = 0;
                                    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        if(maze[0][0] == 0){
            return ans;
        }
        int xl = 0;
        int yl = 0;
        int sizee = maze.size();
        vector<vector<int>> temp = maze;
        for(int i = 0; i < sizee; i ++){
            for(int j = 0; j < sizee; j ++){
                temp[i][j] = 0;
            }
        }
        string path = "";
        
        solve(maze, ans, xl, yl, sizee, temp, path);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};*/
//RATE IN MAZE PROBLEM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<int>>& maze, int x, int y,
            int n, vector<vector<int>>& visited) {

    if ((x >= 0 && x < n) &&
        (y >= 0 && y < n) &&
        maze[x][y] == 1 &&
        visited[x][y] == 0) {
        return true;
    }

    return false;
}

void solve(vector<vector<int>>& maze,
           vector<string>& ans,
           int x, int y,
           int n,
           vector<vector<int>>& visited,
           string path) {

    // Base Case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;

    if (isSafe(maze, newx, newy, n, visited)) {
        path.push_back('D');
        solve(maze, ans, newx, newy, n, visited, path);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;

    if (isSafe(maze, newx, newy, n, visited)) {
        path.push_back('L');
        solve(maze, ans, newx, newy, n, visited, path);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;

    if (isSafe(maze, newx, newy, n, visited)) {
        path.push_back('R');
        solve(maze, ans, newx, newy, n, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;

    if (isSafe(maze, newx, newy, n, visited)) {
        path.push_back('U');
        solve(maze, ans, newx, newy, n, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main() {

    // Predefined Maze
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = maze.size();

    vector<string> ans;

    if (maze[0][0] == 1) {

        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = "";

        solve(maze, ans, 0, 0, n, visited, path);

        //sort(ans.begin(), ans.end());

        cout << "Possible Paths:\n";

        for (string s : ans) {
            cout << s << endl;
        }
    }
    else {
        cout << "No Path Exists";
    }

    return 0;
}