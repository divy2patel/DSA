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
static int i=-1;
Node *buildtree(vector<int> preorder)
{
    i++;
    if(preorder[i]==-1)
    {
        return NULL;
    }
    Node* root=new Node(preorder[i]);
    root->left=buildtree(preorder);
    root->rigth=buildtree(preorder);
    return root;
}
void Preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" "; 
    Preorder(root->left);
    Preorder(root->rigth);
}
void Inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->rigth);
}
void Postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->rigth);
    cout<<root->data<<" ";
}
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    cout<<root->data<<"\n";
    Preorder(root);
    cout<<"\n";
    Inorder(root);
    cout<<"\n";
    Postorder(root);
    return 0;
}