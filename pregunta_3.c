#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int rc = fork();

    if (rc < 0){
	fprintf (stderr, "fallo el fork\n");
	exit(1);
}   else if (rc == 0) 
        {
	int rc_wait = wait(NULL);
        printf("Hola soy el hijo\n");
        }
    else 
        {
        printf("Hola soy el padre\n");
        }
return 0;
}
