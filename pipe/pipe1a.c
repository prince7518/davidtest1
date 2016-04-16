#include <stdio.h>

int main()
{
	int fd[2];
	char buf[24];
	pipe(fd);
	printf("%d %d\n", fd[0], fd[1]);

	write(fd[1], "hello", 6);
	read(fd[0], buf, 24);
	printf("get \"%s\" from pipd fd[0]\n", buf);
}
