#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Number Hashing
    //  int n = 12;

    // int arr[12] = {1, 3, 2, 1, 3};

    // int hash[13] = {0};

    // for (int i = 0; i < 12; i++)
    // {
    //     hash[arr[i] - 1] += 1;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << hash[i] << " ";
    // }

    // Character Hashing
    // use n=26 and ch-'a' as string only has lowercase letters
    int n = 26;
    string s = "abcdabehf";

    int hash[n] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    // if it does not mention the lowercase letters use the size 256 size array and simply do hash[s[i]]++
    // int n = 256;
    // string s = "abcGSDIFAMEQAOEWdabehf";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}