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
clock_t comienzo, final;
double reloj;
comienzo = clock();
for(int i = 0; i<1000000 ; i++){
}
final = clock();
printf("El tiempo de que tardo  fue de %f\n", reloj);
    func();
    printf("El valor de y es %d\n", g);
}