#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *p,y;
void func (){

    int x=40;
    p=&x;
    y=*p;
    *p=23;
}
int main (void){
clock_t inicio, fin;
double tiempo;
inicio = clock();
for(int i = 0; i<1000000 ; i++){
}
fin = clock();
printf("El tiempo de ejecucion fue %f", tiempo);
    func();
    y=*p;
    *p=25;
    printf("El valor de y es %d\n El valor de *p es %d\nEl valor de p es %p", y,*p,p);
}