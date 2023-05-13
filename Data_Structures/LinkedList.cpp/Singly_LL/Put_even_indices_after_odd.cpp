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

 Node* oddEvenList(Node* head) {

        if(head==NULL){
            return NULL;
        }
        Node* odd = head;
        Node* even = head->next;
        Node* evenstart = even;

        while(odd->next != NULL && even->next != NULL){

            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        
        odd->next = evenstart;

        // if(odd->next!=NULL){
        //     even->next = -1;
        // }

        return head;
    }

int main(){
    Node* first = NULL;

    Node* second = NULL;
    
    addLast(first, 1);
    addLast(first, 2);
    addLast(first, 3);
    addLast(first, 4);
    addLast(first, 5);
    
    printlist(first);

    oddEvenList(first);

    printlist(first);

    
    return 0 ;
}