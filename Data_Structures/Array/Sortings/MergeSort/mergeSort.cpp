#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h){
    int s=h;
    int b[s++];
    int k=l;
    int i=l;
    int j=mid+1;

   while(i<=mid && j<=h){
            if(arr[i]<=arr[j]){
                b[k]=arr[i];
                k++;
                i++;
            }
            else{
                b[k]=arr[j];
                k++;
                j++;
            }
        }
    
    while(i<=mid){
        b[k]=arr[i];
        k++;
        i++;
    }

    while(j<=h){
        b[k]=arr[j];
        k++;
        j++;
    }

    for(int p=l; p<=h; p++){
        arr[p]=b[p];
    }

}

void mergeSot( int arr[], int l, int h){
    if(l==h){
        return;
    }
      
    int mid = (l+h)/2;

    mergeSot(arr,l,mid);
    mergeSot(arr,mid+1,h);
    merge(arr,l,mid,h);
    
}

int main(){

    int arr[9] = {50,40,20,10,50,10,70,60,80};

    mergeSot(arr,0,8);

   for(int i=0; i<=8; i++){
    cout<<arr[i]<<" "; 
  }
    return 0;
}