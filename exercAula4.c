#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Estudante {
    char nome[50];
    int idade;
    float media;
};

int main() {
    FILE *arquivo;
    struct Estudante estudante;
    arquivo = fopen("estudantes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite as informações dos estudantes (nome, idade, média):\n");


    while (1){
         printf("Nome (ou 'sair' para encerrar): ");
         scanf("%s", estudante.nome);
         if (strcmp(estudante.nome, "sair") == 0) {
             break;
         }

         printf("Idade: ");
         scanf("%d", &estudante.idade);
         
         printf("Média: ");
         scanf("%f", &estudante.media);
         
         fprintf(arquivo, "%s %d %.2f\n", estudante.nome, estudante.idade, estudante.media);
    }

    fclose(arquivo);
    arquivo = fopen("estudantes.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("\nInformações dos estudantes:\n");

    while (fscanf(arquivo, "%s %d %f", estudante.nome, &estudante.idade, &estudante.media) != EOF) {
        printf("Nome: %s, Idade: %d, Média: %.2f\n", estudante.nome, estudante.idade, estudante.media);
    }

    fclose(arquivo);
    return 0;
}