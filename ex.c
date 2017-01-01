#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    int ret = 0;
    ret = WEXITSTATUS(system("./ex.sh"));
    printf("%d\n", ret);
}
