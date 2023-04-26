#include<bits/stdc++.h>
using namespace std;

// long long power(int a, int n){  //complexity is O(n) and space complexity is O(n)

//     //base case
//     if(n==0){
//        return 1;
//     }
//     return a*power(a,n-1);
// }

long long power(int a, int n){   //complexity is O(log n) and space complexity is O(log n)
 
    //base case 
    if(n==0) return 1;


     long long pow = power(a,n/2);
    //if n is even 
    if(n%2==0){
        return pow*pow;
    }
    else{
        return a*pow*pow;
    }
}

int main(){
    int a = 9;
    int n=3;
 
 cout<<power(a,n)<<endl;



    return 0;
}
