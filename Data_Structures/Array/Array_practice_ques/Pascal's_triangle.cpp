

#include <bits/stdc++.h>
using namespace std;

// solved using dp

// PASCAL TRIANGLE

vector<int> generateRow(int n)
{

    vector<int> ansRow;
    ansRow.push_back(1);
    if (n == 1)
        return ansRow;
    long long int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= N; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}