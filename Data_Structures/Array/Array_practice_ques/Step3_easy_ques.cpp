#include<bits/stdc++.h>

using namespace std;



//Second Largest Number

vector<int> getSecondOrderElements(int n, vector<int> arr) {

  // Time complexity - O(NlogN)
 
  // sort(a.begin(),a.end());

  // vector<int>ans;

  // ans.push_back(a[n-2]);

  // ans.push_back(a[1]);
  

  // return ans;

  // Time Complexity= O(N)

  int small = INT_MAX ;
  int second_small = INT_MAX;

  for(int i=0; i<n; i++){

    if(arr[i] < small){
      second_small = small;
      small = arr[i];
    }

    else if(arr[i] < second_small && arr[i] != small ){
      second_small = arr[i];
    }

  }


  int large = INT_MIN;
  int second_large = INT_MIN;
  
  for(int i=0; i<n; i++){

    if(arr[i] > large){
      second_large = large;
      large = arr[i];
    }

    else if(arr[i] > second_large && arr[i] != large ){
      second_large = arr[i];
    }

  }
  
  vector<int> ans;
  ans.push_back(second_large);
  
  ans.push_back(second_small);

}



// Largest Element in the Array
int largestElement(vector<int> &arr, int n) {
   
   //solution one 
//    int max = 0;
//    for(int i=0; i<n; i++){
//       if(arr[i]> max){
//           max = arr[i];
//       }
//    }
//    return max;

   //solution two 
   //using STL max_element function

   return *max_element(arr.begin(), arr.end());
}

