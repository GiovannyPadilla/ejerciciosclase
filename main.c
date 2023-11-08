#include<stdio.h>
#include "../librerias/archivosum.h"
#include "../librerias/archivotrest.h"
#include "../librerias/archivodivi.h"
#include "../librerias/archivomulti.h"
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Ingrese el primer valor\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo valor\n");
    scanf("%d",&num2);
    printf("el resultado es: %d", suma(num1,num2));
    printf("el resultado es: %d", resta(num1,num2));
    printf("el resultado es: %d", multiplicacion(num1,num2));
    printf("el resultado es: %d", division(num1,num2));
    return 0;
}