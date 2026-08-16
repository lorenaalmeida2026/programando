#include <stdio.h>

//declaracao de variaveis

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Informe sua matricula: \n");
    scanf("%d", &matricula);

    printf("informe sua altura: \n");
    scanf("%.2f", &altura);

    printf("Informe o seu nome: \n");
    scanf("%s", &nome);

    printf("Nome do Aluno: %s - Matricula: %d \n"n nome, matricula);
    printf("idade do aluno: %d \n", idade);
    printf("Altura do aluno: %.2f \n", altura);

    returno 0;

}
