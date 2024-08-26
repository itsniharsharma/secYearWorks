#include<iostream>
#include<cstring>
#include<string>
using namespace std;

//-------------------------- QUES 1 
/*
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
*/
//----------------------------------------------------------------- QUES 2 
//BUBBLE SORT 

/*
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main(){

   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int size = sizeof(arr)/sizeof(arr[0]);

   bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
}
*/


//-----------------------------------------------------------

//LINEAR AND BINARY SEARCH

//-----------------------------------------------------------

/*
4) String Related Programs 

(a) Write a program to concatenate one string to another string.  
(b) Write a program to reverse a string.  
(c) Write a program to delete all the vowels from the string.  
(d) Write a program to sort the strings in alphabetical order.  
(e) Write a program to convert a character from uppercase to lowercase. 

*/


// A 
// int main(){
    
//     char str1[100]= "hello";
//     char str2[]= "Nihar";

//     string new1= "I am";
//     string new2= "student";

//     strcat(str1, str2);
//     cout << str1 <<endl;

//     new1.append(new2);

//     cout << new1 << endl;
// }


//B 

