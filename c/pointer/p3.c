#include <stdio.h>
int main()
{
	int s = 543;
	int *p;
	int **pp;
	int ***ppp;

	p = &s;
	pp = &p;
	ppp = &pp;

	printf("s = %d\n", s);
	printf("p = %d\n", *p);
	printf("pp = %d\n", **pp);
	printf("ppp = %d\n", ***ppp);
}
