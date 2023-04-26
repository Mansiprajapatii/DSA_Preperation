#include<iostream>
using namespace std;

void heapify(int arr[0] , int n, int i){
    int largest =i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest]< arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest!= i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void Build_heap(int arr[] , int n){
    for(int i = n/2 ; i>0; i--){
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n){
    //step1: build initial max heap 
    Build_heap(arr,n);
    
    //step2: swap last node with first node 
    int s = n;        
    while(s>1){ 
        swap(arr[s],arr[1]);

        //remove last node
        s--;
       
       //heapify the tree (max heap)
        heapify(arr, s, 1);
    }
}

int main(){
    int n;
    cout<<"enter the size of the heap: "<<endl;
    cin>>n;
    int size= n+1;
    int arr[n];
    arr[0] = -1;
    cout<<"Enter the elements : "<<endl;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"Sorted elements are : "<<endl;
heapSort(arr,n);
    for(int i =1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}