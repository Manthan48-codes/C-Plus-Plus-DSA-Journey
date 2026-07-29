/*
#include<iostream>

using namespace std ; 

//For finding an array
bool findarray(int arr[][4] , int target , int m ,int n){
    for(int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(arr[i][j] == target){
                return 1 ; 
            }
        }
    }
    return 0 ;
}
//For finding sum row wise
int rowsum(int arr[][4] , int m , int n ){
    for(int i = 0 ; i < m ; i ++){
        int sum = 0 ; 
        for(int j = 0 ; j < n ; j ++){
            sum += arr[i][j] ; 
        }
        cout << sum << " " ;
    }
    cout << endl ;
}

int main(){
    int arr[3][4] ;
    
    cout << "Enter your array : " ;

    //For row input
     for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[j][i] ; 
        }
    }
    //For column input  
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[j][i] ; 
        }
    }

    //For row output
    cout << "Your matrix in 3into4 : " << endl ;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout <<  arr[i][j] << " " ; 
        }
        cout << endl ; 
    }

    int target  ;
    cout << "Enter a number to find in array : " ; 
    cin >> target ; 
    
    if(findarray(arr , target , 3 , 4)){
        cout << "Found" << endl ; 
    }
    else{
        cout << "Not found" << endl ;
    }

    cout << "The sum row : " ;
    rowsum(arr, 3 , 4) ;

    return 0 ;

}

//For maximum row sum 
#include<iostream>

using namespace std ; 

int maximumRowsum(int arr[][3], int n , int m ){
    int maxi = (2^-31) - 1 ;
    int index = -1 ; 
    for (int i = 0; i < n; i++){
        int sum = 0 ; 
        for(int j = 0 ; j < m ; j ++){
            sum += arr[i][j] ; 
        }
        if(sum > maxi){
            maxi = sum ;
            index = i ; 
        }
    }

    cout << "The maximum of row is : " << maxi << endl ;

    cout << "The index of row is  : "; 
    return index ;  
    
}

int main(){
    int arr[3][3] ; 
    cout << "Enter your array : " ; 
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            cin >> arr[i][j] ; 
        }
    }

   
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++ ){
            cout << arr[i][j] << " " ;
        } 
        cout << endl ; 
    }

    int ans = maximumRowsum(arr , 3 , 3) ; 
    cout << ans ;

    return 0 ; 
} 

//Wave print. 

#include<iostream>
#include<vector>

using namespace std ; 

vector<int> waveprint(vector<vector<int>> arr, int m , int n ){
    
    vector<int> ans ; 

    for(int col = 0 ; col < n ; col ++){
        if(col&1){
            for(int row = m-1; row >= 0; row--){
                ans.push_back(arr[row][col]) ; 
            }
        }
        else{
            for(int row = 0 ; row < m ; row ++){
                ans.push_back(arr[row][col]) ; 
            }
        }
    }
    return ans ; 
}

int main(){

    vector<vector<int>> arr(3, vector<int>(3)); 
    cout << "Enter your array : " ; 
    for(int row = 0 ; row < 3 ; row ++){
        for(int col = 0 ; col < 3 ; col ++){
            cin >> arr[row][col] ; 
        }
    }
    
    cout << "Your array is : " << endl ; 
    for(int row = 0 ; row < 3 ; row ++){
        for(int col = 0 ; col < 3 ; col ++){
            cout << arr[row][col] << " " ; 
        }
        cout << endl ; 
    }
    vector<int> ans = waveprint(arr , 3 , 3) ; 

    for(auto i : ans){
        cout << i << " " ; 
    }
    return 0  ;
}


//Spiral order matrix
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while (count < total) {

            // Top Row
            for (int i = startingcol; i <= endingcol && count < total; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;

            // Right Column
            for (int i = startingrow; i <= endingrow && count < total; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;

            // Bottom Row
            for (int i = endingcol; i >= startingcol && count < total; i--) {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            // Left Column
            for (int i = endingrow; i >= startingrow && count < total; i--) {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }


int main() {

    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Your matrix is : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl ; 
    }


    vector<int> ans = spiralOrder(matrix);

    cout << "Spiral Order: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}


//90 Degree rotation of matrix
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Rotate90(vector<vector<int>>& arr, int m)
{
    // Transpose
    for(int row = 0; row < m; row++)
    {
        for(int col = row; col < m; col++)
        {
            swap(arr[row][col], arr[col][row]);
        }
    }

    // Reverse every row
    for(int i = 0; i < m; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main()
{
    vector<vector<int>> arr(3, vector<int>(3));

    cout << "Enter your array:\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "\nBefore 90 Degree Rotation:\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    Rotate90(arr, 3);

    cout << "\nAfter 90 Degree Clockwise Rotation:\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}


//BINARY SEARCH 1
#include<iostream>
#include<vector>

using namespace std ;

bool binarySearch(vector<vector<int>> &arr , int target ){
    int row = arr.size() ; 
    int col = arr[0].size() ; 

    int sizee = row * col ; 

    int s = 0 ; 
    int e = sizee - 1  ;
    int mid = s + ((e - s)/2) ; 

    while(s <= e){
        int element = arr[mid/col][mid%col] ; 
        if(element == target){
            return 1 ; 
        }
        else if(element > target){
            e = mid - 1 ; 
        }
        else if(element < target){
            s = mid + 1 ; 
        }

        mid = s + ((e - s)/2) ; 
    }
    return 0 ; 
}

int main(){
    vector<vector<int>> arr(3 , vector<int> (3)) ; 
    cout << "Enter your array:\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "\nYour is in 2D :\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl ; 
    int target ; 
    cout << "Enter an element to find in array : " ;
    cin >> target ;

    if(binarySearch(arr , target)){
        cout << "Found" << endl ; 
    }
    else{
        cout << "Not Found" << endl ; 
    }

    return 0 ;  
}
     */

//Search in a 2D Matrix I LeetCode

