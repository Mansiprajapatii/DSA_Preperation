
#include <bits/stdc++.h>
using namespace std;

 int lengthOfLongestSubstring(string s) {
        vector<int> mapp(256,-1);
        int left =0, right=0;
        int len=0;
        int n= s.size();

        while(right < n){
            if(mapp[s[right]] != -1) {
                left = max(left, mapp[s[right]]+1);
            }
            mapp[s[right]] = right;

            len = max(len, right-left+1);

            right++;
           
        }
        return len;
    }