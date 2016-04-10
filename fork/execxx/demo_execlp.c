#include <stdio.h>
#include <unistd.h>

int main()
{
	execlp("./dump_env_args", "execlp", "a", "b", "c", NULL);
	perror("exec fail");
}
