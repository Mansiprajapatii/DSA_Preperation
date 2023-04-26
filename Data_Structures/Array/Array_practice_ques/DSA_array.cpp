
// //avg of a array elements
// #include<iostream>

// using namespace std;

// int main(){
//     int arr[4]= { 1,2,3,4};
//     float sum=0;
//     for(int i=0; i<4; i++)
//     {
//            sum+=arr[i];
//     }
//     cout<<sum/4;
//     return 0;
// }



// //reverse an array 
// #include<iostream>

// using namespace std;

// int main(){
//     int arr[4] = {1,2,3,4};
//     for(int i=0; i<2; i++){
//         int temp= arr[i];
//         arr[i]= arr[4-1-i];
//         arr[4-1-i]= temp;
//     }
//     for(int i=0; i<4; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// //Binary search

// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[10] = {1, 4, 5, 23, 58, 62, 73, 78, 85, 96};
//     int start = 0;
//     int end = 9;
//     int key;
//     cin >> key;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
         
//         cout<<"start : "<<start<<"    "<<"end : "<<end<<endl;

//         if (key == arr[mid])
//         {
//             cout << " \" Found \" " << endl;
//             cout<<"index at which we found the key : "<<mid<<endl;
//             break;
//         }
//         else if (arr[mid] > key)
//             end = mid - 1;
//         else
//             start = mid + 1;   
//     }
//     if(start>end)
//             cout<<" \" not found \" "<<endl;
//     return 0;
// }


// insertion sort 

// #include<iostream>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)  //taking array 
//     {
//         cin>>arr[i];
//     }
//     for(int i=1; i<n; i++)        //insertion sort ....in this we start with 2nd element i.e of index 1
//     {                             // current is of index 1 element and j is 0 index element 
//         int current= arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){          //compairing both element 
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;                    //upadating current element 
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

// //bubble sort 

// #include<iostream>                   //DO NOT USE TIS CODE

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 1 ; i < n; i++)
//     {
//         for (int j = 0; j< n-i; i++)
//         {
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
        
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    
    
//     return 0;
// }

///SORTING IN ARRAY "BUBBLE SORT"

// #include<iostream>

// using namespace std;

// int main(){
// int n;  
//     cin>>n;

//     int arr[n];                 //taking arrary fron the usr
//     for(int i=0; i<n; i++){
//         cin>>arr[i];           
//     }
//  // storing array 
 
//     int count=1;               //for bubble sort
//     while(count<n){                     
//        for(int i=0; i<n-count; i++){    // shorting happens for n-count time
//            if(arr[i]>arr[i+1]){         // 45 > 23
//                int temp = arr[i];      // swap 23 45 
//                arr[i]= arr[i+1];
//                arr[i+1]=temp;
//            }
//        }
//        count++;
//     }
//     for(int i=0; i<n; i++){          // print sorted arrARY
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//SORTING IN ARRAY "SELECTION SORT"

#include<iostream>

using namespace std;

int main(){
    int n,pos;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)      //find smallest digit index and swap  it with 0th element 
        {                                  // 64 25 12 22 11 -- array
             pos=i;                     // i=0 
                                           //pos =0 j=1 ----- 25<64 true update pos=j=1 
            if(a[j]<a[pos]){               //pos=1  j=2 ----- 12<25 true update pos=j=2
                pos=j;                    //pos =2  j=3 ----- 22<12 false remain same pos=2
            }                             //pos =2  j=4 ----- 12<11 true update pos=j=4 
            // if(pos!=i){
            //     int temp = a[i];            //check  pos!=i  --- 4!=0 swap (0,4)
            //     a[i]=a[pos];           
            //     a[pos]=temp;
            // }

            int temp = a[i];            //check  pos!=i  --- 4!=0 swap (0,4)
                a[i]=a[pos];           
                a[pos]=temp;

        }
           
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

