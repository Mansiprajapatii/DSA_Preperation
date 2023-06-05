#include<iostream>
#include<queue>

using namespace std;

class Queue{
    public:

    int *arr;
    int front; 
    int rear;
    int size;

    Queue(){
        size =100001;
        arr= new int[size];
        front =0;
        rear=0;
    }

    // isEmpty function 

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    //enqueue = insertion 
    void enqueue(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    //dequeue = pop 
    void dequeue(){
        if(front==rear){
            return;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;

            //list front the front side get empty means space is created we can put element in that space 
            if(front == rear){
                front =0;
                rear=0;
            }
            // return ans;
        }
    }

    //front element 
    int Front(){
        if(front== rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};

int main(){

    Queue a;

    a.enqueue(1);
     a.enqueue(2);
      a.enqueue(3);
       a.enqueue(4);
        a.enqueue(5);

    cout<<a.Front()<<endl;
    a.dequeue();
     cout<<a.Front()<<endl;




    return 0;
}