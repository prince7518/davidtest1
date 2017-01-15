#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
    char block[1024]; 
    int in, out; 
    int nread;

    in = open("/xxx/xxx/file.in", O_RDONLY);
    if (in = -1) {
	printf("open fail errno: %d, msg: %s\n", errno, strerror(errno));
	perror("open(2)");
	return -1;
    }
    close(2);
    out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    printf("in = %d out = %d, pid %d\n", in, out, getpid());
    while((nread = read(in,block,sizeof(block))) > 0)
        write(out,block,nread);
    pause();
    exit(0);
}

