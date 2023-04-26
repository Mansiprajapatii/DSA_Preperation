//multiplication of 2 matrix 
#include<iostream>

using namespace std;

int main(){
    int n,row,col,sum=0, ele=0;
    cin>>n>>col>>row;
    int arr[n][col];
    int Arr[col][row];
    int ans[n][row];

    for(int i=0; i<n; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cin>>Arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<row; j++){
            ans[i][j]=0;
        }
    }
    for(int k=0; k<n; k++){
    for(int j=0; j<row; j++){
        for(int i=0; i<col; i++){
             ans[k][j]+= arr[k][i]*Arr[i][j];
        }    
    }
}
for(int i=0; i<n; i++){
    for (int j=0; j<row; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}