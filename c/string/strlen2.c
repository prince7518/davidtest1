#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s[128] = "S Hello World";
	char *p = "P Hello World";

	printf("strlen(%s) = %d, sizeof(s) = %d\n", s, strlen(s), sizeof(s));
	printf("strlen(%s) = %d, sizeof(s) = %d\n", p, strlen(p), sizeof(p));
}
