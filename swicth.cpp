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
    int swap(int x,int y)
    {
        if(first==NULL)
            cout<<" ibcskcb ";
        else
        {
            Node *temp1 = first;
            Node *temp2 = first;
            while(temp1 != NULL && temp1->link->data != x)
            {
                temp1=temp1->link;
            }
            while(temp2 != NULL && temp2->link->data != y)
            {
                temp2=temp2->link;
            }
            if(temp1!=NULL && temp2 != NULL)
            {
                temp2->link->link=temp1->link;
                temp1->link=temp2->link;
                temp2->link=NULL;
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
    swap(30,40);
    printList(); 
}