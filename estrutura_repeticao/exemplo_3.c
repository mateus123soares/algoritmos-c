#include <stdio.h>

int main()
{
    int resultado=0;
    int numero=0;
    
    for(int count=0; count < 5; count++){
        printf("Digite um valor");
        scanf("%i",&numero);
        resultado=resultado+numero;
    }
    
    printf("Soma dos valores %i \n", resultado);
    printf("Programa finalizado");
    return 0;
}