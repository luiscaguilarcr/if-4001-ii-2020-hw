#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]) {
    char automatic[] = "strace -c ls > "; //Modo automatico 
    char interactive[] = "strace -c ls "; //Modo interactivo
    char list[] = "/null";
    
    if(strcmp(argv[1], "1") == 0){ //El uno significa Modo 1 y es automatico
        strncat(automatic, &argv[2], sizeof argv[2]); //Concatena el comando con el modo
        strncat(automatic, list, sizeof list);//Concatena lo de arriba con la lista
        system(automatic);

    } else if (strcmp(argv[1], "2") == 0) { //El dos significa Modo 2 y es automatico
        strncat (interactive, &argv[2], sizeof argv[2]);//Concatena el comando con el modo
        system(interactive);
        
    } else {
        printf ("ERROR\n");
    }
}
