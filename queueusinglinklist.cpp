#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }

};

class queue
{
    Node *head;
    Node *tail;

    public:
    queue()
    {
        head=tail=NULL;
    }
    
    void push(int val)
    {
        Node* nn=new Node(val);

        if(empty())
        {
            head=tail=nn;
        }
        else{
            tail->next=nn;
            tail=nn;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"LL is empty";    
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front()
    {
        if(empty())
        {
            cout<<"LL is empty";
            return -1;    
        }
        return head->data;
    }
    bool empty()
    {
        return head==NULL;
    }    
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}