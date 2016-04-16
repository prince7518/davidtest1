#include <stdio.h>
#include <unistd.h>

int main()
{
	execl("./dump_env_args", "execl", "a", "b", "c", NULL);
	perror("exec fail");
}
