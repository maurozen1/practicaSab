#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int i;
    float acumedad;
    float promedio;
    int continuar = 1;

    i = 0;
    acumedad = 0;
do
    {
        i++;
        printf("Ingrese su edad: ");
        scanf("%d",&edad);
        printf("Su edad es: %d\n",edad);
        acumedad = acumedad + edad;
        printf("DEsea continuar? 1/0");
        scanf("%d",&continuar);

    }while(continuar);

    promedio = acumedad / i;

    printf("El promedio de edad es: %2.n\",promedio);
    printf("El promedio de edad es: %2.f",promedio);

    return 0;
}
