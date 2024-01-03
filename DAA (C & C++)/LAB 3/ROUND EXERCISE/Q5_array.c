// 3.5 Design a data structure to maintain a set S of n distinct integers that supports the
// following two operations:
// a) INSERT(x, S): insert integer x into S
// b) REMOVE-BOTTOM-HALF(S): remove the smallest ฀ n/2฀ integers from S.
// c) Write a program by using UDFs that give the worse-case time complexity of the
// two operations INSERT(x, S) in O(1) time and REMOVE-BOTTOM-HALF(S) in
// O(n) time.
#include<stdio.h>
#include<time.h>
#define MAX 1000
typedef struct{
    int data[MAX];
    int top;
}STACK;
void init(STACK *);
int INSERT(STACK *,int);
void REMOVE_BOTTOM_HALF(STACK *);
void display(STACK *);
int main()
{
    double total_time;
    clock_t start, end;
    start = clock();
    STACK s1;
    int d=1,element,max,min,ch,t;
    init(&s1);
    while(d!=0)
   {
   printf("\nPRESS 0 FOR NOT RUNNING THE LOOP");
   printf("\nPRESS 1 FOR INSERT(x,S)");
   printf("\nPRESS 2 FOR REMOVE-BOTTOM-HALF(S)");
   printf("\nENTER YOUR CHOICE : ");
   scanf("%d",&ch);
   printf("\n");
   switch(ch)
   {
      case 1:
      {
          int i=0;
          printf("ENTER THE VALUE :");
          scanf("%d",&element);
          int k=INSERT(&s1,element);
          display(&s1);
          break;
      }
      case 2:
      {
          REMOVE_BOTTOM_HALF(&s1);
          break;
      }
      default:
     {
        printf("\n INVALID CHOICE ");
        break;
     }
   }
        printf("\n");
        printf("\nDO YOU WANT TO RUN THE LOOP : ");
        scanf("%d",&d);
    }
       end = clock();
       total_time = ((double) (end - start)) / CLK_TCK;
       printf("\nTime taken : %f seconds\n", total_time);
       printf("\nAshish_20051685\n");
    return 0;
}
void init(STACK *s)
{
    s->top=-1;
}
int INSERT(STACK *s,int val)
{
    if(s->top==MAX-1)
    {
        printf("\nSTACK IS OVERFLOW");
        return 1;
    }
    else
    {
        s->top++;
        s->data[s->top]=val;
        return 0;
    }
}
void REMOVE_BOTTOM_HALF(STACK *s)
{
    if(s->top==-1)
    {
        printf("\nSTACK IS UNDERFLOW");
    }
    else
    {
        int i,j,temp,t;
        for (i=0;i<=s->top;i++)
        {
            for(j=0;j<s->top-i-1;j++)
            {
                if(s->data[j]<s->data[j+1])
                {
                    temp=s->data[j];
                    s->data[j]=s->data[j+1];
                    s->data[j+1]=temp;
                }
            }
        }
        printf("\nAFTER INSERTION IN O(1) time the SORTED ARRAY IS : ");
        for(i=0;i<=s->top;i++)
        {
            printf("%d ",s->data[i]);
        }
        t=s->top;
        t=t+1;
        if(t>1)
        {
            printf("\nTHE REMOVE-BOTTOM-HALF(S) IN O(n) time ARRAY IS : ");
            for(i=0;i<t/2;i++)
            {
                printf("%d ",s->data[i]);
            }
            s->top=s->top-((t/2)+1);
        }
        else
        {
            printf("\nREMOVING ELEMENTS NOT POSSIBLE ");
        }
    }
}
void display(STACK *s)
{
    int i;
    if(s->top>-1)
    {
       printf("\nTHE ELEMENTS ARE : ");
       for(i=0;i<=s->top;i++)
       {
           printf("%d ",s->data[i]);
       }
    }
    else
    {
        printf("\nNO ELEMENTS FOUND ");
    }
}