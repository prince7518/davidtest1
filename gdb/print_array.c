#include <stdio.h>

int main(int argc, char *argv[])
{
	int p[6] = {0, 1, 2, 3, 4, 5};
	int *d = p;
	int i;

	for (i = 0; i < sizeof(p)/sizeof(int); i++)
		printf("d[%d] = %d\n", i, d[i]);
	return 0;
}
