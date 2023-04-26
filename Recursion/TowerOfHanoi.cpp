#include<bits/stdc++.h>

using namespace std;

void towerHanoi(int s, int d, int h, int n, int &count){
   count++;
   //base 
   if(n==1){
    cout<<"moving "<<n<<"  from "<<s<<" to "<<d<<endl;
    return;
   }

   towerHanoi(s,h,d,n-1,count);
   cout<<"moving "<<n<<" from "<<s<<" to "<<d<<endl;

   towerHanoi(h,d,s,n-1,count);
   
   return;

}

int main(){

   int source = 1; 
   int helper = 2;
   int destination = 3;
   int disk=3;
   int count =0;

   towerHanoi(source,destination,helper,disk,count);

  cout<<count<<endl;

    return 0;
}