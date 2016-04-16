#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/* 
 * ./a.out /tmp/dup2.txt
 * cat /tmp/dup2.txt
 * */
#define dbg(fmt, a...) printf("%s %d: " fmt, __FUNCTION__, __LINE__, ##a);

int main(int argc, char *argv[])
{
	int fd;

	dbg("open %s\n", argv[1]);
	if ((fd = open(argv[1], O_WRONLY|O_CREAT, 0644)) == -1)
		goto sys_err;
	if (dup2(fd, 1) == -1)
		goto sys_err;
	if (dup2(fd, 2) == -1)
		goto sys_err;
	fprintf(stdout, "hello dup2() stdout\n");
	fprintf(stderr, "hello dup2() stderr\n");
	return 0;
sys_err:
	perror("fail ");
	return -1;	
}
