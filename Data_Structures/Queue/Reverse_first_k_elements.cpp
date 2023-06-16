//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;

    
    //step 1  fetch first k element from queue and push into stack
    for(int i=0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
     //step 2  fetch element from stack and push back into queue
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    int rem = q.size() - k; //n-k


     //step 3  fetch first n-k element from queue and push back into queue
    while(rem){
        int val = q.front();
        q.pop();
        q.push(val);
        rem--;
    }
    
    return q;
}