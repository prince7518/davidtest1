#include <stdio.h>

int main()
{
	int ret;
	printf("%s %d: parant: %d\n", __FUNCTION__, __LINE__, getpid());
	
	ret = fork();

	if (ret == 0)	//child
		printf("%s %d: child pid: %d, ret: %d\n", __FUNCTION__, __LINE__, getpid(), ret);
	else
		printf("%s %d: parant pid: %d, ret: %d\n", __FUNCTION__, __LINE__, getpid(), ret);
}
