#include <stdio.h>
#include <math.h>

int factorialRecursivo (int n){
    if (n==0){
        return 1;
    }else {
        return n * factorialRecursivo(n-1);    
    }
}
int main (){
    int x;
    printf("Ingrese un número: ");
    scanf("%d", &x);
    
    int R = factorialRecursivo(x);
    printf("El factorial de %d es: %d\n", x, R);
    
    system ("Pause");
    
    return 0;
    
}

    
    
    