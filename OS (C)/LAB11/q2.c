#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	int p;
	for(int i=0;i<2;i++) 
	{
		p=fork();
		if(p == 0)
		{
			printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
			exit(0);
		}
	}
	for(int i=0;i<2;i++) 
	wait(NULL);
	
}
