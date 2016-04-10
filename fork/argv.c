#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("%s %d pid: %d\n", __FUNCTION__, __LINE__, getpid());

	for (n = 0; n < argc; n++) {
		printf("argv[%d]: %s\n", n, argv[n]);
	}
}
