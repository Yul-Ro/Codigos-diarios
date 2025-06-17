#include <stdio.h>
struct CD{
            char titulo[100];
            char artista[50];
            char num_canciones[100];
            char anio [100];
            char precio [100];
        };
int main (void)
{
    struct CD cd1;
    printf("Ingresa el titulo\n");
    gets (cd1.titulo);
    printf("%s\n",cd1.titulo);
    
    struct CD cd2;
    printf("Ingresa el nombre del artista:\n");
    gets (cd1.artista);
    printf("%s\n", cd1.artista);
    
    struct CD cd3;
    printf("Ingresa el numero de canción:\n");
    gets(cd1.num_canciones);
    printf("%s\n",cd1.num_canciones);
    
    struct CD cd4;
    printf("Ingresa el año:\n");
    gets (cd1.anio);
    printf("%s\n",cd1.anio);
    
    struct CD cd5;
    printf("Ingrese el precio\n");
    gets(cd1.precio);
    printf("%s\n",cd1.precio);
    
    system ("Pause");
    return 0;
    
}

    
    
    