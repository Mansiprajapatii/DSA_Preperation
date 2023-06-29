#include <iostream>
#include <stack>

using namespace std;

// approach 1
/*class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

// complexity of pop function in this is O(n) in worst case
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topp = s2.top();
        s2.pop();
        return topp;
    }

    bool isEmpty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};
*/

// Approach 2
class queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {

        if (s1.empty())
        {
            cout << "empty " << endl;
            return -1;
        }

        // store  1 element
        int ele = s1.top();
        s1.pop();

        // base condition
        if (s1.empty())
        {
            return ele;
        }

        // recursively pop
        int item = pop();
        s1.push(ele);

        return item;
    }
};

int main()
{
    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}