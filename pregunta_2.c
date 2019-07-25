#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

volatile float v;
    	pthread_mutex_t puerta;

void *Division(void *arg) {

    cerrar_puerta(puerta);
    float y= 350, z= 25;
    v = division(z,y);
    abrir_puerta(puerta);
    return NULL;
}

void *multiplicacion(void *arg) {

    cerrar_puerta(puerta);
    float x= 1250;
    v = multi(x,v);
    abrir_puerta(puerta);
    return NULL;
}

int main(int argc, char *argv[]) {
    crear_puerta(puerta);
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, Division, NULL);
    Pthread_create(&p2, NULL, multiplicacion, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    destruir_puerta(puerta);
    printf("v =  %f\n", v);
    return 0;
}
