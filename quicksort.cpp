#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int st,int end)
{
    int idx=st-1;
    int pivot=arr[end];
    for(int i=st;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr,int st,int end)
{
    if(st<end)
    {
        int pivIdx=partition(arr,st,end);
        quicksort(arr,st,pivIdx-1);
        quicksort(arr,pivIdx+1,end);
    }
}
int main()
{
    vector<int> arr={1,5,3,6,2,4};
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}