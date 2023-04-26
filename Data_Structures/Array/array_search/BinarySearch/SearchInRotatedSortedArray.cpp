#include<iostream>
using namespace std;

int Pivot_ele(int arr[], int a){
    int s=0;
    int e = a-1;

    while(s<e){
        int mid = s+ (e-s)/2;

        //if array is not rotated thn 
        if(arr[e]>arr[0]){
            return 0;
        }
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int k){
    while(s<=e){
        int mid= s+(e-s)/2;

        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[7] ={2,4 ,5, 6, 8, 9, 1};
    int k=20;

    int pivot = Pivot_ele(arr,7);

    cout<<"pivot"<<pivot<<endl;

    if(k>=arr[pivot] && k<= arr[6]){
        cout<<" "<< binarySearch(arr,pivot,6,k)<<endl;
    }
    else{
         cout<<" "<< binarySearch(arr,0,pivot-1, k)<<endl;
    }
   
}