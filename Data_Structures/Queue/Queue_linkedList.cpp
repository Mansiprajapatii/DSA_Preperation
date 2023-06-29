#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
public:
    node *front;
    node *back;

    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {

        node *newnode = new node(val);

        // queue is empty
        if (front == NULL)
        {
            back = newnode;
            front = newnode;
        }
        // if queue is not empty
        back->next = newnode;
        back = newnode;
    }

    void pop()
    {

        if (front == NULL)
        {
            cout << "nothing to pop" << endl;
            return;
        }
        node *toPop = front;
        front = front->next;

        delete toPop;
    }

    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int Front()
    {

        if (front == NULL)
        {
            cout << "empty queue" << endl;
            return -1;
        }
        return front->data;
    }
};

int main()
{
    queue q;

    q.push(5);
    q.push(3);
    q.push(2);

    cout << q.Front() << endl;

    q.pop();

    cout << q.Front() << endl;

    return 0;
}