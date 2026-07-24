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
class Link
{
    Node *first;
    public:
    Link()
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
    int insertafter(int x,int d)
    {
        if(first==NULL)
        {
            cout<<"dcjsb";
        }
        else{
            Node *temp=first;
            while(temp!=NULL&&temp->data!=x)
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
    int insertbefore(int x,int d)
    {
        if(first==NULL)
        {
            cout<<"dcjsb";
        }
        else{
            Node *temp=first;
            while(temp!=NULL && temp->link->data!=x)
            {
                temp=temp->link;
            }
            if(temp!=NULL)
            {
                Node *nn=new Node(d);
                nn->link=temp->link;
                temp->link=nn;
            }
        }
    }
    int Delete(int x)
    {
        if(first==NULL)
        {
            cout<<"dcjsb";
        }
        else{
            Node *temp=first;
            while(temp!=NULL && temp->link->data!=x)
            {
                temp=temp->link;
            }
            if(temp!=NULL)
            {
                temp->link=temp->link->link;
            }
            return 1;
            delete temp;
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
    Link l;
    int n;
    int data;
    cout<<"Enter how much node you want to create:";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data for node:";
        cin>>data;
        l.insert(data);
    }
    l.printl();
    int d;
    int x;
    cout<<"Enter the data for node which you want to after store the next data:";
    cin>>x;
    cout<<"Enter the new data";
    cin>>d;
    l.insertafter(x,d);
    int b;
    cout<<"Enter the data for node which you want to before store the next data:";
    cin>>b;
    cout<<"Enter the new data";
    cin>>d;
    l.insertbefore(b,d);
    l.printl();
    l.Delete(d);
    l.printl();
}