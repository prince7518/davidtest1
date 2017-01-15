#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s[128] = "Hello World";

	printf("strlen(%s) = %d, sizeof(s) = %d\n", s, strlen(s), sizeof(s));
}
