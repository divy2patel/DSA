#include <iostream>
using namespace std;

void f(int n,int sum)
{
    if(n<0)
    {
        cout<<sum;
    }
    else
    {
        sum=sum+n;
        f(n-1,sum);
    }
}

int main()
{
    int n;
    int sum=0;
    cout<<"enter the n:";
    cin>>n;
    f(n,sum);
}