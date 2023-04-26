#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[3][4] = {1 ,2, 3, 4, 
                     5, 6, 7, 8, 
                     9, 10, 11, 12};

            int count=0; 
            int total = 3*4;
            int row=3;
            int col=4; 

            int startrow=0;
            int startcol=0;
            int endrow=row-1;
            int endcol=col-1;

            while(count<total){

                //left to right 
                for(int i=startcol;  count<total &&   i<=endcol; i++){
                    cout<<arr[startrow][i]<<" ";
                    count++;
                }
                startrow++;
                //right top to bottom 
                for(int j=startrow; count<total &&  j<=endrow; j++){
                    cout<<arr[j][endcol]<<" ";
                    count++;
                }
                endcol--;
                //right to left
                for(int k=endcol; count<total &&  k>=startcol; k--){
                    cout<<arr[endrow][k]<<" ";
                    count++;
                }
                endrow--;
                //left bottom to top
                for(int l=endrow;  count<total && l>=startrow; l--){
                    cout<<arr[l][startcol]<<" ";
                    count++;
                }
                startcol++;
            
            }
return 0;
}