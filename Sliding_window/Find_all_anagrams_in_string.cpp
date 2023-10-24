#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p)
{
    unordered_map<char, int> map1, map2;
    vector<int> ans;
    int k = p.size();

    for (int i = 0; i < k; i++)
    {
        map2[s[i]]++;
        map1[p[i]]++;
    }

    if (map1 == map2)
    {
        ans.push_back(0);
    }

    for (int i = k; i < s.size(); i++)
    {

        map2[s[i]]++;
        map2[s[i - k]]--;

        if (map2[s[i - k]] == 0)
        {
            map2.erase(s[i - k]);
        }

        if (map1 == map2)
            ans.push_back(i - k + 1);
    }

    return ans;
}