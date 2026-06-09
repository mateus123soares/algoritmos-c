#include <stdio.h>

int main()
{
    int numero=0;
    int count=0;
    int resultado=0;
    
    printf("Digite o numero de alunos\n");
    scanf("%i",&numero);
    
    while(count <= 10){
        resultado = numero*count;
        printf("%i X %i = %i \n",numero,count,resultado);
        count++;
    }
    return 0;
}