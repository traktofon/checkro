#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/statvfs.h>

int main(int argc, char* argv[]) {
    int retval;
    struct statvfs buf;

    if (argc != 2) {
        fprintf(stderr, "Usage: checkro <mountpoint>\n");
        exit(9);
    }

    retval = statvfs(argv[1], &buf);
    
    if (retval != 0) {
        fprintf(stderr, "failed to check filesystem '%s': %s\n", argv[1], strerror(errno));
        exit(1);
    }

    if (buf.f_flag & ST_RDONLY) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    exit(0);
}
