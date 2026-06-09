#include <stdio.h>

int main()
{
    float salario=0;
    
    printf("Digite o salário do funcionario \n");
    scanf("%f",&salario);
    
    for(int count=2001; count <= 2026; count++){
        salario=salario *(1.0 + (1.5 / 100.0));
    }
    
    printf("O salário do funcionario é %2.f \n", salario);
    printf("Programa finalizado");
    return 0;
}