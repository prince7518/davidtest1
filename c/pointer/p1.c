#include <stdio.h>
int main()
{
	char c;
	char *p;
	char **pp;
	char ***ppp;
	printf("c: %d, p: %d, pp: %d, ppp: %d\n", sizeof(c), sizeof(p), sizeof(pp), sizeof(ppp));
}
