#include "libfoo.h"
#define HELLO "hello worild"
#if DEBUG
#define MSG(fmt, a...)  printf(fmt, ##a)
#else
#define MSG(fmt, a...) do {} while(0)
#endif

int main(int argc, char *argv[])
{
	char *say = HELLO;
	printf("%s\n", say);
	MSG("this is debug %s\n", HELLO);
	libfoo();
}
