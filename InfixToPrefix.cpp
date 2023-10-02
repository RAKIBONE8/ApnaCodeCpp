#include<bits\stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string s)
{
    stack<int> st;
    string res;
    reverse(s.begin(),s.end());

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
        {
            res+=s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(st.top()!=')')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(!st.empty() && prec(s[i])<prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }

    reverse(res.begin(),res.end());

    return res;

    
}

int main ()
{
   cout<<infixToPrefix("(a-b/c)*(a/k-l)");
}

/*
Same Algo. like infix to postfix(after writing the code change '(' as ')' and viseversa.).## Only Add two steps with it.
1. reverse the string before trevarsal.
2. reverse before return.
*/