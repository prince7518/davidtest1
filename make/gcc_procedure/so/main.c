#include <stdio.h>
#include "libfoo.h"
#define HELLO "hello worild"
int main(int argc, char *argv[])
{
	char *say = HELLO;
	printf("%s\n", say);
	libfoo();
}
