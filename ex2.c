#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define EXIT_ERR(m) \
do\
{\
    perror(m);\
    exit(EXIT_FAILURE);\
}\
while (0);\

int main(void)
{
    int status;
    status = system("ls -l | wc -l");

    if (status == -1) {
        EXIT_ERR("system error");
    }

    else {
        if (WIFEXITED(status)) {
            if (WEXITSTATUS(status) == 0)
                printf("run command successful! %d\n", WEXITSTATUS(status));
            else
                printf("run command fail and exit code is %d\n", WEXITSTATUS(status));
        } else
            printf("exit status = %d\n", WEXITSTATUS(status));
    }
    return 0;
}
//WIFEXITED(wstatus)
//       returns true if the child terminated normally, that is, by
//       calling exit(3) or _exit(2), or by returning from main().
//
//WEXITSTATUS(wstatus)
//       returns the exit status of the child.  This consists of the
//       least significant 8 bits of the status argument that the child
//       specified in a call to exit(3) or _exit(2) or as the argument
//       for a return statement in main().  This macro should be
//       employed only if WIFEXITED returned true.
