#include <stdio.h>
#include <string.h>

int main (){
    char cad [10];
    int N;
    
    printf("Ingrese una palabra: \n");
    scanf("%s", cad);
    N =strlen(cad);
    for(int i = 0; i< N; i++){
        for (int j =0; j < N ; j++){
        printf("* ");
        }
        printf("\n");
        }
    
    printf("La longitud es: %s ");
    
    
return 0;
}