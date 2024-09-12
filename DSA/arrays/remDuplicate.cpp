#include<iostream>
using namespace std;

//removing duplicates by creating a different array 

void remDupicate(int arr[], int n){
    int j=0;
    int temp[100];

    for(int i=0; i<=n-1; i++){
        if(arr[i]!=arr[i+1]){
            temp[j] = arr[i];
            j++;
        }
    }

    temp[j] = arr[n-1];
    
    for(int i=0; i<j; i++){
        cout << temp[i] <<endl; 
    }
}

// int main(){
//      int arr[]= {1,1,1,2,2,3,3,3,3,4,4,5};
//      remDupicate(arr,12);
//     return 0;
// }

//removing duplicate within given array only 

void remDup(int arr[], int n){
    int j=0;
    for(int i=0; i<=n-1; i++){
       if(arr[i]!=arr[i+1]){
          arr[j] = arr[i];
          j++;
       }
    }

    arr[j] = arr[n-1];


    for(int i=0; i<j; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {1,1,1,2,2,2,3,3,4};
    remDup(arr,9);
    return 0;
}