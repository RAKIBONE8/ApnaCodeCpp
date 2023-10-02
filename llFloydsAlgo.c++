#include<iostream>
using namespace std;

class node
{
public:
    
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }

};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = n;

}

void MakeCycle(node* &head,int pos)
{
    node* temp = head;
    node* StartNode;

    int count = 1;
    while(temp->next != NULL)
    {
        if(count == pos)
        {
            StartNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = StartNode;
}

void RemoveCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do
    {
        slow= slow->next;
        fast= fast->next->next;
    } while (fast!=slow);
    
    fast = head;
    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;

}

bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;;
}

int main ()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);

    display(head);
    cout<<detectCycle(head)<<endl;

    MakeCycle(head,3);
    cout<<detectCycle(head)<<endl;

    RemoveCycle(head);
    cout<<detectCycle(head)<<endl;

    display(head);

}