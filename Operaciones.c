#include<stdio.h>
#include<stdlib.h>
void operaciones (int *a, int suma);
int cargar (int *cargo);
void main()
{
    int uno[10]={0}, suma=0;
    printf("Ingrese los valores del vector: ");
    suma=cargar (uno);
    operaciones (uno, suma);
    system("pause");
}
int cargar (int *cargo)
{
    int suma=0;
    for (int i=0;i<10; i++)
    {
        scanf("%d",&cargo[i]);
        suma = suma + cargo[i];
    }
    return suma;
}
void operaciones (int *a, int suma)
{
    int producto=1,promedio=0, debajo=0;
    promedio=suma/10;
    for (int i=0;i<10;i++)
    {
        producto=producto+a[i];
        if (a[i]<promedio)
        debajo++;
    }
    printf("El promedio del vector es %d\nLa suma es %d\nLa cantidad de elementos debajo del promedio es %d\nEl producto es %d\n", promedio, suma, debajo, producto);
}