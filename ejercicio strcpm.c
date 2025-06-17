#include <stdio.h>
#include <string.h>

int main() {
    int res;
    char str1[100];
    char str2[100];
    printf("Ingrese palabra 1:");
    scanf("%s", str1);
    printf("Ingrese palabra 2:");
    scanf("%s", str2);
    
    res = strcmp( str1,str2 );
    
    printf("resultado: %d\n" , res);{
    
    if (res == 0) {
    printf("La palabras son iguales");
    };
    
    if (res > 0){
    printf("La palabra 2 es mayor");
    };
    
    if(res < 0){
    printf("La palabra 1 es mayor");
    };
    }
    
    return 0;
    
}