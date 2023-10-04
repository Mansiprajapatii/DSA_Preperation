#include <iostream>
using namespace std;

//  bool isPalindrome(string &s , int i, int j){

//     //base case
//     if(i>j){
//         return true;
//     }

//     if(s[i]!=s[j]){
//         return false;
//     }
//     else{
//        return isPalindrome(s,i+1,j-1);
//     }
//  }

bool checkPalindrome(string &s, int i)
{

    // base case
    if (i >= s.size() / 2)
    {

        return true;
    }

    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }

    return checkPalindrome(s, i + 1);
}

int main()
{

    string s = "1212541";

    if (checkPalindrome(s, 0))
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrom" << endl;
    }

    return 0;
}