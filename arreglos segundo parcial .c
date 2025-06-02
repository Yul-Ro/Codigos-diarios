#include <stdio.h>
int main(){
   int vector [10];
   
   vector[0]=10;
   vector[1]=10;
   vector[2]=10;
   vector[3]=10;
   vector[4]=10;
   vector[5]=10;
   vector[6]=10;
   vector[7]=10;
   vector[8]=10;
   vector[9]=10;
   
   int i=0;
   while(i<=9){
     printf("El valor de vector [%d]=\%d" ,i , vector);
     i++;
   }
system ("pause");
return 0;
}