// How are duplicate nodes removed in an unsorted linked list?
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* newNode(int data)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}
void removeDuplicates(Node* start)
{
	Node *ptr1, *ptr2, *dup;
	ptr1 = start;
	while (ptr1 != NULL && ptr1->next != NULL) {
		ptr2 = ptr1;
		while (ptr2->next != NULL) {
			if (ptr1->data == ptr2->next->data) {
	
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				free(dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}
void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}
/* Driver program to test above function */
int main()
{
	double total_time;
    clock_t start1, end;
int n;
//     printf(" Input the number of nodes : ");
//     scanf("%d", &n);
//     struct Node* start = newNode(n);
//     printf(" Input data for node 1 : ");
// // Creating n nodes and adding to linked list
//         for(i=2; i<=n; i++)
//         {
//             fnNode = (struct node *)malloc(sizeof(struct node));
//             if(fnNode == NULL)
//             {
//                 printf(" Memory can not be allocated.");
//                 break;
//             }
//             else
//             {
//                 printf(" Input data for node %d : ", i);
//                 scanf(" %d", &data);
 
//                 fnNode->num = data;      // links the num field of fnNode with num
//                 fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
//                 tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
//                 tmp = tmp->nextptr;
//             }}
    struct Node* start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);

	printf("Linked list before removing duplicates ");
	printList(start);

	removeDuplicates(start);

	printf("\nLinked list after removing duplicates ");
	printList(start);
    end = clock();
    total_time = ((double) (end - start1)) / CLK_TCK;
    printf("\nTime taken : %f seconds\n", total_time);
    printf("\nAshish_20051685\n");
	return 0;
}


