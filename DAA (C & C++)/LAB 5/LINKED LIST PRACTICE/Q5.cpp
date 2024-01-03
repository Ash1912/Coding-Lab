// Given a linked list and a value x, partition it such that all nodes less than x come before nodes
// greater than or equal to x.
#include<bits/stdc++.h>
#define PI 3.141
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* newNode(int data)
{
	struct Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}
//Let us initialize first and last nodes of
      //three linked lists
        //1) Linked list of values smaller than x.
        //2) Linked list of values equal to x.
        //3) Linked list of values greater than x.
struct Node* partition(struct Node* head, int x)
{

	struct Node *smallerHead = NULL, *smallerLast = NULL;
	struct Node *greaterLast = NULL, *greaterHead = NULL;
	struct Node *equalHead = NULL, *equalLast = NULL;

	while (head != NULL) {

		if (head->data == x) {
			if (equalHead == NULL)
				equalHead = equalLast = head;
			else {
				equalLast->next = head;
				equalLast = equalLast->next;
			}
		}
        // If current node is less than X, append
        // it to the list of smaller values
		else if (head->data < x) {
			if (smallerHead == NULL)
				smallerLast = smallerHead = head;
			else {
				smallerLast->next = head;
				smallerLast = head;
			}
		}
		else
		{
			if (greaterHead == NULL)
				greaterLast = greaterHead = head;
			else {
				greaterLast->next = head;
				greaterLast = head;
			}
		}

		head = head->next;
	}

	if (greaterLast != NULL)
		greaterLast->next = NULL;
// Connect three lists
 
    // If smaller list is empty
	if (smallerHead == NULL) {
		if (equalHead == NULL)
			return greaterHead;
		equalLast->next = greaterHead;
		return equalHead;
	}
    // If smaller list is not empty and equal list is empty
	if (equalHead == NULL) {
		smallerLast->next = greaterHead;
		return smallerHead;
	}
    // If both smaller and equal list are non-empty
	smallerLast->next = equalHead;
	equalLast->next = greaterHead;
	return smallerHead;
}

void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
    clock_t start=clock();
	struct Node* head = newNode(10);
	head->next = newNode(4);
	head->next->next = newNode(20);
	head->next->next->next = newNode(10);
	head->next->next->next->next = newNode(3);
	// head->next->next->next->next->next = newNode(4);

    cout<<"Before Partition: ";
    printList(head);
    cout<<"\n\nAfter Partition: ";
	int x = 3;
	head = partition(head, x);
	printList(head);
    
    cout<<"\nTime Taken = "<<((long double)(clock() - start)/CLOCKS_PER_SEC)<<endl;
	cout<<"\nAshish_20051685\n"<<endl;
	return 0;
}