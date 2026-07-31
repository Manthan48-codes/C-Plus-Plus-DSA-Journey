#include<iostream>
using namespace std;
//Defualt argument always start from right to left
//void print(int arr[], int n = 0, int start = 0)
//aisa nahi ki
//void print(int arr[], int n = 0 , int start) not allowed 
void print(int arr[], int n, int start = 0) {

for(int i = start; i<n; i++) {
cout << arr[i] << endl;

}
}

int main(){

int arr[5] = {1,4,7,8,9};
int size = 5;
//Agar start ki value nahi de to defualt me 0 hai agar de to di hui value se start hogi 
print(arr, size);
print(arr, size , 2);

return 0;
}