#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]) {
    char interactive[] = "strace -c ls > ";
    char automatic[] = "strace -c ./";
    char list[] = "/Lista de directorios";
    
    if(strcmp(argv[1], "1") == 0){
        strncat(interactive, &argv[2], sizeof argv[2]);
        strncat(interactive, list, sizeof list);
        system(interactive);

    } else if (strcmp(argv[1], "2") == 0) {
        strncat (automatic, &argv[2], sizeof argv[2]);
        system(automatic);
        
    } else {
        printf ("ERROR\n");
    }
}
