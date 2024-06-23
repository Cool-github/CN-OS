// NAME OF THE EXPERIMENT:Creating a child process and allow the parent to display 
// ‘parent’. 



/*
Write a C program to create a child process and allow the parent to display ‘parent’ 
and 
the child to display ‘child’ on the screen. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int global = 10;

int main() {
    int local = 20;
    pid_t pid;
    printf("before fork\n");
    printf("pid-%d global-%d local-%d\n", getpid(), global, local);

    pid = fork();

    if (pid < 0) {
        printf("child process not created\n");
    } else if (pid == 0) {
        printf("after fork\n");
        global++;
        local++;
    } else {
        sleep(2);
    }

    printf("cid-%d global-%d local-%d\n", getpid(), global, local);

    exit(0);
}
