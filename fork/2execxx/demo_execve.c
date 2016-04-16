#include <stdio.h>
#include <unistd.h>
extern char **environ;

int main()
{
	char *argv[] = {"execv", "a", "b", "c", NULL};
	
	execve("./dump_env_args", argv, environ);
	perror("exec fail");
}
