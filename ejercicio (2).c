#include <stdio.h>

int main (){

 int vector[10];
 
 int i = 0;
 while( i <10){
 vector [1]= 2 * (i+1);
 i++;
}

 i=0;
 while(i<10){
 printf("2* %d = %d \n" , i + 1, vector [i]);
 i++;
}
return 0;

}