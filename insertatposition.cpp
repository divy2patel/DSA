/*
STDIN   Function
-----   --------
3       n = 3
16      llist = 16->13->7
13
7
1       data = 1
2       position = 2
*/

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *link;
    Node(int d)
    {
        data=d;
        link=NULL;
    }
};

class Linklist
{
    Node *first;
    public:
    Linklist()
    {
        first=NULL;
    }
    int insert(int d)
    {
        if(first==NULL)
        {
            first=new Node(d);
        }
        else{
            Node *temp=first;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            Node *n1=new Node(d);
            temp->link=n1;
            return 1;
        }
    }

    int insertatposi(int x,int d)
    {
        Node *temp=first;
        int c=0;
        int datanew;
        while(temp->link!=NULL&&c!=x)
        {
            c++;
            datanew=temp->data;
            temp=temp->link;
        }
        if(first==NULL)
        {
            cout<<"dcjsb";
        }
        else{
            Node *temp=first;
            while(temp!=NULL&&temp->data!=datanew)
            {
                temp=temp->link;
            }
            if(temp!=NULL)
            {
                Node *nn=new Node(d);
                nn->link=temp->link;
                temp->link=nn;
                return 1;
            }
        }
    }
    int printl()
    {
        Node *temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<"\n";
    }
};
int main()
{
    Linklist l;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        l.insert(data);
    }
    int newdata,position;
    cin>>newdata>>position;
    l.insertatposi(position,newdata);
    l.printl();
}