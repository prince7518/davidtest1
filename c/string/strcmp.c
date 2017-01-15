#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("%d = strcmp(\"abc\", \"abc\")\n",	strcmp("abc", "abc"));
	printf("%d = strcmp(\"abc\", \"ab\")\n", 	strcmp("abc", "ab"));
	printf("%d = strncmp(\"abc\",\"ab\", 3)\n",	strncmp("abc", "ab", 3));
	printf("%d = strncmp(\"abc\", \"ab\", 2)\n",	strncmp("abc", "ab", 2));
	printf("%d = strncmp(\"abZ\", \"abX\", 2)\n",	strncmp("abZ", "abX", 2));
}
