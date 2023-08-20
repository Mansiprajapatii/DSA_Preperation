#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> findArrayIntersection(vector<int> &nums1, int n, vector<int> &nums2, int m)
{
 vector<int>ans;
 int i=0,j=0;

    
	while(i<n && j<m){

		if(nums1[i]==nums2[j]){
			ans.push_back(nums1[i]);
			i++;
			j++;
		}
		else if(nums1[i] < nums2[j]){
			i++;
		}
		else{
			j++;
		}
	}

	return ans;
}


int main()
{
    int n=6,m =4;
    int arr1[n] = {1 ,2 ,2 ,2 ,3 ,4};
    int arr2[m] = {2 ,2 ,3 ,3};
    
}