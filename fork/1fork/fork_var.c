#include <stdio.h>
char msg[128] = "Hello";
int main()
{
	int n;
	n = fork();

	if (n == 0) {//child
		strcpy(msg, "World");
		printf("%s\n", msg);
	} else {
		waitpid(n, NULL, 0);
		printf("%s\n", msg);
	}
}
