#include<iostream>
using namespace std;

void print(int n){
//head recursion 
    if(n==0){
        return;
    }
     print(n-1);
     cout<<n<<endl;
}

void print1(int n){
    //tail recursion
    if(n==0){
        return;
    }
        cout<<n<<endl;
        print1(n-1);
}
int main(){

    int n;
    cin>>n;
    
    print(n);

    return 0;
}