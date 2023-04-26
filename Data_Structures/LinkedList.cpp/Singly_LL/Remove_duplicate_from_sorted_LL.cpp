#include<iostream>
#include<unordered_map>
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

void AtLast(Node* &head, int val){
    Node* newnode = new Node(val);
    Node*temp = head;

    if(head==NULL){
        head = newnode;
        return ;
    }

    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=newnode;
}

//sorted list 
Node* removeDuplicate(Node* head){
    //base case when list is empty
    if(head==NULL){
        return NULL;
    }

    Node*cur=head;

    while(cur!=NULL && cur->next != NULL){
        //check 2 nodes are equal or not 
        if(cur->data == cur->next->data){
            Node* next_next = cur->next->next;
            Node* todelete= cur->next;
            //delete() function is used to delete the node form the memory
            delete(todelete);

            //point cur->next to next to next element 
            cur->next = next_next;

        }
        else{
            cur=cur->next;
        }
    }

    return head;
}

//remove duplicate from unsorted list 
Node* removeDup(Node* head){
    unordered_map<int,bool> visited;

    Node* temp = head;

    if(head==NULL){
        return head;
    }

    while( temp->next!=NULL){
        visited[temp->data] = true;
        if(visited[temp->next->data]==true){
            Node* next_next = temp->next->next;
            Node* todelete= temp->next;
            delete(todelete);
            temp->next = next_next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;

}








void printList(Node* head){

    Node *temp = head;

    if(temp==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main (){

    // Node* node1= new Node(0);
    Node* head = NULL;
    AtLast(head,1);
    AtLast(head,2);
     AtLast(head,2);
      AtLast(head,3);
       AtLast(head,3);
        AtLast(head,3);
         AtLast(head,4);

         printList(head);

        //  removeDuplicate(head);
        removeDup(head);
         printList(head);

   return 0;
}