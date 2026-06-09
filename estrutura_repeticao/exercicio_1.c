#include <stdio.h>

int main()
{
    int fatorial=1;
    int fatorial_while=1;
    int numero=0;
    
    printf("Digite um numero inteiro positivo\n");
    scanf("%i",&numero);
    
    for(int count=numero; count > 0; count--){
        fatorial=fatorial*count;
    }
    
    while(numero > 0){
        fatorial_while=fatorial_while*numero;
        numero--;
    }
    
    printf("O fatórial é %i \n", fatorial);
    printf("O fatórial é %i \n", fatorial_while);
    printf("Programa finalizado");
    return 0;
}