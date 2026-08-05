#include<iostream>
using namespace std;

void printarray(int *arr, int s, int e){

    cout << "Current Array: ";

    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool BinarySearch(int *arr, int s, int e, int k){

    if(s > e){
        return false;
    }

    printarray(arr, s, e);

    int mid = s + (e-s)/2;

    cout << "Mid = " << arr[mid] << endl;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        return BinarySearch(arr, mid+1, e, k);
    }

    return BinarySearch(arr, s, mid-1, k);
}

int main(){

    int arr[20]={7,8,9,10,11,12,13,14,18,20,21,29,31,89,99,100,104,110,157,200};

    int key=200;

    if(BinarySearch(arr,0,19,key))
        cout<<"Found";
    else
        cout<<"Not Found";
}