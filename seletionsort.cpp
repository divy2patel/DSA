#include<iostream>
using namespace std;
void seletionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int seidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[seidx])
            {
                seidx=j;
            }
        }    

        swap(a[i],a[seidx]);
    }
}
int main()
{
    int n=5;
    int a[] = {4,2,1,5,3};
    seletionsort(a,n);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}