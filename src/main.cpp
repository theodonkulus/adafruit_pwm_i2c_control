extern "C"
{
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <linux/i2c-dev.h>
    #include <sys/ioctl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
}

#include <stdlib.h>

int main(int argc, char* argv[])
{
    int file;
    char* filename;// = "/dev/i2c-0";
    
    file = open(filename, O_RDWR);

    if(file < 0)
    {
        printf("Failed to open the i2c bus err=%d\n", file);
        exit(1);
    }

    printf("i2c bus opened\n");


    close(file);
    return 0;
}
