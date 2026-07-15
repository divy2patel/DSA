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
Node *first=NULL;
    int Insert_After(int x,int d)
    {
        if(first==NULL)
            cout<<" ibcskcb ";
        else
        {
            Node *temp = first;
            while(temp != NULL && temp->data != x)
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
void printList()
{
    Node *temp = first;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
int main()
{
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    first = n1;
    n1->link = n2;
    n2->link = n3;

    printList();
    Insert_After(20, 40);
    printList(); 
}