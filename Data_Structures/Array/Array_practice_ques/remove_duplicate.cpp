#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// using brute force 
// TC - O{N}
// SC - O{1}
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

// using sets 
//time complexity = O{N log N}+ N
// space complexity = O{N}

int remove_duplicate(vector<int> arr, int n)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int index = 0;

    for (auto it : s)
    {
        arr[index] = it;
        index++;
    }

    return index;
}

// using twp pointer approach 
// TC- O{N}
// SC - O[1]
int remove__duplicate(vector<int> arr, int n){
    int i=0;

    for(int j=1; j<n; j++){
        if(!arr[j] == arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }

    return i+1;
}



int main()
{
    int n = 7;
    vector<int> arr = {2, 3, 1, 6, 3, 6, 2};

    cout << remove_duplicate(arr, n);

    return 0;
}