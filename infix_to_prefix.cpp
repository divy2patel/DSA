#include<iostream>
#include<stack>
#include <algorithm>
#include <string>
using namespace std;

int preority(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return -1;
}
string convertion(string s)
{
    stack<char>st;
    reverse(s.begin(), s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')       
        {
            s[i]=')';
        }
        else if(s[i]==')')
        {
            s[i]='(';
        }
    }
    string con;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>'0'&&s[i]<'9')
        {
            con+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                con+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty()&&preority(s[i])<preority(st.top()))
            {
                con+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        con+=st.top();
        st.pop();
    }
    reverse(con.begin(), con.end());
    return con;
}
int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    s=convertion(s);
    cout<<s;
}