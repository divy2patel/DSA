#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* rigth;
    Node(int val)
    {
        data=val;
        left=rigth=NULL;
    }
};
Node* insert(Node *root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->rigth=insert(root->rigth,val);
    }
    return root;
}
void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->rigth);
}
bool search(Node* root,int key)
{
    if (root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->rigth,key);
    }  
}
Node* bulidBST(vector<int> arr)
{
    Node *root=NULL;
    for(int val:arr)
    {
        root=insert(root,val);
    }
    return root;
}
int main()
{
    vector<int> arr={3,2,4,1,5,6};
    Node* root= bulidBST(arr);
    cout<<search(root,5);
    return 0;
}