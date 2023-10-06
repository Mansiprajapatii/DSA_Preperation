#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 12;

    int arr[12] = {1, 3, 2, 1, 3};

    int hash[13] = {0};

    for (int i = 0; i < 12; i++)
    {
        hash[arr[i] - 1] += 1;
    } 

    for (int i = 0; i < n; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}