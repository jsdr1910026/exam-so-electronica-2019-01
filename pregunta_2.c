#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

volatile float v=0;

void *division(void *arg) {
    int y=350, z=25;
    v= z/y;
    return NULL;
}

void *multiplicacion(void *arg) {
    float m=0;
    int x=1250;
    m= x*v;
    return NULL;
}

int main(int argc, char *argv[]) {

    pthread_t p1, p2;
   
    Pthread_create(&p1, NULL, division, NULL);
    Pthread_create(&p2, NULL, multiplicacion, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
   
    printf("v=  %f\n", v);
    return 0;
}
