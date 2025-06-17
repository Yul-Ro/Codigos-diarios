#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *p,g;
void func (){

    int u=50;
    p=&u;
    g=*p;
    *p=34;
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
    g=*p;
    *p=34;
    printf("El valor de y es %d\n El valor de *p es %d\nEl valor de p es %p", g,*p,p);
}