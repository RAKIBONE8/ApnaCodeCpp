/*
#include<iostream>
#include<string>
using namespace std;

#define n 100
class stack
{
   string* arr;
   int top;

public:

   stack()
   {
      arr = new string [n];
      top = -1;
   }

   void push(string x)
   {
       if(top == n-1)
       {
         cout<<"Stack overflow"<<endl;
         return;
       }

      top++;
      arr[top] = x;
   }
   string Top()
   {
       if(top == -1)
       {
         cout<<"Stack is Empty"<<endl;
         return "";
       }
       return arr[top];
   }
   void pop()
   {
       if(top == -1)
       {
          cout<<"No elements are Available to pop"<<endl;
          return;
       }
       top--;
   }
   bool empty()
   {
     return top ==-1;
   }
    
       
};
void reverseSentence(string s)
{
    stack st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.Top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main ()
{
    stack st;
    string s = "Hey How are you!";
    reverseSentence(s);
}
*/
#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string>st;
    for(int i = 0;i<s.length();i++)
    {
        string word = "";
        while(s[i]!=' ' && i<s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
    cout<<endl;
}

int main ()
{
    string s = "Hero the am I Dead Even";
    reverseSentence(s);
}