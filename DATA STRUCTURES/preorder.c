#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int val)
{
    struct node* Node=(struct node*)malloc(sizeof(struct node));
    Node->data=val;
    Node->left=NULL;
    Node->right=NULL;
    return(Node);
}
void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node* root=create(5);
    root->left=create(10);
    root->right=create(7);
    root->left->left=create(4);
    root->right->right=create(3);
    root->left->right=create(2);
    printf("preorder is:");
    preorder(root);
    return 0;
}
