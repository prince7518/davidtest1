#include <stdio.h>
#include <unistd.h> 
extern char **environ;
int main(int argc, char *argv[])
{
	int n;
	char **e;
	printf("%s %d pid: %d\n", __FUNCTION__, __LINE__, getpid());

	for (n = 0; n < argc; n++) {
		printf("argv[%d]: %s\n", n, argv[n]);
		//printf("argv[%d]: %s\n", n, *(argv + n));
		//printf("argv[%d]: %s\n", n, *argv++);
	}
	for (e = environ; *e != NULL; e++) {
		printf("%s\n", *e);
		//printf("%p\n", e);
	}
}
