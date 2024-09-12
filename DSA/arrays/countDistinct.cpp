#include<iostream>
using namespace std;

int countDistinct(int arr[], int n){
     int res=1;
     for(int i=1; i<n; i++){  //starting from second element
        bool isDistinct = true;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                isDistinct = false;
                break;
            }
        }

        if(isDistinct){  //
            res++;
        }
     }

     return res;
}

int main(){
    int arr[] = {1,1,2,2,2,2,3,3,3,4,5,5,6};
    int ans = countDistinct(arr, 13);
    cout << ans << endl;

    return 0;
}