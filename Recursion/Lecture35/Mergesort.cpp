#include<iostream>

using namespace std; 

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];
    
    //Copy Left Part
    int mainarrayindex = s;
    for(int i = 0; i < len1; i ++){
        first[i] = arr[mainarrayindex++];
    }

    //Copy Right Part
    mainarrayindex = mid + 1 ;
    for(int i = 0; i < len2; i ++ ){
        second[i] = arr[mainarrayindex++];
    }

    //Merge two Sorted Array
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainarrayindex++] = first[index1++];
        }
        else{
            arr[mainarrayindex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainarrayindex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainarrayindex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

}

void mergesort(int *arr, int s, int e){
    if(s>e){
        return;
    }
    int mid = s + (e - s) / 2;
    
    mergesort(arr, s, mid -1);
    mergesort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {

    int arr[] = {7, 3, 5, 2, 9, 1};

    int n = 6;

    mergesort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}