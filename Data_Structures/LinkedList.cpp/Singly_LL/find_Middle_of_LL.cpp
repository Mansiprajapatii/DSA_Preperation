#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void AtPosition(Node* &head, int val , int pos){
    Node* newnode = new Node(val);
    Node* temp = head;

    if(pos==0){
        newnode->next = head;
        head = newnode;
        return;
    }
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next = newnode;
    
}

//approch 1  TC= O(n)
int getlength (Node* head){
    int len =0;
    while(head!=NULL){
        
        head=head->next;
        len++;
    }
    return len;
}

Node *findMiddle(Node *head) {

    int len = getlength(head);
    int ans = len/2;

    Node*temp = head;
    int i=0;

    while(i<ans){
        temp=temp->next;
        i++;
    }
    return temp; 
}


//approch 2  using fast and slow pointer 
Node* find_middle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main (){

    // Node* node1= new Node(0);
    Node* head = NULL;
    

    AtPosition(head,10,0);
    AtPosition(head,20,1);
    AtPosition(head,50,2);
    AtPosition(head,80,3);
     AtPosition(head,90,4);
     AtPosition(head,40,5);

Node* temp = find_middle(head);

cout<<temp->data<<endl;
    

    
     return 0;

}
