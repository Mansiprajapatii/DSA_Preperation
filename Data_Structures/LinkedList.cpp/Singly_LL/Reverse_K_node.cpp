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

//reverse K nodes 
node *reverse_K(node * &head , int k){
    node* pre = NULL;
    node* cur = head;
    node* next ;
    int count=0;
    while(cur!=NULL && count<k){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur= next;

        count++;
    }
    if(next!=NULL){
        head->next = reverse_K(next, k);
    }
    return pre ;

}

void print(node *head){
   
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
     node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head = NULL;
    int n,x,k;
    cin>>n;
    for(int i=0; i<n ; i++){
        cin>>x;
        addNode(head,x);
    }
    print(head);

    cout<<"Enter the K : ";
    cin>>k;

   head = reverse_K(head,k);
    print(head);

}