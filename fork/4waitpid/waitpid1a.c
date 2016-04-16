#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int ret, status;

	ret = fork();

	if (ret == 0) { 	//child
		sleep(10);
		exit(0);
	} else {		// pararnt
		printf("this is parart: ret: %d\n", ret);
		waitpid(ret, &status, 0);
		printf("child pid: %d already finish status: %d\n", ret, status);
		if (WIFEXITED(status)) {
			printf("exited, status=%d\n", WEXITSTATUS(status));
		} else if (WIFSIGNALED(status)) {
			printf("killed by signal %d\n", WTERMSIG(status));
		} else if (WIFSTOPPED(status)) {
			printf("stopped by signal %d\n", WSTOPSIG(status));
		} else if (WIFCONTINUED(status)) {
			printf("continued\n");
		}
	}
}
