#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int findUnique(int *arr, int size)
{
    int uni;
    sort(arr, arr + size);
    for (int i = 0; i < size; i = i + 2)
    {

        if (arr[i] != arr[i + 1])
        {
            uni = arr[i];
            break;
        }
    }

    return uni;
}

int main()
{
    int size = 7;
    int arr[size] = {2, 3, 1, 6, 3, 6, 2};

    cout << findUnique(arr, size) << endl;
}