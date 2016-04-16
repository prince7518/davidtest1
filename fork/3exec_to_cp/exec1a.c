#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"cp", "-a", "conf/", "/tmp", NULL};
	perror("exec fail");
}
