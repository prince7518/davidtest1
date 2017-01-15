#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
	int fd;
	int fd2;
	char buf[128];
	int n;

	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0644);

	if (fd == -1 || fd2 == -1) {
		perror("fopen err");
		return 1;
	}

	printf("fd = %d, fd2: %d\n", fd, fd2);
	while ((n = read(fd, buf, 128)) != 0) {
		//printf("%s\n", buf);
		write(fd2, buf, n);
	}
	close(fd);
	close(fd2);
}
