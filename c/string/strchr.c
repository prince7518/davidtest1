#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char s[128] = "Hi Peter, Nice to meet you!";
	char *p;

	p = strchr(s, 'P');
	printf("p = %s\n", p);
	p = strchr(s, 'p');

	printf("find string Peter %s\n", p != NULL ? "Yes":"No");
}
