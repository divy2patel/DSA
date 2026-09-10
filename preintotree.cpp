#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *rigth;
    Node(int val)
    {
        data=val;
        left=rigth=NULL;
    }
};
int search(vector<int>inorder,int left,int rigth,int val)
{
    for(int i=left;i<=rigth;i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}
Node* helper(vector <int>& preorder,vector <int>& inorder,int &pI,int left,int rigth)
{
    if(left>rigth)
    {
        return NULL; 
    }
    Node *root=new Node(preorder[pI]);
    int iI=search(inorder,left,rigth,preorder[pI]);
    pI++;
    root->left=helper(preorder,inorder,pI,left,iI-1);
    root->rigth=helper(preorder,inorder,pI,iI+1,rigth);
}
Node *buildtree(vector <int>& preorder,vector <int>& inorder)
{
    int pI=0;
    return helper(preorder,inorder,pI,0,inorder.size()-1);
}
int main()
{
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};
    Node* root=buildtree(preorder,inorder);
    cout<<root->data<<" ";
    cout<<root->left->data<<" ";
    cout<<root->rigth->data<<" ";
    cout<<root->rigth->left->data<<" ";
    cout<<root->rigth->rigth->data<<" ";
}