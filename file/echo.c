#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("%s <Message>\n", argv[0]);
		return 0;
	}
	write(2, argv[1], strlen(argv[1]));
	write(2, "\n", 1);
	pause();
	exit(0);
}
