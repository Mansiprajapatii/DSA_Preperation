#include <iostream>
using namespace std;

bool BinarySearch(int a[], int s, int e,int k){

    //base case when element not found 
    if(s>e){
        return false;   
    }

    int mid = s+ (e-s)/2;

    //base case when element found
    if(a[mid]==k){
        return true;
    }

    if(a[mid]<k){ //right part
       return BinarySearch(a,mid+1, e, k);
    }
    else{ //left part
       
       return BinarySearch(a,s,mid-1,k);

    }

}

int main()
{

    int a[5] = {2, 5, 7, 8, 10};
    int k = 80;

    if (BinarySearch(a, 0, 5, k))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}