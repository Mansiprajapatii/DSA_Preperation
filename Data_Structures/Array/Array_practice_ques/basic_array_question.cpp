#include <iostream>
using namespace std;

void changeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 5;
    }
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {

        int temp = 0;

        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void alternetReverse(int arr[], int n)
{
    int temp = 0;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++;
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {

            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++;
        }
    }
}

    void linearSearch(int arr[], int n, int key)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            cout << "nhi mila re nhi mila jane kha gaya re...." << endl;
        }
        else
        {
            cout << "mil gaya re! mil gaya koi humko mil gaya...." << endl;
        }
    }

    int main()
    {

        // int key;
        // cin >> key;

        int a[6] = {10, 20, 30, 40, 50, 60 };

        // changeArray(a, 5);

        // reverseArray(a,5) ;

        alternetReverse(a, 6);

        for (int i = 0; i < 6; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        // Max or min element  complexity = O(n)
        //     int max = INT8_MIN;
        //     int min = INT8_MAX;

        //    for ( int i=0; i<5; i++){
        //     if(a[i]< min){
        //         min= a[i];
        //     }
        //     if(a[i]> max){
        //         max = a[i];
        //     }
        //    }
        //    cout<<"max: "<<max<<endl;
        //    cout<<"min: "<<min<<endl;

        // sum of array
        //  complexity = O(n)
        //  int sum =0;
        //   for(int i=0; i<5; i++){
        //      sum+=a[i];
        //   }
        //   cout<<"sum: "<<sum<<endl;

        // linearSearch(a, 5, key);

        // reverseArray(a,5);

        return 0;
    }