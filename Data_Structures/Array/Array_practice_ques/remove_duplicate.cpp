#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



int removeDuplicates(vector<int> &arr, int n) {
	int size = 0;

	for(int i=0; i<n; i++){
		if(arr[i]==arr[i+1]){
			continue;
		}
		else{
			size++;
		}
	}
	return size;
}

int main(){

    return 0;
}