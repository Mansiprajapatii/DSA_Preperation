#include<bits/stdc++.h>
using namespace std;


vector<int> superiorElements(vector<int>&nums) {

    vector<int> ans;

    int maxi=-1;

    for(int i=nums.size()-1;i>=0;i--) if(nums[i]>maxi) ans.push_back(nums[i]),maxi=nums[i];

    return ans;

}