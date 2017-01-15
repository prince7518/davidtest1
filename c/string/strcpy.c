#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s1[128] = "Hi Peter, Nice to meet you!";
	char s2[128] = "Hi Peter, Nice to meet you!";

	strcpy(s1, "QQ");
	printf("s2: %s\n", s1);
	strncpy(s2, "QQ", 2);
	printf("s3: %s\n", s2);
}
