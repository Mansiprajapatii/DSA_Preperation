#include<bits/stdc++.h>
using namespace std;


vector < int > sortedArray(vector < int > a, vector < int > b) {
  
//   brute force 
//   TC - O[l1 log n + l2 log n + l1+l2] 
//   SC- O[l1 + l2] 
   set<int> s;
   vector<int> ans;
   int l1 = a.size();
   int l2 = b.size();

   for(int i=0;i<l1 ; i++){
       s.insert(a[i]);
   }

   for(int i=0;i<l2 ; i++){
       s.insert(b[i]);
   }
   
  
   for(auto it : s){
     ans.push_back(it);
   }

   return ans;
}

int main(){


    return 0;
}