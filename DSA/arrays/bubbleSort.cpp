#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n-1; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {1,5,2,7,9,3,10};
    bubbleSort(arr, 7);
    return 0;
}