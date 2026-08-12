#include<iostream>
using namespace std;

int count(int n,int arr[],int max,int size)
{
    int hash[max]={0};
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
            hash[n]++;
    }
    return hash[n]; 
}

int main()
{
    int n;
    cin>>n;
    int arr[5]={1,2,3,2,1};
    int c=count(n,arr,12,5);
    cout<<c;
}