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

// Approach one 
Node* SortList(Node *head)

{
    Node* temp =  head;
    Node* zeroCount=0;
    Node* oneCount=0;
    Node* twoCount=0;

    while(temp!=NULL){

        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data){
            twoCount++;
        }

        temp = temp->next;
    }

    temp = head;

    while(temp!=NULL){

        if(zeroCount!=0){
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount!=0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data =2;
            twoCount--;
        }

        temp = temp->next;
    }
    return head;

}


// apporoach 2 

void insertAtTail(Node* &tail, Node* cur){
    tail->next = cur;
    tail = cur;
}

Node* sortList(Node *head){
      
      Node* zerohead = new Node(-1);
      Node* zerotail = zerohead;
      Node* onehead = new Node(-1);
      Node* onetail = onehead;
      Node* twohead = new Node(-1);
      Node* twotail = twohead;

      Node* cur = head;

      while(cur!=NULL){
          int value = cur->data;

          if(value==0){
              insertAtTail(zerotail, cur);
          }
          else if(value==1){
              insertAtTail(onetail, cur);
          }
          else if(value == 2){
              insertAtTail(twotail, cur);
          }

          cur= cur->next;
      }

      //merge 

      if(onehead->next!=NULL){
          zerotail->next = onehead->next;
      }
      else{
          zerotail->next = twohead->next;
      }

      onetail->next = twohead->next;
      twotail->next = NULL;

      head= zerohead->next;

      delete zerohead;
      delete onehead;
      delete twohead;

      return head;



}

// print list 
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
    Node* head = NULL;
    
    addLast(head, 1);
    addLast(head, 0);
    addLast(head, 2);
    addLast(head, 1);
    addLast(head, 2);
    printlist(head);


    SortList(head);

    printlist(head);

    
    // printlist(head);

    return 0 ;
}