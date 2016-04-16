#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main()
{
	int pid;
	int fd;

	printf("hello my pid is :%d\n", getpid());
	
        fd = open("/tmp/foo.txt", O_RDONLY);
	pid = fork();
	printf("hi my pid is: %d, the fork() return: %d fd: %d\n", getpid(), pid, fd);
	printf("OKOK\n");
}
