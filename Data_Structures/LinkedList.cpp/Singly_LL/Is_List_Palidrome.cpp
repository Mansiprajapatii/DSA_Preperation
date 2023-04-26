#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next = NULL;
    }
};

void addnodde(node* &head, int val){
    node* newnode = new node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newnode;
}

void printlist(node *head){
    node *temp = head;
    if(temp==NULL){
         cout<<"list is empty"<<endl;
         return;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// ************************************** Approach 1 : 
// 1. create a vector 
// 2. copy the data of the list into the vector 
// 3. apply logic to check the palindrome in the vecto

// Time Complexity = O(n);
// space Complexity = O(n);
bool PalindromeORnot(node* head){
    vector<int>arr;
    node* temp=head;

// to copy data 
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }

// to check the palindrome
    int n = arr.size();
    int s= 0;
    int e=n-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;

}

//*******************************************ptimized solution************************************************* 
// ******* Approach 2
// function to find mid node of the list 
// approch:  hare and tortoise algo , here hare move 2 step at a time and tortoise move 1 step at the same time 
// when hare is at null or point to null at that time tortoise is at mid 
// here hare is fast pointer and tortoise is slow pointer

//Time complexity = O(n);
// space complexity = O(1);
node* find_mid(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// function to reverse second half of the list 
node* reverse_half_list(node* &head){
    node* pre = NULL;
    node* cur = head;
    node* next = NULL;

    while(cur!=NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

// funtion to compaire  1st node with last node of list 

bool isPalindrome(node* head){
    // base case:  empty list or only have one node so it is palindrome by default 
    if(head==NULL || head->next == NULL ){
        return true;
    }

// mid pointer store the position of middle node
    node* mid = find_mid(head);

// last pointer store the position of last node of reverse list 
    node* last = reverse_half_list(mid);


// cur pointer to traverse the list 
    node* cur = head;

//start loop and run till while last pointer point to null i.e. reverse list's null 
    while(last!=NULL){
        // if node of 1st half is equal or not to node of 2nd half 
        if((cur->data) != (last->data) ){
            return false;
        }
        last = last->next;
        cur = cur->next;
    }
    return true;
}

int main(){
    node* head = NULL;

    addnodde(head, 1);
    addnodde(head, 2);
    addnodde(head, 3);
    addnodde(head, 1);
    addnodde(head, 1);

//    cout<< isPalindrome(head)<<endl;  // true = 1     false = 0
cout<<PalindromeORnot(head)<<endl;
}