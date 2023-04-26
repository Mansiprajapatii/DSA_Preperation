#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};

void addNode(node* &head , int value){
    node* newnode = new node(value);
    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
       temp = temp->next;
    }
    temp->next = newnode;
}

//reverse the linkedlist         

 //itrative method 
node *reverList (node* &head ){   //node reverse(node *& head)   //node datatype

    node *pre = NULL;
    node *cur = head;
    node *next = NULL;

    //if one node or no node 
    if(head==NULL || head->next == NULL){
        return head;
    }
    while(cur!=NULL){
        next = cur->next ;
        cur->next = pre;
        pre= cur;
        cur= next;
    }
    head = pre;
    return pre;     
    // return *pre;    //when we take node datatype of funtion thn we have to return this
}


// reccursive method
node* reverse(node * &head){
    //base case
    if(head==NULL || head->next ==NULL){
        return  head;
    }
    node *newhead = reverse(head->next);
    node *headnext = head->next;
    headnext->next = head;
    head->next = NULL;
    return newhead;

}

//little changes to understand the recursive reverse function but this is same as above funtion 
node* reverselist(node* &head){
    // base condition
    if(head==NULL || head->next == NULL){
        return head;
    }
    node *newhead = reverselist(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}


void printnode(node *head){
    if(head==NULL){
        cout<<"empty"<<endl;
    }
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}

int main(){
    node *head = NULL;

    addNode(head, 10);
    addNode(head,20);
    addNode(head,30);
    addNode(head,40);
    printnode(head);
    reverList(head);
    printnode(head);
}