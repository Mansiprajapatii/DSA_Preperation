#include<iostream>
using namespace std;

int main() {

     int n ;
     cout<<"enter the no. of rows you want in the pattern: "<<endl;
     cin>>n; 

    /*  pattern 1
    ****
    ****
    ****
    */

 /*for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<"*";
    }
    cout<<endl;
  }
  */

 /* pattern 2 

 1 1 1 
 2 2 2 
 3 3 3 
 

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n ; j++){
        cout<<" "<<i<<" ";
    }
    cout<<endl;
  }
  */

/* pattern 3
 
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4


 for( int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<" "<<j<<" ";
    }
    cout<<endl;
 } */

 /* pattern 4 

 4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 

  for(int i =1; i<=n; i++){
    for(int j=n; j>=1; j--){
        cout<<" "<<j<<" ";
    }
    cout<<endl;
  }  */

  /* pattern 5

  1 2 3
  4 5 6 
  7 8 9 
  
  int count = 0;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        count++;
        cout<<" "<<count<<" ";
    }cout<<endl;
  } */

  /*  pattern 6

  * 
  * *
  * * *
  * * * *

  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<" * ";
    }cout<<endl;
  }*/

  /* pattern 7
  1
  2 2
  3 3 3
  4 4 4 4 
  

 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<" "<<i<<" ";
    }
    cout<<endl;
 }*/

 /* pattern 8

 1 
 2 3 
 4 5 6
 7 8 9 10
 
  int count =0;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        count++;
        cout<<" "<<count<<" ";
    }cout<<endl;
  }*/

  /* pattern 9 
  1 
  2 3
  3 4 5
  4 5 6 7

//method 1
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<" "<<i+j-1<<" ";
    }cout<<endl;
 }
//method 2
for(int i=1; i<=n; i++){
    int val =i;
    for(int j=1; j<=i; j++){
        cout<<" "<<val<<" ";
        val++;
    }cout<<endl;
 }
*/

/* pattern 10
  1
  2 1 
  3 2 1 
  4 3 2 1


//  method 1
  for(int i=1; i<=n ; i++){
    int val = i;
    for(int j=1; j<=i; j++){
      cout<<" "<<val<<" ";
      val--;
    }cout<<endl;

// method 2
 for(int i=1; i<=n ; i++){
    for(int j=1; j<=i; j++){
      cout<<" "<<i-j+1<<" ";
    }cout<<endl;
  }
  */

 /* pattern 11
    A A A
    B B B 
    C C C

  for(int i=1; i<=n ; i++)
  {
    for(int j=1; j<=n; j++){
         char c = 'A'+i-1;
        cout<<c;
    }cout<<endl;
  }
  */

/* Pattern 12
 A B C
 A B C 
 A B C

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        char c = 'A'+j-1;
        cout<<c;
    }cout<<endl;
}
*/

/* Pattern 13
 A B C 
 D E F 
 G H I
 
  char c = 'A';
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n ; j++){
       cout<<c;
       c++;
    }cout<<endl;
  }
*/

/* Pattern 14
 A B C 
 B C D
 C D E
 

 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++)
    {
        char c = 'A'+i+j-2;
        cout<<" "<<c<<" ";
    }cout<<endl;
 }
*/

//  pattern 15
  //  A
  //  B B
  //  C C C
  char c = 'A';
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<" "<<c<<" ";
    }
     c++; 
    cout<<endl;
  }


















































    return 0;
}