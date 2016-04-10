#include <stdio.h>

int main()
{
	FILE *fd;

	fd = fopen("/etc/passwd", "r");
	printf("fd: %p\n", fd);
	fclose(fd);
	return 0;
}
