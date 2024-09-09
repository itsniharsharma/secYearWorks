#include<iostream>
using namespace std;

void deletion(int arr[], int n, int pos){
    for(int i=pos; i<n-1; i++){
        arr[i] = arr[i+1]; 
    }
    n--;

    for(int i=0; i<n-1; i++){
        cout << arr[i] <<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    deletion(arr, 6, 2); 
    return 0;
}