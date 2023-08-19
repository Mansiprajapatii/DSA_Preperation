#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter arr size :" << endl;
    cin >> n;

    int arr[n];

    cout << "enter arr element :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // int que;
    // cout << "enter query size :" << endl;
    // cin >> que;
    // cout << "enter query element :" << endl;
    // while (que--)
    // {
    //     int number;

    //     cin >> number;

    //     cout << "output of query :" << endl;
    //     // fetch hash
    //     cout << mpp[number] << endl;
    // }

    // find the max frwquency element

    int maxf = 0;
    int minf = n;
    int maxele = 0;
    int minele = 0;
    for (auto it : mpp)
    {

        int count = it.second;
        int element = it.first;

        if (count > maxf)
        {
            maxele = element;
            maxf = count;
        }

        if (count < minf)
        {
            minele = element;
            minf = count;
        }
    }

    cout << "max element: " << maxele << endl;
    cout << "min element: " << minele << endl;

    return 0;
}