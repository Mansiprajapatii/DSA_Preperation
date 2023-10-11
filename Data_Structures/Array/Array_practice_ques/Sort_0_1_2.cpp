#include <bits/stdc++.h> 

using namespace std;
void sortArray(vector<int>& arr, int n)
{  

    //Dutch national flag algorithm
    // Tc= O[N]
    // SC- O[1]
    int low = 0; 
    int mid = 0;
    int high = n-1;

    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;

        }
        else if (arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
