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

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if (temp==NULL)
        {
            // purana level complete traverse ho gya
            cout<< endl;
            if(!q.empty())
            {
                // q still has child nodes
                q.push(NULL);
            }
        }
        else
        {
           cout<< temp->data << " ";
            if (temp->left)
            {        
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }         
        }    
    }
}
    
    

int main()
{
    node* root = NULL;
    root = buildTree(root);

     //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    levelOrderTraversal(root);

    return 0;
}
