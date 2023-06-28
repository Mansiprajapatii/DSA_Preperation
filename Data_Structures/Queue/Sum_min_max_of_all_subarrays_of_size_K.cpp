#include <iostream>
#include <queue>

using namespace std;

int SumofMinMax(int arr[], int n, int k)
{

    deque<int> maxi(k);
    deque<int> mini(k);

    // addition of first k size window

    for (int i = 0; i < k; i++)
    {

        // only include tha max value of the window
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        //  only include the min value of the window
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        // add the element
        maxi.push_back(i);
        mini.push_back(i);
    }

    int sum = 0;

    sum += arr[maxi.front()] + arr[mini.front()];

    // remaining windows to process

    for (int i = k; i < n; i++)
    {

        // In next window
        // remove one element
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }

        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // add one element
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        sum += arr[maxi.front()] + arr[mini.front()];
    }

    // return
    return sum;
}

int main()
{

    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << SumofMinMax(arr, n, k) << endl;

    return 0;
}