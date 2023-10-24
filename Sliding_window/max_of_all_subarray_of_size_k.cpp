
#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarray(vector<int> nums, int n, int k) 
{
	//type 1 

	vector<int>ans;

	int i=0, j=0;

	int maxi =0;

	// while(j<n){

	// 	maxi = max(maxi,nums[j]);


	// 	if(j-i+1 < k){
	// 		j++;
	// 	} 

	// 	else if(j-i+1 == k){
	// 		ans.push_back(maxi);

	// 		if(nums[i] != maxi){
	// 			i++;
	// 			j++;
	// 		}

	// 		else if(nums[i] == maxi){
	// 			i++;
	// 			j=i;
	// 			maxi =0;
	// 		}
	// 	}
	// }

	// return ans;

	//type 2

	list<int> l;
	 while(j<n){

		 while(l.back() < nums[j] && l.size() > 0){
			 l.pop_back();
		 }

		 l.push_back(nums[j]);

		 if(j-i+1 < k) j++;

		 else if(j-i+1 == k){

			 ans.push_back(l.front());

			 if(l.front() == nums[i]) l.pop_front();

		 i++;
		 j++;
		 }
	 }

	 return ans;

}
