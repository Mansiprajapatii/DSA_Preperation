//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n ;
    cin>>n;

    int arr[n];

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    int maxi =-199999999;
    for(int j=1; j<=n; j++){
        maxi = max (maxi,arr[j]);
        cout<<maxi<<" ";
    }
    return 0;
}