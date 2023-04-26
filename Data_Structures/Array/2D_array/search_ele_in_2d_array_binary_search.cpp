#include <bits/stdc++.h>

using namespace std;

int main()
{

    int matrix[3][4] = {1, 2, 3, 4,
                        5, 6, 7, 8,
                        9, 10, 11, 12};

    int target = 19;
    // int row= matrix.size();
    // int col = matrix[0].size();

    int row = 3;
    int col = 4;

    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int ele = matrix[mid / col][mid % col]; // mid/col => gives the row index and mid%col => gives the col index og the mid value

        if (ele == target)
        {
            cout << "found" << endl;
            return 0;
        }

        if (ele < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "not found" << endl;
}
