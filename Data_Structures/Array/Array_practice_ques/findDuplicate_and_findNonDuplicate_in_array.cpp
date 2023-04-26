// Unique element in array
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// finding non duplicate element in the arr
void nonDuplicate(int arr[], int n)
{   
    vector<int> v;
    int count[5];
    int temp = 0;
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            temp = 1;
            i++;
        }
        else
        {
            v.push_back(arr[i]);
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
}

// finding duplicate element in the array
 void findDuplicate(int arr[], int n){
    vector<int> v;
    int count[5];
    int temp = 0;
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            temp =1;
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
 }

int main()
{

    // finding non duplicate element in the arr
    int arr[5] = {1, 2, 1, 5, 5};
    nonDuplicate(arr,5);

    // finding duplicate element in the array
    findDuplicate(arr,5);
}



