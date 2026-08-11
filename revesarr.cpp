#include<iostream>
using namespace std;

int f(int l,int r,int arr[])
{
    if(l>=r)
    {
        return 1;
    }
    else
    {
        swap(arr[l],arr[r]);
        f(l+1,r-1,arr);
        return 1;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    f(0,4,arr);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}