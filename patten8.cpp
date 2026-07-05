#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
}