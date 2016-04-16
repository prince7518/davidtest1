#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/* 
 * ./dup2 > dup2.txt
 * cat dup2.txt
 * ./dup2 2> dup2.txt
 * cat dup2.txt
 * */
#define dbg(fmt, a...) printf("%s %d: " fmt, __FUNCTION__, __LINE__, ##a);

int main(int argc, char *argv[])
{
	if (dup2(2, 1) == -1)
		goto sys_err;
	fprintf(stdout, "hello dup2() stdout\n");
	fprintf(stderr, "hello dup2() stderr\n");
	return 0;
sys_err:
	perror("dup2() fail");
	return -1;	
}
