#include<iostream>
using namespace std;

 bool isPalindrome(string &s , int i, int j){

    //base case
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
       return isPalindrome(s,i+1,j-1);
    } 
 }

int main(){

    string s ="1211";

   if( isPalindrome(s,0,s.length()-1)){
    cout<<"palindrome"<<endl;
   }
   else{
    cout<<"not palindrom"<<endl;
   }


    return 0;
}