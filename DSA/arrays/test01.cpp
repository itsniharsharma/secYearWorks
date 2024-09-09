#include <iostream>
using namespace std;
// int main()
// {
// int array[5];
// printf("array = %p : &array = %p\n", array, &array);
// printf("array + 1 = %p : &array + 1 = %p", array + 1, &array + 1);
// return 0;
// }

 int arrayElement(int arr[], int n){
        int min=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[min]){
                min=i;
            }
        }
       return arr[min];
    }

int main(){
    int arr[6]={10,4,6,9,3,7};
    int ans = arrayElement(arr, 6);
    cout << ans <<endl;
    return 0;
}