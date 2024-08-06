// #include<iostream>
// using namespace std;

// //-------------------------------------------------------------
// void createArray(int arr[], int &size){   //passing size by reference
//      cout << "Enter the size of array: " << endl;
//      cin >> size;
//      cout << "Enter" <<size<< "elements:";
//      for(int i=0;i<size;i++){
//         cin >> arr[i];
//      }
// }
// //--------------------------------------------------------------

// void displayArray(int arr[], int size){
//      if(size == 0){
//         cout << "Array is empty" << endl;
//      }

//      cout << "Array Element: ";
//      for(int i=0; i<size;i++){
//         cout << arr[i] << " ";
//      }
//      cout << endl;
// }
// //-------------------------------------------------------------
// void insertEle(int arr[], int &size, int element, int pos){
//     if(pos < 0 || pos > size){
//         cout << "error" << endl;
//         return;
//     }

//     for(int i=size; i>pos; i--){
//         arr[i] = arr[i-1];
//     }

//     arr[pos] = element;
//     size++;
// }
// //---------------------------------------------------------------
// void deleteEle(int arr[], int &size, int element, int pos){
//     if(pos < 0 || pos > size){
//         cout << "error" << endl;
//         return;
//     }

//     for(int i=pos; i<size-1; i++){
//         arr[i] = arr[i+1];
//     }

//     size--;
// }
// //-----------------------------------------------------------
// void linearSearch(int arr[], int &size int target){
//     for(int i=0; i<size-1 ;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// //-------------------------------------------------------------

// int main(){
        
//     int arr[100];
//     int size=0;
//     int choice, element, pos;

//     do {
//         cout << "1. CREATE \n";
//         cout << "2. DISPLAY \n";
//         cout << "3. INSERT \n";
//         cout << "4. DELETE \n";
//         cout << "5. LINEAR SEARCH \n";
//         cout << "6. EXIT \n";
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
//                 cout << "Enter element to insert: ";
//                 cin >> element;
//                 cout << "Enter position to insert (1-based index): ";
//                 cin >> pos;
//                 insertElement(arr, size, element, pos - 1);
//                 break;
//             case 4:
//                 cout << "Enter position to delete (1-based index): ";
//                 cin >> pos;
//                 deleteElement(arr, size, pos - 1);
//                 break;
//             case 5:
//                 cout << "Enter element to search: ";
//                 cin >> element;
//                 pos = linearSearch(arr, size, element);
//                 if (pos != -1)
//                     cout << "Element found at position: " << pos + 1 << endl;
//                 else
//                     cout << "Element not found.\n";
//                 break;
//             case 6:
//                 cout << "Exiting program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again.\n";
//         }
//     } while (choice != 6);

//     return 0;
// }




//-----------------------------------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// int main()
//  {
// int i;
// int arr[5] = {1};
// for (i = 0; i < 5; i++) 
// printf("%d",arr[i]);
// return 0;
//  }

//--------------------------------------