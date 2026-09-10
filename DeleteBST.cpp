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
Node *getInordersuccessor(Node *root)
{
    while(root!=NULL&&root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
Node* Deletenode(Node *root,int key)
{
    if (root==NULL)
    {
        return NULL;
    }
    if(key<root->data)
    {
        root->left= Deletenode(root->left,key);
    }
    else if(key>root->data)
    {
        root->rigth=Deletenode(root->rigth,key);
    }
    else
    {
        if(root->left==NULL)
        {
            Node *temp=root->rigth;
            delete root;
            return temp;
        }
        else if(root->rigth==NULL)
        {
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *is=getInordersuccessor(root->rigth);
            root->data=is->data;
            root->rigth=Deletenode(root->rigth,is->data);
        }

    }
    return root;
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
    vector<int> arr={3,2,4,1,5,6,7,8,9,10};
    Node* root= bulidBST(arr);
    inorder(root);
    Deletenode(root,6);
    Deletenode(root,9);
    cout<<"\n";
    inorder(root);
    return 0;
}