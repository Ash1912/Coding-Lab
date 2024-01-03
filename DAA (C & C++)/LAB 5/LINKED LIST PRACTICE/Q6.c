// How do you reverse a singly linked list without recursion?
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
struct node
{
  int nData;
  struct node* pNext;
};
  
struct node* insertNodeAtEnd(struct node*p , int n)
{
  struct node *pRoot = p;
  struct node* pTemp = (struct node*)malloc(sizeof(struct node*));
  pTemp->nData = n;
  pTemp->pNext = NULL;
  
  if(!pRoot)
    return pTemp;
  else
  {
    struct node* pPar = p;
    while(p->pNext)
    {
      p=p->pNext;
    }
    p->pNext =pTemp;
    return pRoot;
  }
}
  
void displayLL(struct node* p)
{
  if(!p)
    printf("LinkList empty");
  else
  {
    do
    {
      printf(" %d", p->nData);
      p=p->pNext;
    }
    while(p);
  }
}
  
/* Function to reverse a Linked List elements
using 3 pointers
q = original Linked list
r = pointer to the reversed linked list
s = pointer to the last element of reversed linked list
*/
struct node * reverseLL(struct node *q)
{
  struct node*r =NULL;
  struct node*s =NULL;
  
  while(q)
  {
    s=r;
    r=q;
    q=q->pNext;
    r->pNext=s;
  }
  return r;
}
  
int main()
{
  double total_time;
    clock_t start1, end;
  struct node *start =NULL;
  // add elements in Linked List
  start = insertNodeAtEnd(start,10);
  start = insertNodeAtEnd(start,20);
  start = insertNodeAtEnd(start,30);
  start = insertNodeAtEnd(start,40);
  // display original Linked List elements
  printf("\nDisplay Linked List: ");
  displayLL(start);
  //Reverse the Linked List
  start = reverseLL(start);
  // display reversed Linked List elements
  printf("\nDisplay Reverse Linked List: ");
  displayLL(start);
  end = clock();
    total_time = ((double) (end - start1)) / CLK_TCK;
    printf("\nTime taken : %f microseconds\n", total_time);
    printf("\nAshish_20051685\n");
}