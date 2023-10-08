#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    

    //brute force solution 
    // TC- O[k] + O[n-k] + O[k] 
    // SC - O[K]
    int n = arr.size();
    // k = k%n;
    
    // vector<int> temp ;
    
    // for(int i =0; i<k; i++){
    //     temp.push_back(arr[i]);
    // }

    // for(int i=k; i<n; i++){
    //     arr[i-k]= arr[i];
    // }

    // for(int j=n-k; j<n; j++ ){
    //     arr[j] = temp[ j - (n-k)];
    // }


    //optimal solution
    //TC- O[2N] = O{N}
    //SC- O[1]

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    

    return arr;
}
int main(){


    return 0;
}
