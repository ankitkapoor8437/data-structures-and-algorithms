#include<iostream>
#include<queue>
using namespace std;

class node
{
    // data for the tree
    public:
    int data;
    node* left;
    node* right;

    // declaring constructor
    node(int d)
    {
        this->data =d;
        this->left=NULL;
        this->right=NULL;
    }
};


// function to build tree using recursion
node* buildTree(node* root)
{
    cout<<"Enter the Data: " << endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }
    
    cout<< endl;
    cout<<"Enter the data to insert in the left  " << data << endl;
    root->left = buildTree(root->left);

    cout<<endl;
    cout<<"Enter the data to insert in the right  " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// function for traversal of tree

void preorder(node* root)
{
    // base case
    if (root==NULL)
    {
        return;
    }
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
        
    

int main()
{
    node* root = NULL;
    root = buildTree(root);

     //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    preorder(root);

    return 0;
}
