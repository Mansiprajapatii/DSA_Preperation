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


//function to search a node
void search(node *head, int key){
    node *temp = head;
    bool n = false;
    while(temp !=NULL){
        if(temp->data == key){
            n = true;
            break;
        }
        temp = temp->next;
    }
        if(n==true){
          cout<<"element found"<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
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
    int n,x,key;
    cin>>n;
    for(int i=0; i<n ; i++){
        cin>>x;
        addNode(head,x);
    }
    print(head);

    cout<<"Enter the key to find : ";
    cin>>key;
    search(head,key);

    
}