#include<bits/stdc++.h>
using namespace std;

void print_subsequence(int arr[], int ind, vector<int> &d, int n){
    //base case
    if(ind>=n){
       for(auto i: d){
        cout<<i<<" ";
       }
       cout<<endl;
       return;
    }

    d.push_back(arr[ind]);  //add
    print_subsequence(arr,ind+1,d,n); //take the element 
    d.pop_back(); //remove
    print_subsequence(arr,ind+1,d,n); //not take the element 
}

int main (){
    int arr[3]={3,1,2};
    vector<int>d;
    int n=3; 
    print_subsequence(arr,0,d,n);


    return 0;
}