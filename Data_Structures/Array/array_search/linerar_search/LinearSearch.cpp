//SEARCHING IN ARRAY  "leanier search "
#include<iostream>
using namespace std;
int searcharray(int arr[], int n , int key ){
    for(int i=0; i<n; i++){
        if(arr[i]== key){
            return i ;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
    
        cout<<arr[i]<<" "; 
    }
     cout<<endl;
     int key ;
     cout<<"enter key : ";
     cin>>key;
    cout<<"search array index value is "<<searcharray( arr, n , key)<<endl;
    return 0;
}