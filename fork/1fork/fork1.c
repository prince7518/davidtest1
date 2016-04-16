#include <stdio.h>

int main()
{
	int n;
	printf("hello my pid is :%d\n", getpid());
	
	n = fork();
	printf("hi my pid is: %d, the fork() return: %d\n", getpid(), n);
}
