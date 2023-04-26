#include<iostream>
using namespace std;

void reverse(int arr[], int i, int size){
    //base case
    if(i>=size/2){
        return;
    }
    swap(arr[i],arr[size-i-1]);
    reverse(arr,i+1,size);
}
int main(){

    int arr[5]={10,20,30,40,50};
    reverse(arr,0,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}