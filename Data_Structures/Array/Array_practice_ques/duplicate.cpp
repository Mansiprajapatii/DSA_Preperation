#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    sort(arr, arr + size);
    int j;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = arr[i];
            cout << arr[i] << endl;
            break;
        }
    }
}

// optimized solution using XOR
int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{

    int size = 9;
    int arr[size] = {0, 7, 2, 5, 4, 7, 1, 3, 6};

    duplicateNumber(arr, size);

    return 0;
}