#include <unistd.h> 
#include <sys/ioctl.h>
int main()
{
	int fd = 0;
	int bytes;
 
	ioctl(fd, FIONREAD, &bytes);
	printf("%d bytes readable\n", bytes);

	return 0;
}
