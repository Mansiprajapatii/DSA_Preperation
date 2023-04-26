//findinng max and min in the inserted array

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT16_MIN;
    int minNo = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << maxNo << endl;
    cout << minNo << endl;

    return 0;
}