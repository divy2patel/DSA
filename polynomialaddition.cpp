#include<iostream>
using namespace std;
struct poly
{
    int coef;
    int expo;
};
int add(poly p1[],poly p2[],poly p3[],int l1,int l2)
{
    int i=0,j=0,k=0;
    while(i<l1&&j<l2)
    {
        if(p1[i].expo==p2[j].expo)
        {
            p3[k].coef=p1[i].coef+p2[j].coef;
            p3[k].expo=p1[i].expo;
            i++,j++,k++;
        }
        else if(p1[i].expo>p2[j].expo)
        {
            p3[k]=p1[i];
            i++,k++;
        }
        else
        {
            p3[k]=p2[j];
            j++,k++;
        }
    }
    while(j<l2)
    {
        p3[k]=p2[j];
        j++,k++;
    }
    while(i<l1)
    {
        p3[k]=p1[i];
        i++,k++;
    }
    for(int a=0;a<k;a++)
    cout << p3[a].coef << "x^" << p3[a].expo << "+";
}
int main()
{
    int n;
    cout<<"Enter the number of input value:";
    cin>>n;
    poly p1[n];
    for(int i=0;i<n;i++)
    {
        cin>>p1[i].coef;
        cin>>p1[i].expo;
    }
    int m;
    cout<<"Enter the number of input value:";
    cin>>m;
    poly p2[m];
    for(int i=0;i<m;i++)
    {
        cin>>p2[i].coef;
        cin>>p2[i].expo;
    }
    int maxSize = (n > m) ? n : m;
    poly p3[maxSize];

    add(p1,p2,p3,n,m);

}