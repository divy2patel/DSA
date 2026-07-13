#include<iostream>
using namespace std;
template <class T>
class stack
{
    T a[50];
    int ptr;
    public:
    stack()
    {
        ptr=-1;
    }
    T push(T x){
        if(ptr<=10)
        {
            ptr++;
            a[ptr]=x;
            return 1;
        }
        else{
            return-1;
        }
    }
    T pop()
    {
        if(ptr>=0 && ptr<=10)
        {
            T r = a[ptr];
            ptr--;
            return r;
        }
        else{
            return -1;
        }
    }
    void top();
};
int main()
{
    stack <int>s;
    s.push(12);
    s.push(21);
    cout<<s.pop()<<endl;
    s.push(5);
}