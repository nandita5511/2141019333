#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); 

    if (pid < 0) {
        
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        
        printf("Child process (PID: %d) executing 'ls' command:\n", getpid());

        char *args[] = {"ls", "-l", NULL};  
        execvp(args[0], args);              

        
        perror("execvp failed");
        exit(1);
    } else {
        
        int status;
        waitpid(pid, &status, 0);  

        if (WIFEXITED(status)) {
            printf("Child process (PID: %d) terminated with status %d\n", pid, WEXITSTATUS(status));
        } else {
            printf("Child process (PID: %d) terminated abnormally\n", pid);
        }
    }

    return 0;
}

