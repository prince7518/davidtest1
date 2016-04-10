#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <linux/sockios.h>
#include <sys/ioctl.h>
#include <net/if.h>

int get_ip(const char *ifname, char *buf)
{
        int s, ret = -1;
        struct ifreq ifr;

        s = socket(AF_INET, SOCK_DGRAM, 0);
        memset(&ifr, 0, sizeof(struct ifreq));
        strcpy(ifr.ifr_name, ifname);
        if ((ret = ioctl(s, SIOCGIFADDR, &ifr)) < 0)
                return ret;
        close(s);
        strcpy(buf, (char *)inet_ntoa(((struct sockaddr_in*)&ifr.ifr_addr)->sin_addr.s_addr));
        return ret;
}

int main(int argc, char *argv[])
{
	char buf[128];

	if (argc < 2) return -1;
	if (get_ip(argv[1], buf) == 0)
		printf("%s ip: %s\n", argv[1], buf);
}
