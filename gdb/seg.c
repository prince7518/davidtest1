#include <stdio.h>
#include <string.h>

int main()
{
	char b1[4] = {0};
	char b2[4] = {0};
	char b3[4] = {0};

	printf("b1: %p, b2: %p, b3: %p\n", b1, b2, b3);
	strcpy(b2, "1234567890");
	printf("b1: %s\n", b1);
	printf("b2: %s\n", b2);
	printf("b3: %s\n", b3);
	return 0;
}
