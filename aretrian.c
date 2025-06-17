#include <stdio.h>
#include <math.h>

int main() {
    double areaTriangulo (double L1, double L2, double L3)
    
    double p = (L1 + L2 + L3)/2;
    double A = sqrt(p*(p-L1)*(p-L2)*(p-L3));
    
    return A;
    }
    int main(){
    printf("Escribe el valor del lado 1:"); scanf( "%f" , &L1);
    printf("Escribe el valor del lado 2:"); scanf("%f" , &L2);
    printf("Escribe el valor del lado 3:"); scanf("%f", &L3);
    
    double A = areaTriangulo(L1,L2,L3);
    printf("El area del triángulo es: %.2f\n", A);
    return 0;
    }