#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"execv", "a", "b", "c", NULL};
	
	execv("./dump_env_args", argv);
	//execvp("cp", argv);
	//execve("/bin/cp", argv, environ);
	perror("exec fail");
}
