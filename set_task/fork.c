#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main( int argc, char *argv[] ) {
    pid_t pid;
    pid = fork();
    if (pid == -1)
        return -1;

    if (pid == 0)
        printf("I am the child");
    else
        printf("I am the parent");

    for (;;)
       ; 
}
