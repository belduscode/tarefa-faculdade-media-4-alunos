#include <stdio.h>

//Defini��o de constantes para n�meros de alunos, n�mero de notas e a m�dia para aprova��o
#define num_alunos 4
#define num_notas 4
#define media_aprovacao 8.0

int main() {

    //VARI�VEIS
    float notas[num_alunos][num_notas]; //Matriz para armazenar as notas dos alunos
    float media;                        //Vari�vel para armazenar a m�dia das notas
    float soma;                         //Vari�vel para armazenar a soma das notas

    //ENTRADA
    //Loop para ler as notas dos alunos
    for (int i = 0; i < num_alunos; i++) { 
        printf("Digite as %d notas do aluno %d:\n", num_notas, i + 1);

        //Soma das notas inicializada com zero
        soma = 0;    

        //Loop para ler cada nota do aluno
        for (int j = 0; j < num_notas; j++) {
         printf("Nota %d: ", j + 1);
         scanf("%f", &notas[i][j]);

         //Combinando o valor da soma com a vari�vel notas [i] = alunos, [j] = notas
         soma += notas[i][j];  
        }
        
        //PROCESSAMENTO
        //Calcula a m�dia das notas do aluno
        media = soma / num_notas;

        //Armazena a m�dia no array de m�dias
        notas[i][num_notas] = media;
    }

        //SA�DA
        //Mostra o resultado dos alunos
        printf("\nRESULTADOS DOS ALUNOS:\n");
            for (int i = 0; i < num_alunos; i++){

            //Recupera a m�dia armazenada
            media = notas[i][num_notas];

        //Verifica��o da m�dia para aprova��o
        if (media >= media_aprovacao) {
            printf("Aluno %d: Media = %.2f, Status: Aprovado\n", i + 1, media);
        } else {
            printf("Aluno %d: Media = %.2f, Status: Reprovado\n", i + 1, media);
        }
    }

    return 0;
}
