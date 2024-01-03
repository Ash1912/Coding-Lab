//Write a program for deleting all the nodes from the single linked list which are divisible by a given input number k > 1.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *getNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to delete all the nodes from the list
// that divisible by the specified value K
void deleteDivisibleNodes(struct Node **head_ref, int K)
{
    struct Node *temp = *head_ref, *prev;
    // If head node itself holds the value divisible by K
    while (temp != NULL && temp->data % K == 0)
    {
        *head_ref = temp->next; // Changed head
        free(temp);             // free old head
        temp = *head_ref;       // Change temp
    }
    // Delete occurrences other than head
    while (temp != NULL)
    {
    	// Search for the node to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next'
        while (temp != NULL && temp->data % K != 0)
        {
            prev = temp;
            temp = temp->next;
        }
        // If required value node was not present
        // in linked list
        if (temp == NULL)
            return;
        // Unlink the node from linked list
        prev->next = temp->next;

        free(temp); // Free memory
        // Update Temp for next iteration of
        // outer loop
        temp = prev->next;
    }
}
// function to a print a linked list
void printList(struct Node *head)
{
    while (head)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}
// Driver code
int main()
{
    // Creating list: 16->15->9->12->5->6->4
    struct Node *head = getNode(16);
    head->next = getNode(15);
    head->next->next = getNode(9);
    head->next->next->next = getNode(12);
    head->next->next->next->next = getNode(5);
    head->next->next->next->next->next = getNode(6);
    head->next->next->next->next->next->next = getNode(4);
    int K = 4;

    printf("Initial List is : ");
    printList(head);

    deleteDivisibleNodes(&head, K);

    printf("\nFinal List is : ");
    printList(head);

    return 0;
}
