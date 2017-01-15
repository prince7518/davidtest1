#include <stdio.h>

const unsigned int count = 20000000;
unsigned int num;
int main()
{
	int n;
	for (n = 0; n < count; n++) {
		num++;
	}
	return 0;
}
