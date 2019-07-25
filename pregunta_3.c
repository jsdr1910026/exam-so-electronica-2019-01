#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int rc = fork();

    if (rc < 0){
	fprintf (stderr, "fallo el fork\n");
}

    if (rc == 0) 
        {
        printf("Hola soy el hijo\n");
        } 
    else if (rc > 0)
        {
        printf("Hola soy el padre\n");
        }
return 0;
}
