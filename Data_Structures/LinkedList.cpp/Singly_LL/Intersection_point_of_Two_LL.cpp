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

int length(node* head){
    int len=0;
    node* temp = head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int intersection(node* head1, node* head2){
    int len1 = length(head1);
    int len2 = length(head2);

    int diff = 0;

    node* ptr1;    //for long list
    node* ptr2;   //for short list

    if(len1>len2){
        diff = len1-len2;
        ptr1 = head1;
        ptr2= head2;
    }
    else{
        diff=len2-len1;
        ptr1=head2;
        ptr2=head1;
    }

    while(diff){         //for step 4 to travere the pointer of long list to the same length of the 2nd list 
        ptr1=ptr1->next;

        if(ptr1 == NULL){   // if the list have no intersection point 
            return -1;
        }

        diff--;
    }

    while(ptr1 != NULL && ptr2!= NULL){   // to traverse both the pointer to check that they are pointing to the same node or not   

        if(ptr1==ptr2){
            return ptr1->data;
        }

        ptr1= ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
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
    
    addLast(head, 1);
    addLast(head, 2);
    
    // printlist(head);

    return 0 ;
}