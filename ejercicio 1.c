#include <stdio.h>

int main (){
int n ;
int suma = 0;

printf("ingrese su numero");
scanf("%d" , &n);

for( int i = 1 ; i <= n; i++ ){
 suma += i;
}
printf("la suma del sumero %d es %d" , n, suma);

return 0;
}