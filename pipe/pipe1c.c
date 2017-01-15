#include <stdio.h>

int main()
{
	int fd[2];
	close(0);
	close(2);
	pipe(fd);

	printf("%d %d\n", fd[0], fd[1]);
}
