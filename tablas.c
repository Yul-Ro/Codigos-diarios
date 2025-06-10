#include <stdio.h>
int main (){
int m;
int n;
printf("Las tablas de multiplicar del 1 a 10\n");

for(m=1; m <=10; m++){
for(n=1; n <=10; n++)
printf("%d\t", m*n);
printf("\n\n");
}
printf("\n");


return 0;
}