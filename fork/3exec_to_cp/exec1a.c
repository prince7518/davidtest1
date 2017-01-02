#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"cp", "-a", "conf/", "/tmp", NULL};
	execv("/bin/cp", argv);
	perror("exec fail");
}
