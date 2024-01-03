// How do you find the middle element of a singly linked list in one pass?
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Node
{
    int data;
    struct Node* next;
};
void printMiddle(struct Node *head) //Use two pointers, the 2nd pointer  
                                   //should traverse twice as fast at the first.

{
    //Instead of traversing twice, we can create two-pointers say slow_ptr and fast_ptr.We 
    //can make the fast_ptr twice as fast as slow_ptr. So, When the fast_ptr will reach to 
    //the end of the linked list, slow_ptr would still be at the middle, thereby pointing 
    //to the mid of the linked list.
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
    }
}
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    double total_time;
    clock_t start, end;
    struct Node* head = NULL;
    int i;
    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nTime taken : %f seconds\n", total_time);
    printf("\nAshish_20051685\n");
    return 0;
}