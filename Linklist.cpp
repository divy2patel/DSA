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
int main()
    {
        Node *n1=new Node(2);
        Node *n2=new Node(4);
        n1->link=n2;
        cout<<n1->data;
    }