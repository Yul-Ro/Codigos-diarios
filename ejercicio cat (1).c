#include <stdio.h>
#include <string.h>

int main() {
    
    printf("Ingrese la 1er palabra:"); scanf(" %s " &p1) ;
    printf("Ingrese la 2da palabra"); scanf(" %s");
    char origen[]="brisas";
    char destino[11]="para";
    strcat(destino,origen);
    printf("destino: %s", destino);
    
    return 0;
}