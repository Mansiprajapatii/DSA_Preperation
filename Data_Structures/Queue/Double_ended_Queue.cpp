#include <bits/stdc++.h> 
class Deque
{
public:
   
   int *arr;
   int front;
   int rear;
   int n;

    Deque(int N)
    {
       n= N;
       arr = new int[n];
       front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //if queue is full 
        if(isFull()){
            return false;
        }
        else if(front==-1){
            front = rear =0;
        }
        else if( front==0 && rear!=n-1){
            front = n-1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if(isFull()){
           return false;
       }
       else if(front==-1){
           front=rear=0;
       }
       else if( rear==n-1 && front !=0){
           rear=0;
       }
       else{
           rear++;
       }
       arr[rear]=x;
       return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
       //queue is empty or not 
        if(front == -1){
            return -1;
        }
        
        //remove element
        int ans = arr[front];
        arr[front] = -1;

        //single element hai 
        if(front == rear){
            front = rear = -1;
        } 
        else if( front == n-1){ //circular ghumaoo
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        //queue is empty or not 
        if(front == -1){
            return -1;
        }
        
        //remove element
        int ans = arr[rear];
        arr[rear] = -1;

        //single element hai 
        if(front == rear){
            front = rear = -1;
        } 
        else if(rear==0){ //circular ghumaoo
            rear=n-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
       if(isEmpty()){
           return -1;
       }
       return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
           return -1;
       }
       return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
       if(front==-1){
           return true;
       }
       else{
           return false;
       }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
       if( (front==0 && rear == n-1) || (front!=0 && rear==(front-1)%(n-1)) ){
           return true;
       }
       else{
           return false;
       }
    }
};