#include <bits/stdc++.h>
using namespace std;


vector<int> firstNegative(vector<int> arr, int n, int k) {
	vector<int>ans;
	queue<int>q;

	int i=0, j=0;

	while(j < n){

		if(arr[j] < 0) q.push(arr[j]);

		if(j-i+1 < k ) j++;

		else if( j-i+1 == k) {

			if(q.empty()) ans.push_back(0);

			else {

				ans.push_back(q.front());

				if(arr[i] == q.front()) q.pop();
			}
			i++; 
			j++;
		} 
	}

	return ans;
}