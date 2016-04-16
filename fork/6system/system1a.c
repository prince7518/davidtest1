#include <stdio.h>

int main()
{
	int n;
	n = system("cp -a conf/ /tmp/");
	printf("n: %d\n", n);
}
