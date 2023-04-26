#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
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


node* Find_nth_node_and_Remove(node* &head , int n){
       //if only 1 node is there
       if(head->next==NULL){
           return NULL;
       }

    //    calculate size of the list
    int size=0;
    node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }

    // if n is equal to size of the list thn head is the node we have to remove
    if(n==size){
        return head->next;
    }

    //find previous node 
    int pre_size = size-n;    //position of previous node
    node* pre = head;         //pre node
    int cur_pos = 1;           //current position 

    while(cur_pos!=pre_size){
        pre=pre->next;
        cur_pos++;
    }
    pre->next= pre->next->next;
    return head;
}

int main(){
    node* head = NULL;
    cout<<"Enter size of the list : ";
    int m, n,ele;
    cin>>m;
    cout<<"Now enter value of the list : ";
    for(int i=0 ; i<m; i++){
      cin>>ele;
      addnodde(head,ele);
    }

    // addnodde(head,1);
    // addnodde(head,2);
    // addnodde(head,3);
    // addnodde(head,4);
    // addnodde(head,5);

    
    printlist(head);

    cout<<"Enter nth position you want to remove from last: ";
    cin>>n;

    Find_nth_node_and_Remove(head,n);
    printlist(head);
}

