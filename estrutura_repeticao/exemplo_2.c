#include <stdio.h>

int main()
{
    float resultado=0;
    float numero=0;
    int fim=0;
    int contador=0;
    float media=0;
    
    do{
        printf("Digite um número \n");
        scanf("%f",&numero);
        printf("Deseja finalizar o programa? Digite 1 para Sim e 0 para Não \n");
        scanf("%f",&fim);
        
        resultado = resultado+numero;
        contador++;
    }while (fim == 0);
    
    media = resultado / contador;
    printf("Soma dos valores %f \n", resultado);
    printf("Media dos valores %f \n", media);
    printf("Programa finalizado");
    return 0;
}