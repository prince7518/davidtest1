#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

	char buf[128] = "Hi Peter, Nice to meet you!";
	char *s, *p;

	s = buf;
	printf("buf: %s\n\n", buf);
	while ((p = strsep(&s, " ")) != NULL)
		printf("p:\"%s\", s: \"%s\"\n", p, s);
}
