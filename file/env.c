#include <stdio.h>
extern char **environ;
int main(int argc, char *argv[])
{
	char **e;
	for (e = environ;*e != NULL; *e++)
		printf("%s\n", *e);
}
