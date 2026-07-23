#include<iostream>
using namespace std;

class Node
{
public:
    int coef;
    int expo;
    Node *link;

    Node(int c, int e)
    {
        coef = c;
        expo = e;
        link = NULL;
    }
};

class Linklist
{
    public:
    Node *first = NULL;

    void Insert(int c, int e)
    {
        Node *nn = new Node(c, e);
        if (first == NULL)
        {
            first = nn;
            return;
        }
        Node *temp = first;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = nn;
    }

    void compere(Node *t1, Node *t2, Linklist &t3)
    {
        while (t1 != NULL && t2 != NULL)
        {
            if (t1->expo == t2->expo)
            {
                t3.Insert(t1->coef + t2->coef, t1->expo);
                t1 = t1->link;
                t2 = t2->link;
            }
            else if (t1->expo > t2->expo)
            {
                t3.Insert(t1->coef, t1->expo);
                t1 = t1->link;
            }
            else
            {
                t3.Insert(t2->coef, t2->expo);
                t2 = t2->link;
            }
        }
        while (t1 != NULL) { t3.Insert(t1->coef, t1->expo); t1 = t1->link; }
        while (t2 != NULL) { t3.Insert(t2->coef, t2->expo); t2 = t2->link; }
    }

    void printList()
    {
        Node *temp = first;
        while (temp != NULL)
        {
            cout << temp->coef << "x^" << temp->expo << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main()
{
    Linklist p1, p2, p3;
    p1.Insert(3, 2);
    p1.Insert(5, 1);
    p2.Insert(4, 2);
    p2.Insert(2, 0);

    p3.compere(p1.first, p2.first, p3);
    p3.printList(); // 7x^2 5x^1 2x^0
    return 0;
}