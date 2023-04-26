//Q. given a sentence as a charecter array e.g. do or die
// We have to find max length word and print it . for e.g. here maxlen word is die.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();          //to ignore spaces or enter button action

    char arr[n + 1];
    cin.getline(arr, n);  //to take whole sentence
    cin.ignore();

    int i = 0;
    int current = 0, maxLen = 0, start = 0, maxStrt = 0;

    while (i < n)
    {
 
        if(arr[i]==' '||arr[i]=='\0')      //do or die c1 i1 , c2 i2,     c1 i4,    c2 i5 ,  c1 i7, c2 i8,  c3 i9 
         {                                            //       m2 ms0             s5 c0 i6                  m3  ms6 
                                                      //      s2  c0 i3
           if(current>maxLen)
           {
               maxLen = current;          //current word length is greater update maxlength with the current word position
               maxStrt = start;           // starting index of maxlen word till noow
           } 
           start = i+1;                    //next word starting index 
           current=0;                      //restart counting length of current word
        }                    
        else  current++  ;                  // no space continue counting current word position by adding 1
                            
        if(arr[i]=='\0')                   //at the end of sentence break the loop 
        {
            break;
        }
        i++;
    }
    cout<<arr<<endl;
    cout<<maxLen<<endl;

    for(int i=0; i<maxLen; i++){
        cout<<arr[maxStrt+i];
    }
    return 0;
}