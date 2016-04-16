#include <stdio.h>
#include <string.h>
static int sigma(int sum, int from, int to, int step)
{
	if (from >= to)
		return sum;
	return sigma(sum + step + from, from + step, to, step);
	
}
int main(int argc, char *argv[])
{
	int total;

	total = sigma(1, 1, 10, 1);
	printf("total: %d\n", total); // 55
}
