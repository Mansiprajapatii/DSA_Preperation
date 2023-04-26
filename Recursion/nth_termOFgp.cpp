#include<bits/stdc++.h>
using namespace std;


long long nTermGP(int a, int r, int n){

   if(n==0){
    return 1;
   }

   long long  temp = nTermGP(a,r,n/2);

   if(n%2==0){
     return temp*temp;
   }
   else{
    return r*temp*temp;
   }



}

int main(){
  int a =17;
  int r = 13;
  int nterm = 34;

 

   cout<<a*nTermGP(a,r,nterm-1);
    return 0;
}