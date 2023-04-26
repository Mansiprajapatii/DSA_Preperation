#include<iostream>
using namespace std;

bool palindrom(string s,int i, int n){
    // int n= s.length();
    // int i=0;
    //base case
    if(i>n/2){
      return true;
    }
    if(s[i]!=s[n]){
      return false;
    }
    else{
      return  palindrom(s,i+1,n-1) ;
    }
}

int main(){
    
    string s= "1211131";

    cout<<palindrom(s,0,s.length()-1)<<" ";
    return 0;
}