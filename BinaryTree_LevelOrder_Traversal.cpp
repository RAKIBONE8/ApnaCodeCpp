#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};

void levelOrder(Node* root)
{
    if(root == NULL)
    {
        cout<<"empty tree"<<endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        if(q.front() != NULL)
        {
            cout<<q.front()->val<<" ";
        }
        else
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
            continue;
        }

        if(q.front()->left != NULL)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right != NULL)
        {
            q.push(q.front()->right);
        }
        q.pop();
    }

}

int main()
{
    Node* root = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    Node *g = new Node(70);

    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    levelOrder(root);

    return 0;
}