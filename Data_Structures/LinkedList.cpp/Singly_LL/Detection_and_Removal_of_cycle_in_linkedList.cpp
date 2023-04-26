#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void addnode(node* &head, int val){
    node* newnode= new node(val);
    if(head==NULL){
        head= newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}


//make given list a cycle list at given position
void makeCycle(node* &head , int pos){
    node* temp=head;
    node* newnode;
    int count=1;
    while(temp->next != NULL){
        if(count == pos){
            newnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = newnode;
}

//detect is the list is cycled or not
// we can detect this by FLOYED's Algorithem i.e. Hare and Tortoise algorithem 

node* detectCycle(node* &head){

    if(head==NULL){
        return NULL;
    }
    node* fast = head;
    node* slow = head;

    while(fast!=NULL  && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return slow;
        }
    }
    return NULL; 
}

//get the starting node to the loop / cycle
node* getstartingNode(node* head){
    if(head==NULL){
      return NULL;
    }
    node* intersection = detectCycle(head); //this will give the intersection point 
    node* slow=head;  // initialize slow again to head to traverse the ll

    while(slow!=intersection){  //traverse one step both the pointer till both meet on the same node here intersection will start traversing from the intersection point
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}


//Remove cycle in the lsit 
void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;
    while(slow->next != fast->next){
        slow= slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}




void print(node* head){
    if(head == NULL){
        cout<<"empty"<<endl;
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    addnode(head,10);
    addnode(head,20);
    addnode(head,30);
    addnode(head,40);
    addnode(head,50);
    makeCycle(head,4);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    // print(head);
    node* loop = getstartingNode(head);
    cout<<"starting at "<<loop->data<<endl;
}