#include<iostream>
using namespace std;

bool isSorted(int a[], int size){

    //base case 
    if(size==0|| size==1 ){
        return true;
    }

    if(a[0]>a[1]){
        return false;
    }
    else{
        bool ans = isSorted(a+1, size-1);
        return ans;
    }
}

int main(){

    int arr[6]= {2,14,9,10,14,15};
    if(isSorted(arr,6)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}