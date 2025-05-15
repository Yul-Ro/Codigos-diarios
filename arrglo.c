#include <stdio.h>
int main(){
   int vector [10];
   
   int i=0;
  while(i<=9){
     printf("Ingresa el valor de vector [%d]:", i);
     scanf("%d", &vector);
     
     i++;
     
   }
   printf("El valor de vector [%d]=%d \n" ,i , vector);
system ("pause");
return 0;
}