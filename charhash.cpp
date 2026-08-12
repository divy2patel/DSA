#include<iostream>
using namespace std;

int count(char n,char arr[],int size)
{
    int hash[26]={0};
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
            hash[n-'a']++;
    }
    return hash[n-'a']; 
}

int main()
{
    char n;
    cin>>n;
    char arr[5]={'a','b','c','d','c'};
    int c=count(n,arr,5);
    cout<<c;
}
