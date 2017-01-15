#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("%d = strcasecmp(\"abc\", \"aBc\")\n",		strcasecmp("abc", "aBc"));
	printf("%d = strcasecmp(\"abc\", \"aB\")\n",		strcasecmp("abc", "aB"));
	printf("%d = strncasecmp(\"abc\",\"aB\", 3)\n",		strncasecmp("abc", "aB", 3));
	printf("%d = strncasecmp(\"abc\", \"aB\", 2)\n",	strncasecmp("abc", "aB", 2));
	printf("%d = strncasecmp(\"abZ\", \"aBX\", 2)\n",	strncasecmp("abZ", "aBX", 2));
}
