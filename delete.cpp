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
    int Delete(int x)
    {
        if(first==NULL)
            cout<<" ibcskcb ";
        else
        {
            Node *temp = first;
            while(temp != NULL && temp->link->data != x)
            {
                temp=temp->link;
            }
            if(temp!=NULL)
            {
                temp->link=temp->link->link;
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
    n3->link = n4;

    printList();
    Delete(30);
    printList(); 
}