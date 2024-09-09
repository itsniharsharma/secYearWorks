#include<iostream>
using namespace std;

void insertEle(int arr[],int n, int num, int pos){
   for(int i=n-1; i>=pos; i--){
        arr[i+1] = arr[i];
   }
   n++;
   arr[pos] = num;

   for(int i=0; i<n-1; i++){
     cout << arr[i] << endl;
   }
}

int main(){
    int arr[5] = {1,3,4,5,6};
    insertEle(arr, 5, 2, 1);
    return 0;
}