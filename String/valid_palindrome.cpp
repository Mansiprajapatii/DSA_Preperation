#include<iostream>
using namespace std;
string d="";

    int i=0;
 string changeLowercase(string s){

   //convert string into lower case
   for(int i=0; i < s.length(); i++){
    if((s[i]>='a' && s[i]<='z' )|| (s[i]>=0 && s[i]<= 9)){
         s[i]= s[i];
    }
    else{
        s[i]= tolower(s[i]);
    }
   } 
 return s;
 }

 string removeAlpha(string s){
    for(int i=0; i<s.length(); i++){
        if( (s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<= '9')){
            d.push_back(s[i]);
        }
        else{
           continue;
        }
    }
    return d;
 }

 bool isPalindrome(string s){
    bool a= false;
    int i=0; 
    int e= s.length()-1;
   while(i<=e){
    if(s[i]!=s[e]){
        return 0;
    }
    else{
       i++;
       e--;
    }
   }
     
return 1;
    
 }

int main (){

   string s ="10P@#32";
cout<<removeAlpha(s)<<endl;
  if(isPalindrome(changeLowercase((s)))){
    cout<<"palindrome"<<endl;
  }
  else{
    cout<<"not"<<endl;
  }
    return 0;
}