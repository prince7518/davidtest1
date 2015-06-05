#include <stdio.h>
#include <unistd.h>
extern char **environ;
int main()
{
	char *argv[] = {"cp", "-a", "conf/", "/tmp", NULL};
	printf("pid: %d\n", getpid());
	//execl: cp -a  conf/ /tmp
	
	//execl("/bin/cp", "cp", "-a", "conf/", "/tmp", NULL);
	//execlp("cp", "cp", "-a", "conf/", "/tmp", NULL);
	//execle("/bin/cp", "cp", "-a", "conf/", "/tmp", NULL, environ);

	//execv("/bin/cp", argv);
	//execvp("cp", argv);
	//execve("/bin/cp", argv, environ);
	perror("exec fail");
}
