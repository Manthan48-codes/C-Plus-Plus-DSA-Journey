// Search in a 2D Matrix 1 LeetCode
/*#include<iostream>
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
}*/

// Search in a 2D Matrix 2 LeetCode
#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = col - 1;

    while (s < row && e >= 0)
    {
        int element = matrix[s][e];

        if (element == target)
        {
            return true;
        }
        else if (element > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }

    return false;
}

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter the elements of matrix:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix is:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "\nEnter target element: ";
    cin >> target;

    if (searchMatrix(matrix, target))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}