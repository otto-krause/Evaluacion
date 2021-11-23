#include<stdio.h>
#include<stdlib.h>
void impares (int a)
{
    int b = 1, cuadrado = 0;
    for (int i=1; i<=a; i++)
    {
        cuadrado = cuadrado + b;
        b = b + 2;
    }
    printf ("El cuadrado de %d es %d", a, cuadrado);
}
void main()
{
    int a = 0;
    printf ("Ingrese el numero del cual quiere calcular el cuadrado: \n");
    scanf("%d",&a);
    system("cls");
    impares(a);
}
