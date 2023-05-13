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

Node *reverse (Node* &head ){   //node reverse(node *& head)   //node datatype

    Node *pre = NULL;
    Node *cur = head;
    Node *next = NULL;

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

void insertAtTail(Node* &head, Node* &tail, int val){
    
    Node* temp = new Node(val);
    
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    else{
    
    tail->next = temp;
    tail = temp;
   }
}

Node* add(struct Node* first, struct Node* second){
    
    int carry=0; 
    Node* anshead=NULL;
    Node* anstail = NULL;
    
    while(first!=NULL || second!= NULL || carry !=0 ){
        int val1=0;
        
        if(first!=NULL) 
          val1 = first->data;
        
        int val2 =0;
          
        if(second!=NULL) 
          val2 = second->data;
          
        int sum = carry + val1 + val2;
        int digit = sum%10;
        
        insertAtTail(anshead,anstail,digit);
        
        carry = sum/10;
        
        if(first!=NULL){
            first=first->next;
        }
        
         if(second!=NULL){
            second= second->next;
        }
    }
    return anshead; 
}

Node* addTwoLists( Node* first, Node* second)
    {  
        
        //step 1 revserse lists
       first = reverse(first);
       second = reverse(second);
       
       // step 2 add
       
       Node* ans = add(first,second);
       
       //step3 revserse ans 
       ans = reverse(ans);
       
       return ans;
       
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
    addLast(first, 9);
    addLast(first, 0);
    addLast(second, 2);
    addLast(second, 5);
    
    printlist(first);
    
    printlist(second);
    
    printlist(addTwoLists(first,second));

    
    return 0 ;
}