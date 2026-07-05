#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1<<" ";
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