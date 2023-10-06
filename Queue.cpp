// Linked list implimentation
/*
#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

class queue
{
    node* front;
    node* back;

    public:

    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node* n = new node(x);
        if(front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if(front == NULL)
        {
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if(front == NULL)
        {
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if(front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main ()
{
    queue q;

   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);

   while(!q.empty())
   {
      cout<<q.peek()<<endl;
      q.pop();
   }



}
*/

#include<iostream>
#include<stack>
using namespace std;

class queue
{
   stack<int>st1;
   stack<int>st2;

   public:

   void push(int x)
   {
       st1.push(x);
   }
   void pop()
   {
       if(st1.empty() && st2.empty())
       {
           cout<<"Empty queue"<<endl;
           return;
       }
       if(st2.empty())
       {
           while(!st1.empty())
           {
             st2.push(st1.top());
             st1.pop();
           }
       }
       st2.pop();
   }
   int top()
   {
       if(st1.empty() && st2.empty())
       {
           cout<<"empty queue"<<endl;
           return -1;
       }
       if(st2.empty())
       {
           while(!st1.empty())
           {
             st2.push(st1.top());
             st1.pop();
           }
       }
       return st2.top();
   }
   bool empty()
   {
        if(st1.empty() && st2.empty())
        {
          return true;
        }
        return false;
   }
};

int main ()
{
   queue q;

   q.push(1);
   q.push(2);
   q.push(3);

   cout << "Front of queue: " << q.top() << endl;

   q.pop();
   cout << "Front of queue after pop: " << q.top() << endl;

   q.pop();
   q.pop();
  
    
}