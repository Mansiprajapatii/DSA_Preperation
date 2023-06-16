//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		   
		   unordered_map<char,int> count;
		   
		   queue<int>q;
		   
		   string s = "";
		   
		   for(int i=0; i<A.length(); i++){
		       char ch = A[i];
		       
		       //increase the count of the character 
		       count[ch]++;
		       
		       //push the char into the queue
		       q.push(ch);
		       
		       while(!q.empty()){
		           
		           //check if repeating if yes thn we dont need pop the char
		           if(count[q.front()]>1){
		               q.pop();
		           }
		           
		           else{
		               s.push_back(q.front());
		               break;
		           }
		       }
		       
		       if(q.empty()){
		           s.push_back('#');
		       }
		   }
		   
		   return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends