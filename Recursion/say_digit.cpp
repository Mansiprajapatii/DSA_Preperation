// problem statement: there is a number given suppose 412 you have to peint the number like this four one two 

#include<iostream>
using namespace std;

void saydigit(int n, string a[]){
    
    //base case
    if(n==0){
       return;
    }
    int digit = n%10;
    int nextdigit = n/10;

    saydigit(nextdigit,a);

    cout<<" "<<a[digit]<<" ";

}

int main(){

    string a[10]= { "zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,a);

    return 0;
}
