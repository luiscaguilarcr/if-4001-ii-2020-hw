#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char strace[] = "strace -c ls > ";     //strace
    char strace2[] = "strace ls 2>&1 > "; 
    char search[] = " | grep -P -o '^[a-z]*{?=\()'"; //busca el archivo

    if (strcmp(argv[1], "1") == 0) //El 1 significa modo automatico
    {
        strncat(strace, argv[2], sizeof strace2); //Concatena el comando con el modo
        system(strace);
    }
    else if (strcmp(argv[1], "2") == 0) //El 2 significa modo interactivo
    {
        strncat(strace2, argv[2], sizeof strace2); //Concatena el comando con el modo
        strncat(strace2, search, sizeof search);  //Concatena el comando con el modo

        system(strace2);
    }
    else
    {
        printf("ERROR\n");
    }
    return 0;
}