#include<iostream>
using namespace std;
struct poly
{
    int coef;
    int expo;
};
int multi(poly p1[],poly p2[],poly p3[],int l1,int l2)
{
    int i=0,j=0,k=0;
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            p3[k].coef = p1[i].coef * p2[j].coef;
            p3[k].expo = p1[i].expo + p2[j].expo;
            k++; 
        }
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            if(p3[i].expo == p3[j].expo)
            {
                p3[i].coef += p3[j].coef;
                for(int x = j; x < k - 1; x++)
                    p3[x] = p3[x + 1];
                k--;
                j--;
            }
        }
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

    multi(p1,p2,p3,n,m);

}