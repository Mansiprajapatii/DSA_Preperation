#include <bits/stdc++.h>
using namespace std;


 long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0; int j=0;
     long long sum=0,maxi=0;
        int n = nums.size();

        unordered_map<int,int> mp; // ele,count

        while(j<n){

            sum+=nums[j];

            mp[nums[j]]++;

            if(j-i +1 < k){
                j++;
            }

            else {

                if(mp.size() == k){
                    maxi = max(maxi,sum);
                    sum -= nums[i];
                }
                else{

                    sum -= nums[i];
                }

                mp[nums[i]] --;

                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
                j++;
            }
        }

        return maxi;
    }