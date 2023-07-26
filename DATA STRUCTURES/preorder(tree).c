#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
}*node,*root;
void node*create(int val)
{
    node=(struct node*)malloc(sizeof(struct node));
    node->element=val;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
void preorder(root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->data);
    printf(root->left);
    printf(root->right);
}
void main()
{
    root=create(5);
    root->left=create(10);
    root->right=create(7);
    root->left->left=create(4);
    root->right->right=create(3);
    root->left->right=create(2);
    printf("pre order is:");
    preorder(root);
}
