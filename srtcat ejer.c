#include <stdio.h>
#include <string.h>

int main() {
    char p1[100], p2[100], resultado [100];
    int Pal, longitud;
     
    printf("Ingrese la 1er palabra:"); 
    scanf ("%s", p1);
    
    printf("Ingrese la 2da palabra:"); 
    scanf( "%s", p2);
    
    strcat (resultado, p1);
    
    longitud = strlen (p1);
    
    for (Pal= 0; Pal < longitud; Pal++){
    strcat (resultado, p2);
    }
    printf("intercambio y aumento: \n%s", resultado);
    
    return 0;
    
}