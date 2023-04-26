//Node - block of memory with two parts [data | next node address]
// Each node contains the link to the next node and some data variables.

#include<iostream>
using namespace std;

 //creating node class or list
class node{
    public:       //by default it is private so make it public              
    int data;     //data/value part of the node 
    node* next;  //pointer to next node 

    node(int val){ //constructor to assign value
        data=val;
        next = NULL;
    }
};

// add node at first
void addFirst(node* &head, int val){
    node* n = new node(val);   //object 
    if(head==NULL){
        head = n;
        return;
    }
   n->next = head;
   head = n;
}


// add node at last 
void addLast(node* &head , int val){
    node* newnode = new node(val);
    // check if list is empty or not 
    if(head==NULL){
        head = newnode;
        return;
    }

    node  *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}


// add node by position
void addBYposition(int val , node* &head , int pos ){
    node* nn = new node(val);

    if(pos==0){
       nn->next = head;
       head = nn;
       return;
    }
    node* pre = head;
    for(int i=0; i<pos-1; i++){
        pre = pre->next;
    }
    nn->next = pre->next;
    pre->next = nn;
}


//delete node at first
void deleteFirst(node* &head){
    if(head==NULL){
        cout<<"list is empty no element to delete"<<endl;
        return;
    }
    head = head->next;
}


//delete at last 
void deleteLast(node* &head){
    node *seclastnode = head;
    node *lastnode = head->next;
   
   if( head->next == NULL){
       head= NULL;
       cout<<"delete"<<endl;
   }
   while(lastnode->next != NULL){
      lastnode =  lastnode->next;
      seclastnode = seclastnode->next;
   }
   seclastnode->next = NULL;

}


// delete by position (all types of delete  first or last or bypositon are come into this function)
void deletebyPosition(node* &head , int pos){
    if(pos==0){
        head = head->next;
        return;
    }
    node* pre = head;
    for(int i=0; i<pos-1; i++){
        pre = pre->next;
    }
    pre->next = pre->next->next;
}



// print list 
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


int main(){
    node* head = NULL;
    
    // addLast(head, 5);
    addFirst(head,1);
    // addLast(head,15);
    // addBYposition(20,head,3);
    printlist(head);
    // deleteFirst(head);
    // deleteLast(head);
    // deletebyPosition(head,0);
    // printlist(head);

    return 0 ;
}