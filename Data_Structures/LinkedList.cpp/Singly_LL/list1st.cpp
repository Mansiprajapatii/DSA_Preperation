#include<iostream>
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

void AtStart(Node* &head, int val){
    Node* newnode = new Node(val);

    if(head==NULL){
      head=  newnode;
        return ;
    }
    newnode->next = head;
    head=newnode;
}

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

void AtPosition(Node* &head, int val , int pos){
    Node* newnode = new Node(val);
    Node* temp = head;

    if(pos==0){
        newnode->next = head;
        head = newnode;
        return;
    }
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next = newnode;
    
}
 
void deleteFirst(Node* &head){
    //base case no node there 
    if(head==NULL){
        cout<<"nothing to delete"<<endl;
        return;
    }
    head = head->next;
}

void deleteLast(Node* &head){
    if(head->next == NULL){
        head=NULL;
        return;
    }
     Node* seclastptr = head;
    Node* lastptr = head->next;

    while(lastptr->next != NULL){
        seclastptr=seclastptr->next;
        lastptr= lastptr->next;
    }
    seclastptr->next = NULL;
}

void deleteByPosition(Node* &head, int pos){
    Node* pre = head;
    if(pos==0){
        head=head->next;
        return ;
    }
    for(int i=0; i<pos-1; i++){
        pre=pre->next;
    }
    pre->next = pre->next->next;
}

//make cycle in the LL 
 void makecycle(Node* &head, int pos){
    Node* temp = head;
    Node*  newhead ;

    int count=1;

    while(temp->next!=NULL){
        if(count==pos){
            newhead=temp;
        }
        temp=temp->next;
    }
    temp->next = newhead;
}

//detect cycle
// Node* detectCycle(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* slow=head;
//     Node* fast=head;

//     while(fast!=NULL && fast->next != NULL){
//         slow= slow->next;
//         fast=fast->next->next;

//         if(slow==fast){
//             return slow;
//         }
//     }
//     return NULL;
// }

Node* detectCycle(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast != NULL){
        slow= slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getstartingNode(Node* head){
    if(head==NULL){
      return NULL;
    }
    Node* intersection = detectCycle(head); //this will give the intersection point 
    Node* slow=head;  // initialize slow again to head to traverse the ll

    while(slow!=intersection){  //traverse one step both the pointer till both meet on the same node here intersection will start traversing from the intersection point
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

Node* find_middle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

//itrative method
Node * reverse(Node* &head){
    Node* pre=NULL; 
    Node* cur = head;
    Node* forward= NULL;

    //single node or no node empty list 
    if(head==NULL || head->next ==NULL){
        return head;
    }

    while(cur!=NULL){
        forward= cur->next;
        cur->next=pre;
        pre=cur;
        cur=forward;
    }

    head = pre;

}


bool isPalindrome(Node* head){
     if(head==NULL || head->next==NULL){
        return true;
     }

     Node* mid= find_middle(head);
     Node* temp = mid->next;
     mid->next = reverse(mid->next);

     Node* head1 = head;
     Node* head2 = mid->next;

     while(head2!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2= head2->next;
     }

     mid -> next = reverse(mid->next);

     return true;
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



//recursive method 
Node* reverseRecursive(Node* &head){

    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next=NULL;

    return newhead;
}

int main (){

    // Node* node1= new Node(0);
    Node* head = NULL;
    AtStart(head,10);
    AtLast(head,20);
     AtLast(head,30);
      AtLast(head,20);
       AtLast(head,10);
        // AtLast(head,60);

//     AtPosition(head,10,0);
// AtPosition(head,20,1);
// AtPosition(head,50,2);
// AtPosition(head,80,3);
    // printList(head);
// makecycle(head,2);
    // deleteFirst(head);ṇ
    // printList(head);

// if(detectCycle(head)){
//     cout<<"present"<<endl;
// }
// else{
//     cout<<"not"<<endl;
// }
    // deleteLast(head);
    // deleteByPosition(head, 2);
    //  printList(head);

    //  reverse(head);

    //  Node* newhead = reverseRecursive(  head);
    //  printList(newhead);

    // Node* startnode = getstartingNode(head);
    // cout<<"starting node present at "<<startnode->data<<endl;

    cout<<isPalindrome(head);
 
    return 0;
}