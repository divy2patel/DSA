#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    print1(n);
}