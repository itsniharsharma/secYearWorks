#include<iostream>
using namespace std;

//----------------------------------------------------------QUES 01 
// //array as a parameter and it's size 
// void createArray(int arr[], int &size){
//     cout << "enter array size: "; 
//     cin >> size;
//     cout << "Enter" << size << "element: ";
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }
// }

// void displayArray(int arr[], int size){
//     cout << "Array elements are: ";
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }




// void insertElement(int arr[], int &size){
//     int ele, pos;
//     cout << "Enter element to be inserted: ";
//     cin >> ele;
//     cout << "enter position: ";
//     cin >> pos;

//     for(int i=size; i>pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]= ele;
//     size++;
//     cout << "success" << endl;
// }

// void deleteElement(int arr[], int &size){
//     int pos;
//     cout << "enter position: " << endl;
//     cin >> pos;

//     for(int i=pos; i<size-1; i++){
//         arr[i]=arr[i+1];
//     }

//     size--;
//     cout << "Element deleted!" << endl;
// }


// int binarySearch(int arr[], int size){
//     int start=0;
//     int end= size-1;

//     int ele;
//     cout << "enetr element to search" << endl;
//     cin >> ele;

//     while(start <= end){
        
//         int mid= start + (end-start)/2;

//         if(arr[mid] < ele){
//             start= mid+1; 
//         }

//         else if(arr[mid] > ele){
//             end= mid-1;
//         }

//         else if(arr[mid] == ele){
//             return mid;
//         }
//     }

//     return -1;
// }


// int linearSearch(int arr[], int size){
//     int ele;
//     cout << "enter element: "; 
//     cin >> ele;

//     for(int i=0; i<size; i++){
//         if(arr[i]==ele){
//             return i;
//         }
//     }
//     return -1;
// }







// int main(){
    
//     int arr[100];
//     int size = 0;
//     int choice; 

//      do {
//         cout << "\n----MENU----\n";
//         cout << "1. CREATE\n";
//         cout << "2. DISPLAY\n";
//         cout << "3. INSERT\n";
//         cout << "4. DELETE\n";
//         cout << "5. BINARY SEARCH\n";
//         cout << "6. LINEAR SEARCH\n";
//         cout << "7. EXIT\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 createArray(arr, size);
//                 break;
//             case 2:
//                 displayArray(arr, size);
//                 break;
//             case 3:
//                 insertElement(arr, size);
//                 break;
//             case 4:
//                 deleteElement(arr, size);
//                 break;
//             case 5: {
//                 int result = binarySearch(arr, size);
//                 if (result != -1) {
//                     cout << "Element found at index " << result << endl;
//                 } else {
//                     cout << "Element not found in the array." << endl;
//                 }
//                 break;
//             }
//             case 6: {
//                 int result = linearSearch(arr, size);
//                 if (result != -1) {
//                     cout << "Element found at index " << result << endl;
//                 } else {
//                     cout << "Element not found in the array." << endl;
//                 }
//                 break;
//             }
//             case 7:
//                 cout << "Exiting the program." << endl;
//                 break;
//         }
//     } while (choice != 7);

//     return 0;
// }

//--------------------------------------------------------------------- QUES02

// void removeDuplicate(int arr[], int &size){

//     int uniqueSize=0; //say after removing duplicate elements 
//     int uniqueArr[size]; //to hold unique elements 

//     for(int i=0; i <size; i++){
//         bool isDuplicate= false;

//         for(int j=0; j<uniqueSize; j++){
//             if(arr[i] == uniqueArr[j]){
//                 isDuplicate= true;
//                 break;
//             }
//         }

//         if(!isDuplicate){
//             uniqueArr[uniqueSize]= arr[i];
//             uniqueSize++;
//         }
//     }

// }

/*
void removeDuplicate(int arr[], int &size){

    int tempArray[size];
    int tempSize=0;

//------------------------------------
    for(int i=0; i<size; i++){

        bool duplicateNumb = false; 

        for(int j=0; j<tempSize; j++){
            if(arr[i] == tempArray[j]){
               duplicateNumb = true; 
            }
        }

        if(!duplicateNumb){
            tempArray[tempSize]= arr[i];
            tempSize++;
        }
    }
//---------------------------------------

  for(int i=0; i<tempSize; i++){
     arr[i]= tempArray[i];
  }

    size= tempSize;

}



int main(){
    int arr[]= {1,2,3,4,2,5,1,6,7,8,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    removeDuplicate(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

*/

/*
void removeDuplicate(int arr[], int &size){

    int temp[size];
    int tempSize=0;

    for(int i=0; i<size; i++){
        bool isDuplicate= false;

        for(int j=0; j<tempSize; j++){
            if(arr[i]==temp[j]){
                isDuplicate= true;
                break;
            }
        }

        if(!isDuplicate){
           temp[tempSize]= arr[i];
           tempSize++;
        }
    }


    for(int i=0; i<tempSize; i++){
        arr[i]= temp[i];
    }

    size = tempSize;
}

int main(){
    int arr[] = {1, 2, 3, 4, 2, 5, 1, 6, 7, 8, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeDuplicate(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//-----------------------------------------------------------------------

//QUES 04 --> Reverse elements of array 


void reverseArray(int arr[], int size){
    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size -1 -i];
        arr[size -1 - i]= temp; 
    }
}

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){
 int arr[]={1,2,3,4,5,6,7};
 int size = sizeof(arr)/sizeof(arr[0]);

  reverseArray(arr, size);
  display(arr, size);

}

//----------------------------------------------------
//MATRIX MULTIPLICATION: 

