#include <stdio.h>

int main()
{
	FILE *fd;
	char buf[256];
	fd = fopen("/etc/passwd", "r");

	fgets(buf, sizeof(buf), fd);
	printf(">> %s\n", buf);
	fgets(buf, sizeof(buf), fd);
	printf(">> %s\n", buf);
	fclose(fd);
	return 0;
}
