#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
	int ret, status;

	ret = fork();
	printf("%s %d: ret is :%d\n", __FUNCTION__, __LINE__, ret);
	if (ret == 0) { //child
		printf("I am child pid: %d\n", getpid());
		//execl: cp -a  conf/ /tmp
		//execl("/bin/cp", "cp", "-a", "conf/", "/tmp", NULL);
		execl("/bin/sleep", "sleep", "30", NULL);
		printf("exec fail! %d exit\n", getpid());
		exit(4);
	} else { // pararnt
		printf("this is parart: ret: %d\n", ret);
		waitpid(ret, &status, 0); printf("child pid: %d already finish status: %d\n", ret, status);
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
