#include<iostream>
using namespace std;

class queue
{
    int front;
    int rear;
    int que[];
    public:
    queue()
    {
        front=rear=-1;
    }
    void enqueue(int n)
    {
        if(front==-1)
        {
            front++;
            que[++rear]=n;
        }
    }
    int dequeue()
    {
        int n=que[front++];
        return n;
    }
    int isFull()
    {
        if(rear>=front-1)
            return 0;
        else
            return 1;
    }
    int isEmpty()
    {
        if((front==-1) || (front>rear))
        return 1;
        else
        return 0;
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.dequeue();
    cout<<q.dequeue();
}