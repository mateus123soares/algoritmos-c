#include <stdio.h>

int main()
{   
    int quant_alunos=0;
    float nota1=0,nota2=0;
    float media_aluno=0;
    float media_turma=0;
    int count=0;
    int total_aprovados=0,total_reprovados=0,total_exame=0;
    
    printf("Digite o numero de alunos da turma \n");
    scanf("%i",&quant_alunos);
    
    count = quant_alunos;
    while(count > 0){
        printf("informe a nota 1");
        scanf("%f",&nota1);
        printf("informe a nota 2");
        scanf("%f",&nota2);
        
        media_aluno = ((nota1+nota2)/2);
        media_turma = media_turma + media_aluno;
        printf("Media do aluno: %2.f \n",media_aluno);
        
        if(media_aluno < 3){
            printf("Aluno Reprovado \n");
            total_reprovados++;
        }
        else if(media_aluno >= 3 && media_aluno < 6){
            printf("Aluno em Exame \n");
            total_exame++;
        }
        else {
            printf("Aluno Aprovado \n");
            total_aprovados++;
        }
        
        count--;
    }
    printf("Total de alunos aprovados: %i \n", total_aprovados);
    printf("Total de alunos em exame: %i \n", total_exame);
    printf("Total de alunos reprovados: %i \n", total_reprovados);
    printf("Media da turma foi: %2.f", media_turma/quant_alunos);
    printf("Fim da execução");
    return 0;
}