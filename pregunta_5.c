#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv) {
	char* z = argv[1];
	char *p;
	char*  s = getenv("PATH");
	p = strtok (s,",:");
        strcat(p,"/");
        strcat(p, z);
	puts(p);
	if( access(p, F_OK ) != -1 ) {
         printf("Prueba\n"); 

	} else {
    
	}
}
