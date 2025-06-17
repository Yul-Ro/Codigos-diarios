#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int g;
void func (){

    int u=50;
    g=u;
    g;
}
int main (void){
clock_t inicio, fin;
double tiempo;
inicio = clock();
for(int i = 0; i<1000000 ; i++){
}
fin = clock();
printf("El tiempo de ejecucion fue %f\n", tiempo);
    func();
    printf("El valor de y es %d\n", g);
}