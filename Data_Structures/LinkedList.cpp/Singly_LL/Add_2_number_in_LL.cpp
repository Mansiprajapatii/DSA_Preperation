#include<bits/stdc++.h>
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



Node *addTwoNumbers(Node *num1, Node *num2)

{

    // Write your code here.

    Node* dummy = new Node();

    Node* temp = dummy;

    int carry = 0;

    while((num1 || num2) || carry){

        int sum = 0;

        if(num1){

            sum = sum + num1 -> data;

            num1 = num1 -> next;

        }

        if(num2){

            sum = sum + num2 -> data;

            num2 = num2 -> next;

        }

        sum = sum + carry;

        carry = sum/10;

        Node* node = new Node(sum%10);

        temp -> next = node;

        temp = temp -> next;

    }

    return dummy -> next;

}


int main(){
    Node* head = NULL;
    

    return 0;
}