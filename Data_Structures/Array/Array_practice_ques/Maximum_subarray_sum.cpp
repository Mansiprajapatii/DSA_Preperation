#include <bits/stdc++.h>
using namespace std;

 int maxSubArray(vector<int>& arr) {
        int n = arr.size();

  // opyimal solution using KADANE'S ALGORITHM
  // TC - O{N}
  // SC_ O{1}       
         long long maxi = INT_MIN;
         long long sum = 0;

         for(int i=0; i<n; i++){
             sum+=arr[i];

             if(sum > maxi){
                 maxi = sum;
             }


             if(sum<0){
                 sum=0;
             }
         }

         return maxi;
        
    }