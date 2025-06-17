#include <stdio.h>
#include <string.h>

int main (){
    int p1;
    int p2;
    
    printf("Ingresa dos palabras:\n");
    scanf("%s , %s " , p1 , p2);
    
    char uno[p1];
    char dos[p2];
    
    strcpy(dos, uno);
    printf("El cambio es: " dos, uno);
    
    
    
return 0;
}