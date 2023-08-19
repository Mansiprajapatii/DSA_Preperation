// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter arr size :" << endl;
//     cin >> n;

//     int arr[n];

//     cout << "enter arr element :" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // precompute the hash
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int que;
//     cout << "enter query size :" << endl;
//     cin >> que;
//     cout << "enter query element :" << endl;
//     while (que--)
//     {
//         int number;

//         cin >> number;

//         cout << "output of query :" << endl;
//         // fetch hash
//         cout << hash[number] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter string :" << endl;
    cin >> s;

    // precompute the hash
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int que;
    cout << "enter query size :" << endl;
    cin >> que;
    cout << "enter query element :" << endl;
    while (que--)
    {
        char m;

        cin >> m;

        cout << "output of query :" << endl;
        // fetch hash
        cout << hash[m - 'a'] << endl;
    }

    return 0;
}