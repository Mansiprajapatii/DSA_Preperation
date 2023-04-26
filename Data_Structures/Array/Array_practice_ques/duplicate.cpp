#include <iostream>
#include<algorithm>
using namespace std;

int duplicateNumber(int *arr, int size)
{ 
    sort(arr,arr+size);
    int j;
    for(int i =0 ; i<size; i++)
    {
        if(arr[i]==arr[i+1]){
            j =arr[i];
            cout<<arr[i]<<endl;
            break;
        }
    }
   
}

int main() {
   
   int size = 9;
   int arr[size] = {0, 7, 2, 5, 4, 7, 1, 3, 6};

   duplicateNumber(arr, size);

    return 0;
}