#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        // printf("%s\n", argv[argc]);
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
        // return 0;
}
