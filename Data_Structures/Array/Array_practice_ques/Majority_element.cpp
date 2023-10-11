#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v)
{

    // TC - O[n Log N]
    //  SC- O[n]
    //  map<int,int> mpp;

    // for(int i=0; i<v.size() ; i++){
    // 	mpp[v[i]]++;
    // }

    // for(auto it: mpp){
    // 	if(it.second > v.size() / 2){
    // 		return it.first;
    // 	}
    // }
    // return -1;

    // using MOORe,s Voting algorithm
    // TC- O[N]
    // SC - O[ 1]
    int ele;
    int cnt = 0;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {

        if (cnt == 0)
        {
            ele = v[i];
            cnt = 1;
        }

        else if (v[i] == ele)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == ele)
        {
            ans++;
        }
    }
    if (ans > n / 2)
    {
        return ele;
    }
    return -1;
}