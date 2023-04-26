#include<iostream>
using namespace std;
int sum=0;
int Sum(int a[], int n){
    if(n<0){
        return 0;
    }
    sum=a[n]+Sum(a,n-1);
     return sum;
}

int main(){

    int a[3]={10,40,5}; 
    cout<<Sum(a,3-1);
    return 0;
}