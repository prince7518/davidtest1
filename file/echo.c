#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("%s <Message>\n", argv[0]);
		return 0;
	}
	write(1, argv[1], strlen(argv[1]));
	write(1, "\n", 1);
	sleep(30);
}
