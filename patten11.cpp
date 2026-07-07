#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        int s=1;
        if(i%2==0) s=1;
        else s=0;
        for(int j=0;j<i+1;j++)
        {
            cout<<s;
            s=1-s;
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