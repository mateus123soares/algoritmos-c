#include <stdio.h>

int main()
{
    int maior_altura=0;
    int menor_altura=0;
    int quant_alunos=0;
    int altura=0;
    
    printf("Digite o numero de alunos\n");
    scanf("%i",&quant_alunos);
    
    for(int count=0; count < quant_alunos ; count++){
        printf("Digite a altura em cm\n");
        scanf("%i",&altura);
        
        if(count == 0){
            maior_altura = altura;
            menor_altura = altura;
        }
        else {
            if(maior_altura < altura){
                maior_altura = altura;
            }
            if(menor_altura > altura){
                menor_altura = altura;
            }
        }
    }
    
    printf("A maior altura foi %i \n", maior_altura);
    printf("A menor altura foi %i \n", menor_altura);
    printf("Programa finalizado");
    return 0;
}