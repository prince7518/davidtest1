#include <stdio.h>

int libfoo()
{
	printf("%s %d\n", __FUNCTION__, __LINE__);
}
