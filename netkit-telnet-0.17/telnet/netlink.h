
class netlink {
 private:
    int family;
 protected:
    int net;
 public:
    netlink();
    ~netlink();

    int bind(struct addrinfo *hostaddr);
    int socket(int family);
    int connect(int debug, struct addrinfo *hostaddr, 
		char *srcroute, int srlen,
		int tos);
    void close(int doshutdown);

    int setdebug(int debug);
    void oobinline();
    void nonblock(int onoff);

    int stilloob();

    int send(const char *buf, int len, int flags);

    int getfd();
};

extern netlink nlink;
