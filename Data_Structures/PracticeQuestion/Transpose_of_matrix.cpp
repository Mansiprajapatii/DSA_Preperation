//transpose of matrix
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
     //taking array 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //swaping array element 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;   
        }
    }
    //printing element 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
    return 0;
}