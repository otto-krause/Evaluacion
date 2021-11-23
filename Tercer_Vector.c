#include<stdio.h>
#include<stdlib.h>
void tercera (int *a, int *b);
void cargar (int *cargo);
void main()
{
    int uno[10]={0}, dos[10]={0};
    printf("Ingrese los valores del primer vector: ");
    cargar (uno);
    printf("Ingrese los valores del segundo vector: ");
    cargar (dos);
    tercera (uno, dos);
    system("pause");
}
void cargar (int *cargo)
{
    for (int i=0;i<10; i++)
    {
        scanf("%d",&cargo[i]);
    }
}
void tercera (int *a, int *b)
{
    int tercer[10]={0};
    for (int i=0;i<10;i++)
    {
        if (i%2==0)
        tercer[i]=b[i];
        else
        tercer[i]=a[i];
        printf("%d, ", tercer[i]);
    }
}