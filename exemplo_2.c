#include <stdio.h>

int main()
{
    int primeiro_valor=0;
    int segundo_valor=0;
    int resultado=0;
    
    printf("Insira o primeiro valor \n");
    
    if(scanf("%i",&primeiro_valor) == 0){
        printf("Apenas numeros inteiros são permitidos");   
    }
    
    printf("Insira o segundo valor \n");
    scanf("%i",&segundo_valor);
    
    if(primeiro_valor > segundo_valor){
        resultado = primeiro_valor + segundo_valor;
        printf("A soma total foi: %i \n",resultado);
    }
    else if(primeiro_valor = segundo_valor){
        printf("Os valores são iguais");
    }
    else {
        printf("Fim");
    }

    return 0;
}