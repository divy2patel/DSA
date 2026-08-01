#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *perv;

    Node(int d)
    {
        data=d;
        next=NULL;
        perv=NULL;
    }
};
class linklist
{
    Node *first;
    public:
    linklist()
    {
        first=NULL;
    }
    void insert(int d)
    {
        if(first==NULL)
        {
            first=new Node(d);
        }
        else
        {
            Node *temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *nn=new Node(d);
            temp->next=nn;
            nn->perv=temp;
        }
    }
    void printl()
    {
        Node *temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main()
{
    linklist l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    l.printl();
}
