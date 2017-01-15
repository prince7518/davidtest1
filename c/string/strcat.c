#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s1[128] = "Hi Peter";
	char s2[128] = "Hi Peter";

	strcat(s1, " Nice to meet you!");
	printf("s1: %s\n", s1);
	strncat(s2, " Nice to meet you!", strlen(" Nice to meet you!") + 1);
	printf("s2: %s\n", s2);
}
