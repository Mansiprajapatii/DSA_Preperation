#include <iostream>
using namespace std;

int arr[100];
int size = 0;

void insert(int val)
{
    arr[0] = -1;
    size = size + 1;
    int index = size;
    arr[index] = val;

    while (index > 1)
    {
        int parent = index / 2;
        if (arr[parent] < arr[index])
        {
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else
        {
            return;
        }
    }
}
void print()
{
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Delete(){
    //if no element to delete
    if(size==0){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    //step 1 : put last element at first index
    arr[1] = arr[size];

    //step 2: remove last element 
    size--;

    //step 3: take root node to its correct position
    int i=1;
    while(i<size){
        int left = 2*i;
        int right = 2*i+1;

        if(left < size && arr[i] < arr[left]){
            swap(arr[i], arr[left]);
            i = left;
        }
        else if(right < size && arr[i] < arr[right]){
            swap(arr[i], arr[right]);
            i = right;
        }
        else{
            return;
        }
    }
}
int main()
{ 
    insert(60);
    insert(50);
    insert(40);
    insert(30);
    insert(20);
    print();
    Delete();
    print();

    return 0;
}