//CHOCoLATE QUESTION

#include<iostream>

using namespace std;

int main(){
    int chocolate, sum =0 , wrapper=0 , total, more=0 , one=0,a,b,c;
    cin>>chocolate;
    for(int i=1; i<=chocolate; i++){
        sum = i;

        wrapper = chocolate/3;
        a= chocolate%3;

        more = (wrapper+a)/3;
        b= (wrapper+a)%3;

        one = (more+b)/3;
        c= (more+b)%3;

        total= sum+wrapper+more+one ;

    }
    cout<<"chocolate =  "<<total<<endl;
    return 0;
}