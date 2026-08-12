#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,1,2};
    map<int,int> mpp;
    for(int i=0;i<5;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
}