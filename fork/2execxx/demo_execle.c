#include <stdio.h>
#include <unistd.h>
extern char **environ;

int main()
{
	execle("./dump_env_args", "execle", "a", "b", "c", NULL, environ);
	perror("exec fail");
}
