#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        
        // using linear search
    //     int flag;
    //     int ans=0;
    //     for(int i=0; i<=nums.size(); i++){
    //       flag=0;
    //       for(int j=0; j<nums.size() -1; j++){
    //           if(nums[j] == i){
    //               flag = 1;
    //               break;
    //           }
    //       }
    //       if(flag==0){
    //       ans= i;
    //       }
    //     }
    //     return ans;
    // }


    // using hasing 
    // int n= nums.size();
    // vector<int>hash(n+1,0);

    // for(int i=0; i<nums.size(); i++){
    //     hash[nums[i]] = 1;
    // }
    //  int ans;
    // for(int i=1; i<=nums.size(); i++){
    //     if(hash[i] == 0){
    //         ans=i;
    //     }
    // }
    // return ans;

   //TC- O(N)
   // SC- O(N)
    // sort(nums.begin(), nums.end());
    // int n = nums.size();

    // for(int i=0; i<n; i++){
    //     if(nums[i] != i){
    //         return i;
    //     }
    // }
    // return n;


    //using sum of natural numbers n * (n+1) /2
     //TC- O(N)
     // SC- O(N)
    // int n= nums.size();
    // int sum = n*(n+1)/2;
    // int s = 0;

    // for(int i=0; i<n; i++){
    //     s += nums[i];
    // }

    // return sum - s ;


    //using XOR 
    int n= nums.size();
    int xor1 =0;
    int xor2 =0;

      for(int i=0; i<n; i++){
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i+1);
    }

    return xor1 ^ xor2;
    }