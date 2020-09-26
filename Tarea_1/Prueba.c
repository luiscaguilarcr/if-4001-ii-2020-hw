#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    printf ("%d", metodo());
}

int metodo(){

    int modo;
    char str[] = "strace -c ls > ";
    char fin[] = "/null";
    char fin2[] = "strace -c ./";
    char xx[200];
    char yy[200];

    printf("Introduzca el modo que desea\n 1.Modo Interactivo\n 2.Modo Automatico\n");
    scanf("%d", &modo);

    if(modo == 1){

        printf("Introduzca el directorio\n");
        scanf("%s", &xx);

        strncat(str, &xx, sizeof xx);
        strncat(str, fin, sizeof fin);

        system(str);
    } else if (modo == 2) {

        printf("Introduzca el nombre del archivo\n");
        scanf("%s", &yy);
        strncat (fin2, &yy, sizeof yy);

        system(fin2);
    } else {

        printf ("ERROR\n");
    }
    return 0;
}