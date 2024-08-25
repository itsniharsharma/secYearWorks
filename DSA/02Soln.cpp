#include<iostream>
using namespace std;

//-------------------------- QUES 1 

int binarySearch(int arr[], int size, int target){
     int start =0;
     int end= size-1;

     while(start <= end){
        int mid = start + (end - start)/2;

        if( target < arr[mid]){
           end = mid -1;
        }

        else if(target > arr[mid] ){
            start = mid + 1; 
        }

        else if(target == arr[mid]){
            return mid;
        }
     }

     return -1;
}


int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
}

int main(){
    
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int target = 7;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result= binarySearch(arr, size, target);
    int result01= linearSearch(arr, size, target);
    
    cout << result << endl;
    cout << result01 << endl;
    
    return 0;
}
//-----------------------------------------------------------------

