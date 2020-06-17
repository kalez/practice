#include <stdio.h>
#include <stdlib.h>

typedef struct bstNode
    {
        int data,
        struct *bstNode left;
        struct *bstNode right;
    } bstNode_t;

void bstInsert(bstNode_t *root, int data)
{
    
}
void bstNewNode(bstNode_t *root, int data)
{
    root = (bstNode_t *)malloc(sizeof(bstNode_t));
    root->data = data;
    root->left = NULL;
    root->right = NULL:

    return root;
}
int main()
{
    bstNode_t *root = NULL;


}
