#include<iostream>
using namespace std;

int fib(int n){
  if(n==0){
    return n;
  }
   if(n==1){
    return n;
  }
  int ans=fib(n-1)+fib(n-2);
  return ans;
}

int main(){
    
    int n=10;
   for(int i=0; i<n; i++){
    cout<<fib(i)<<endl;
   }
    return 0;
}