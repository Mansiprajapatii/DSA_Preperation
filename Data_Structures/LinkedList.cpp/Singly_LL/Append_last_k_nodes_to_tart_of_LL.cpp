#include<iostream>
using namespace std;

 //creating node class or list
class Node{
    public:       //by default it is private so make it public              
    int data;     //data/value part of the node 
    Node* next;  //pointer to next node 

    Node(int val){ //constructor to assign value
        data=val;
        next = NULL;
    }
};


// add node at last 
void addLast(Node* &head , int val){
    Node* newnode = new Node(val);
    // check if list is empty or not 
    if(head==NULL){
        head = newnode;
        return;
    }

    Node  *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

int length(Node* head){
    int l =0;
    Node* temp= head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

Node* k_append(Node* &head, int k){

    Node* newhead;
    Node* newtail;
    Node* tail =  head;

    int l= length(head);
    k=k%l;
    int count = 1;

    while(tail->next!=NULL){

        if(count == l-k){
            newtail = tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }

    //link the list 
    newtail->next = NULL;
    tail->next = head;
    
    head = newhead;
    return head;
}

//print list 
void printlist(Node *head){
    Node *temp = head;
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


int main(){
    Node* first = NULL;
    
    addLast(first, 1);
    addLast(first, 2);
    addLast(first, 3);
    addLast(first, 4);
    addLast(first, 5);
    addLast(first, 6);

    
    printlist(first);

    int k = 3;

    k_append(first, k);

    printlist(first);
    

    
    return 0 ;
}