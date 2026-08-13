#include<iostream>
#include<stack>
using namespace std;

string convertion(string s)
{
    stack<string> st;
    string t1,t2,con;
    int n=s.length();
    int i=0;
    while(i<n)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
        {
            st.push(string(1, s[i]));
        }
        else
        {
            t1=st.top();
            st.pop();
            t2=st.top();
            st.pop();
            con='('+t2+s[i]+t1+')';
            st.push(con);
        }
        i++;
    }
    return st.top();
}
int main()
{
    string s="ab-cd+e*/";
    s=convertion(s);
    cout<<s;
}