#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{

    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            high = mid - 1; // left
            ans = mid;
        }
        else
        {
            low = mid + 1; // right
        }
    }

    return ans;
}

int main()
{

    int n = 5;
    int x = 8;

    vector<int> arr = {3, 5, 8, 15, 19};

    cout << lowerBound(arr, n, x) << endl;

    return 0;
}
