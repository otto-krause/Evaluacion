#include<stdio.h>
#include<stdlib.h>
void Fibonacci(int fibo);
void main()
{
    int fibo=0;
    printf("Ingrese un valor entre 0 y 10 para calcular la sucesion: ");
    scanf("%d",&fibo);
    Fibonacci(fibo);
    system("pause");
}
void Fibonacci (int fibo)
{
    int F[11]={0};
    F[1]=1;
    switch (fibo)
    {
    case 0:
        printf("%d", 0);
        break;
    case 1:
        printf("%d, %d", 0, 1);
        break;
    default:
        printf("%d, %d, ", 0, 1);
        for (int I=2;I<=fibo;I++)
        {
        F[I]=F[I-1]+F[I-2];
        printf("%d, ", F[I]);
        }
        break;
    }
}