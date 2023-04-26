#include<iostream>
using namespace std;

int SumOfArray(int a[], int n){

    //base case
    if( n==0){
        return a[0];
    }
    else{
        return a[0]+ SumOfArray(a+1,n-1);
    }
}

int main(){

    int a[5]= {2,4,9,9,9};

    cout<<SumOfArray(a,5);

    return 0;
}