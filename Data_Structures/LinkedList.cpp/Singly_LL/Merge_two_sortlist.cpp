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

Node* solve(Node* first, Node* second){

    // if only one element in the list 
    if(first->next == NULL){
        first->next = second;
        return first;
    }

    Node* pre = first;
    Node* cur = pre->next;
    Node* temp = second;
    Node* tempnext = temp->next;

    while(cur!=NULL && temp!= NULL){
        if((temp->data >= pre->data) && (temp->data <= cur->data) )
        {
           pre->next = temp;
           tempnext = temp->next;
           temp->next = cur;

           //update pointers 
           pre = temp;
           temp  = tempnext;

        }
        else{

            pre = cur;
            cur = cur->next;

            if(cur == NULL){
                pre->next = temp;
                return first;
            }
        }

    }

    return first;
}


Node* sortTwoLists(Node* first, Node* second)
{
   if(first == NULL){
       return second;
   }

   if(second == NULL){
       return first;
   }

   if(first->data <= second -> data ){
      return solve(first,second);
   }
   else{
      return solve(second,first);
   }

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

    Node* second = NULL;
    
    addLast(first, 1);
    addLast(first, 3);
    addLast(first, 5);
    
    printlist(first);

    addLast(second, 2);
    addLast(second, 4);
    addLast(second, 5);

    printlist(second);

    printlist(sortTwoLists(first,second));

    return 0 ;
}