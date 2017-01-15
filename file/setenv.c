#include <stdio.h>
#include <stdlib.h>

int main()
{
	setenv("MYENV", "hello", 1);
	printf("ENV: %s\n", getenv("MYENV"));	
}
