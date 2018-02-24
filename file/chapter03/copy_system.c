#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    char buff[1024]; 
    int i,in, out;

    in = open("file.in", O_RDONLY); 
    out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    while(i=read(in,buff,sizeof(buff)) > 0)
        write(out,buff,i);

    exit(0);
}

