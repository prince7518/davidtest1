#include <stdio.h>
int main()
{
	char c = 'A';	//ASCII 0x41
	char *p = NULL;
	char **pp;
	char ***ppp;
	printf("num: %p, c: %p, p: %p, pp: %p, ppp: %p\n", 16, c, p, pp, ppp);
}
