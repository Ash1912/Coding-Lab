#include <stdio.h>
#include <stdlib.h>
typedef struct BST
{
    int data;
    struct BST *left, *right;
} BST;
 
void insertBST(BST **root, int data)
{
    BST *newBST = (BST *)malloc(sizeof(BST));
    newBST->data = data;
    newBST->left = newBST->right = NULL;
    if (!(*root))
        *root = newBST;
    else
    {
                BST *prev = NULL, *tmp = *root;
        while (tmp)
        {
            prev = tmp;
            if (tmp->data > data)
                tmp = tmp->left;
            else if (tmp->data < data)
                tmp = tmp->right;
        }
        if (prev->data > data)
            prev->left = newBST;
        else
            prev->right = newBST;
    }
}
 
void createBST(BST **root)
{
    int ch = 1;
do
    {
        int data = 0;
        printf("\nEnter a number to enter in BST: ");
        scanf("%d", &data);
        insertBST(root, data);
        printf("\nPress 1 to enter a value to BST or 0 to exit: ");
        scanf("%d", &ch);
    } while (ch == 1);
}
 
void Inorder(BST *root)
{
    if (!root)
        return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}
 
void Preorder(BST *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}
 
void Postorder(BST *root)
{
    if (!root)
        return;
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);
}
 
void search(BST *root, int data)
{
    BST *tmp = root;
    while (tmp)
    {
        if (tmp->data > data)
            tmp = tmp->left;
            else if (tmp->data < data)
            tmp = tmp->right;
        else
        {
            printf("\n%d found in BST!\n", data);
            return;
        }
    }
    printf("\nElement not found in BST!\n");
}
 
void findSmallest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
     {
        BST *tmp = root;
        while (tmp->left)
            tmp = tmp->left;
        printf("\nSmallest element in BST = %d\n", tmp->data);
    }
}
 
void findLargest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
    {
        BST *tmp = root;
        while (tmp->right)
            tmp = tmp->right;
             printf("\nLargest element in BST = %d\n", tmp->data);
    }
}
 
BST* getMinimumKey(BST *curr)
{
    while (curr->left != NULL)
        curr = curr->left;
    return curr;
}
 
void searchKey(BST **curr, int key, BST **parent)
{
    while (*curr != NULL && (*curr)->data != key)
    {
        *parent = (*curr);
        if (key < (*curr)->data)
            (*curr) = (*curr)->left;
             else
            (*curr) = (*curr)->right;
    }
}
 
void _deleteTree(BST *root)
{
    if (root == NULL)
        return;
    _deleteTree(root->left);
    _deleteTree(root->right);
    free(root);
}
 
void deleteTree(BST **root)
{
    _deleteTree(*root);
    *root = NULL;
}
 
int main()
{
    BST *root = NULL;
    while (1)
    {
        int ch;
        printf("\n----------------------------------------\n"
               "\tBinary Search Tree Menu\n"
               "----------------------------------------\n"
               "1. Create\n"
               "2. In-Order Traversal\n"
               "3. Pre-Order Traversal\n"
               "4. Post-Order traversal\n"
               "5. Search\n"
               "6. Find Smallest Element\n"
               "7. Find Largest Element\n"
               "8. Deletion of Tree\n"
               "9. Quit\n"
               "----------------------------------------\n"
               "Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createBST(&root);
            break;
            case 2:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("In-order traversal: ");
            Inorder(root);
            printf("\n");
            break;
        case 3:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Pre-order traversal: ");
            Preorder(root);
            printf("\n");
            break;
        case 4:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Post-order traversal: ");
            Postorder(root);
            printf("\n");
            break;
        case 5:
        {
            int d;
            printf("Enter number to search: ");
            scanf("%d", &d);
            search(root, d);
        }
        break;
        case 6:
            findSmallest(root);
            break;
        case 7:
            findLargest(root);
            break;
        case 8:
            deleteTree(&root);
            break;
        default:
            printf("\nEnter a valid ch!\n");
            break;
        case 9:
            return 0;
            break;
        }
    }
    return 0;
}
