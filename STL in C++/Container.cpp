#include <bits/stdc++.h>

using namespace std;

int main()
{
    /* pair
     // pair =  store variable in pairs {1,2}, {3,4}
     // to access the element use p.first   p.second

     pair<int, int> p = {1, 2};
     cout << p.first << " " << p.second << endl;

     // nested pair
     pair<int, pair<int, int>> s = {1, {6, 7}};
     cout << s.first << " " << s.second.first << "  " << s.second.second << endl;

     // array of pair
     pair<int, int> arr[] = {{10, 20}, {30, 40}};

     cout << arr[0].first << endl;
     cout << arr[1].second << endl;
 */

    /*  vector

    // vector=dynamic size array
    vector<int> v;

    // push_back and emplace_back are same both store element in the vecotr from the back the only diff is mentioned below
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // vector of pair
    vector<pair<int, int>> p;

    // in the push_back we have to write the pair in the brackets but in
    // case of the emplace_back we don't have to mention the pair with the brackets it itself do it for us

    p.push_back({0, 10});
    p.emplace_back(20, 10);

    // vector with given size and have mentioned initial value by default
    vector<int> s(5, 100);

    // vector with mention size only
    vector<int> a(10);

    // have to make a copy of the vector i.e d is the copy container of the vector s
    vector<int> d(s);

    // access vector array elements
    cout << "vector a elenet " << a[1] << endl;
    cout << "vector s elenet " << s.at(2) << endl;

    // Elements in a vector can be accessed using index or iterator
    // Iterators point to the memory location of an element in the vector
    // Different types of iterators include begin, end, reverse begin, and reverse end

    vector<int>::iterator it = v.begin();
    // it++;
    cout << *it << " element of the vector v" << endl;

    // iterator end will point to the the somewhere from the last element of the vector if you want to go to the last element than you have to make it-- 5
    vector<int>::iterator i = v.end();
    i--;
    cout << *i << " end iterator of the vector v" << endl;

    // vector<int>::iterator i = v.rend();

    // vector<int>::iterator i = v.rbegin();

    // lopping through vector
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // for each loop '
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // deletion in the vector
    // delete one element by giving the position of the element through the iterator
    v.erase(v.begin() + 2);

    // delete element in the range or multiple element give start and end address here start included and end not included
    v.erase(v.begin() + 1, v.begin() + 3);

    // insert function in the vector
    vector<int> k(4, 100);

    // this insert function insert the element in the vector and increase t he size of the vector
    k.insert(k.begin(), 300);

    // multiple insert in the vector (position,no. of element, value of the element)
    k.insert(k.begin() + 1, 4, 400);

    // size, clear,swap,pop_back
    k.size();  //return the size of the vector means no. of element present
    k.clear(); // erase all the element of the vector
    k.empty(); //vector has element or not if have thn return false and not have thn return true

    // swap will swap two vectors
    // pop_back(); //delete the element from the back of the vector
*/

    /* list
       //   same as vector
      //   dynamic in nature and only difference is it has front operations also menas we can add or delete the element in the front of the list
     //rest all the function are same  size,erase,clear,insert,swap,begin,rbegine,end,rend
      list<int> ls;
      ls.push_back(10);
      ls.push_front(20);

      ls.emplace_back(30);
      ls.emplace_front(40);

  */

    /*dequeue
    //similar to list

    deque<int>d;

    //  resat all the function are same
     // size,clear,erase,begin,end,rbegin,rend,swap,insert
     d.push_back(10);
     d.push_front(20);
     d.emplace_back(30);
     d.emplace_front(40);
     d.pop_back();
     d.pop_front();

     d.back();
     d.front();
 */

    /* Stack
    // Its a LIFO operation datatype

       stack<int>s;
       s.push(2);
       s.push(3);
       s.push(1);
       s.push(7);

       s.pop();
       s.top(); //s[1] is invalid to access the element we have to use top
       s.size();
       s.empty();
    */

    /* Queue
    //  its a FIFO operation based datatytpe

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    cout << q.back() << endl;

    q.back() += 5; // add 5 in the element 4 so it becomes 9

    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    // rest all the operation are same
*/

    /* priority_queue
    //    the largest value elkement will stayed at the top of the queue
    // its similar to the queue but

    priority_queue<int> pq; // max heap
    pq.push(2);
    pq.push(29);
    pq.push(4);
    pq.emplace(5);
    cout << pq.top() << endl;
    pq.pop();


    // if we want to store minimum element at the top of the queue we do it by min heap
    priority_queue<int, vector<int>, greater<int>> qp; //min heap
    qp.push(5);
    qp.push(2);
    qp.push(10);
    qp.pop();
    cout << qp.top() << endl;

    // rest all the operation are same
*/

    /*Set
    // it store the element in the sorted order and only store unique element
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.emplace(4);

    auto i = s.find(5); // it return the itreator of the element 5

    auto j =s.find(3); // if the element is not present in the set than it return the one above the address of the end element of the set 

    s.erase(5); //take log n time 

    int count = s.count(2); //return the count of the element present in the  set 
    */

   /*Map*/
    // Map container in C++ stores unique keys in sorted order
    // Map container stores data in key-value pairs
    // Keys must be unique, but values can be duplicated
    // Keys can be of any data type, and values can be of any data type
    // Map can be accessed using iterators
    // Multi-map is similar to map but allows duplicate keys

    map<int,int>m ;
    
    
    return 0;
}