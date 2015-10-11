#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * Executes the command "cat /etc/passwd| grep root".  In this quick-and-dirty
 * implementation the parent doesn't wait for the child to finish and
 * so the command prompt may reappear before the child terminates.
 */

int main(int argc, char **argv)
{
	int pipefd[2];
	int pid;

	char *cat_args[] = { "cat", "/etc/passwd", NULL };
	char *grep_args[] = { "grep", "root", NULL };

	pipe(pipefd);
	pid = fork();
	if (pid == 0) {
		dup2(pipefd[0], 0);
		close(pipefd[1]);
		execvp("grep", grep_args);
	} else {
		dup2(pipefd[1], 1);
		close(pipefd[0]);
		execvp("cat", cat_args);
	}
}
