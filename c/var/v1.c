#include <stdio.h>
int main()
{
	char c;
	short s;
	int i;
	long l;

	printf("c: %d, s: %d, i: %d, l: %d\n",
	    sizeof(c), sizeof(s), sizeof(i), sizeof(l));
	printf("c: %d, s: %d, i: %d, l: %d\n",
	    sizeof(char), sizeof(short), sizeof(int), sizeof(long));
}
