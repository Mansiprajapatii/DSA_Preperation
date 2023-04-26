#include <iostream>
using namespace std;

bool linearSearch(int a[], int n, int k)
{

    // base case
    if (n == 0)
    {
        return false;
    }

    if (a[0] == k)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(a + 1, n - 1, k);
        return ans;
    }
}

int main()
{

    int a[5] = {2, 5, 7, 8, 10};
    int k = 8;

    if (linearSearch(a, 5, k))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}