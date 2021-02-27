#include<bits/stdc++.h>
using namespace std;
 

struct Node
{
    int data;
    struct Node* left, * right;
};
 

struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}
 
// Function to check tree is continuous or not
bool treeContinuous(struct Node *ptr)
{

    if (ptr == NULL)
        return true;
 
    if (ptr->left == NULL && ptr->right == NULL)
        return true;

    if (ptr->left == NULL)
       return (abs(ptr->data - ptr->right->data) == 1) &&
              treeContinuous(ptr->right);

    if (ptr->right == NULL)
       return (abs(ptr->data - ptr->left->data) == 1) &&
              treeContinuous(ptr->left);
 
    return  abs(ptr->data - ptr->left->data)==1 &&
            abs(ptr->data - ptr->right->data)==1 &&
            treeContinuous(ptr->left) &&
            treeContinuous(ptr->right);
}

//using by level order traversal
struct node {
    int val;
    node* left;
    node* right;
    node()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {
    }
    node(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {
    }
    node(int x, node* left, node* right)
        : val(x)
        , left(left)
        , right(right)
    {
    }
};

bool continuousTree(struct node* root){
    if(root == NULL){
        return false;
    }

    int flag = 1;
    queue<struct node*> q;
    q.push(root);
    node* temp;

    while (!q.empty()) {
        temp = q.front();
        q.pop();
 
        // Move to left child
        if (temp->left) {
 
            // if difference between parent and child is
            // equal to 1 then do continue otherwise make
            // flag = 0 and break
            if (abs(temp->left->val - temp->val) == 1)
                q.push(temp->left);
            else {
                flag = 0;
                break;
            }
        }
 
        // Move to right child
        if (temp->right) {
 
            // if difference between parent and child is
            // equal to 1 then do continue otherwise make
            // flag = 0 and break
            if (abs(temp->right->val - temp->val) == 1)
                q.push(temp->right);
            else {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        return true;
    else
        return false;
}
 
/* Driver program to test mirror() */
int main()
{
    struct Node *root = newNode(3);
    root->left        = newNode(2);
    root->right       = newNode(4);
    root->left->left  = newNode(1);
    root->left->right = newNode(3);
    root->right->right = newNode(5);
    treeContinuous(root)?  cout << "Yes" : cout << "No";
    struct node* root1 = new node(3);
    root1->left = new node(2);
    root1->right = new node(4);
    root1->left->left = new node(1);
    root1->left->right = new node(3);
    root1->right->right = new node(5);
 
    // Function Call
    if (continuousTree(root1))
        cout << "True\n";
    else
        cout << "False\n";
 
    return 0;
}

