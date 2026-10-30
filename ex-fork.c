
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    }
    else if (pid == 0) {
        printf("Child Process  : PID=%ld\n", (long)getpid());
    }
    else {
        printf("Parent Process : PID=%ld\n", (long)getpid());
        waitpid(pid, NULL, 0);
    }

    return 0;
}
