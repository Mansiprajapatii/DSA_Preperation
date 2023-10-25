
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();

    long long sum = 0;

    map<long long, int> prefixSum;

    int maxlen = 0;

    for (int i = 0; i < n; i++)

    {

        sum = sum + nums[i];

        if (sum == k)

        {

            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k;

        if (prefixSum.find(rem) != prefixSum.end())

        {

            int len = i - prefixSum[rem];

            maxlen = max(maxlen, len);
        }

        if (prefixSum.find(sum) == prefixSum.end())

        {

            prefixSum[sum] = i;
        }
    }

    return maxlen;
}