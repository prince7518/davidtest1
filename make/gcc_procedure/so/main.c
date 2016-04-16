#include <stdio.h>
#include "libfoo.h"
/*
 * use: LD_LIBRARY_PATH=./ ./main
 * */
#define HELLO "hello worild"
int main(int argc, char *argv[])
{
	char *say = HELLO;
	printf("%s\n", say);
	libfoo();
}
