#include<iostream>
using namespace std;

int fibonnacci(int n){

    //base case
    if(n==0){
        return 0;
    }
      if(n==1){
        return 1;
    }
 int ans= fibonnacci(n-1)+fibonnacci(n-2);
 return ans;
}

int main(){
    int n;
    cin>>n;

   cout<< fibonnacci(n)<<endl;

    return 0;
}