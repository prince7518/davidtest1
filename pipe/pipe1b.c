#include <stdio.h>

int main()
{
	int fd[2], n;
	char data[24];
	pipe(fd);
	printf("%d %d\n", fd[0], fd[1]);

	write(fd[1], "hello", 6);
	write(fd[1], "Hello", 6);
	n = read(fd[0], data, 24);
	printf("get %d bytes \"%s, %s\" from pipd fd[0]\n", n, data, data + 6);
}
