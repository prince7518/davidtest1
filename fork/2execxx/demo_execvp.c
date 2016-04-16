#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"execv", "a", "b", "c", NULL};
	
	execvp("./dump_env_args", argv);
	//execve("/bin/cp", argv, environ);
	perror("exec fail");
}
