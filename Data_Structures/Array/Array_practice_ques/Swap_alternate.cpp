#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 6;

    int arr[n] = {1, 3, 4, 5, 6, 7};

    for (int i = 0; i < n; i = i + 2)
    {

        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}