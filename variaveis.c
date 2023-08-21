#include <stdio.h>

int main() {
  char nome[50];
  int idade[10];
  char matricula[20];
  char endereço[40];
  char curso[30];
  int periodo[20];
  char disciplinas[100];
  int mensalidade[200];

  printf("Cadastro do usuario");

  printf("\nDigite seu nome:");
  fgets(nome, 50, stdin);

  printf("\nDigite sua idade:");
  fgets(idade, 10, stdin);

  printf("\nDigite sua matricula:");
  fgets(matricula, 20, stdin);

  printf("\nDigite seu endereço:");
  fgets(endereço, 40, stdin);

  printf("\nDigite seu curso:");
  fgets(curso, 30, stdin);

  printf("\nDigite seu periodo:");
  fgets(periodo, 20, stdin);

  printf("\nDigite suas disciplinas:");
  fgets(disciplinas, 100, stdin);

  printf("\nValor da mensalidade:");
  fgets(mensalidade, 200, stdin);

}