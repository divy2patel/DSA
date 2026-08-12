#include<iostream>
using namespace std;

int count(int n,int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(n==arr[i])
            count++;
    }
    return count;
}

int main()
{
    int n=1;
    int arr[5]={1,2,3,4,1};
    int c=count(n,arr,5);
    cout<<c;
}