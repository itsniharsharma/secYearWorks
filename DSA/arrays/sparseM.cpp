// #include<iostream>
// using namespace std;


// int main(){
//     int arr[3][3], i, j, z=0, nz=0;
//     for( i=0; i<3; i++){
//         for( j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }

//     cout << "entered matrix is" << endl;

//     for( i=0; i<3; i++){
//         cout << endl;
//         for( j=0; j<3; j++){
//             cout << arr[i][j] << endl;
//         }
//     }


//     for( i=0; i<3; i++){
//         for( j=0; j<3; j++){
//             if(arr[i][j]==0){
//                 z++;
//             } else{
//                nz++;
//             }
//         }
//     }

//     if(nz>z){
//         cout << "not sparse" << endl;
//     } else{

//         int spar[nz][3], k;
        
//     for( i=0; i<3; i++){  
//         for( j=0; j<3; j++){
            
//            if(arr[i][j] != 0){
//                spar[k][0] = i;
//                spar[k][1] = j;
//                spar[k][2] = arr[i][j];
//                k++;
//            }
//         }
//       }
 
//      cout << "sparse rep is: " << endl;

//      for( i=0; i<nz; i++){
//         for(
//              j=0; j<3; j++){
//             cout << spar[i][j] << endl;
//         }
//      }

//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int arr[3][3], i, j, z=0, nz=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << "matrix is: " << endl;

      for(i=0; i<3; i++){
        cout <<endl;
        for(j=0; j<3; j++){
            cout << arr[i][j];
            if(arr[i][j]==0){
                z++;
            } else {
                nz++;
            }
        }
    }

    if(nz>z){
        cout << "not sparse" << endl;
    } else{

        int spar[nz][3], k=0;

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
            if(arr[i][j] != 0){
            spar[k][0] = i;
            spar[k][1] = j;
            spar[k][2] = arr[i][j];
            k++;
        }
            }
        }

          cout << endl;
          cout << "sparse rep is: " <<endl;

      for(i=0; i<nz; i++){
        cout << endl;
        for(j=0; j<3; j++){
            cout << spar[i][j];
        }
      }
    }

 
    
    return 0;
}