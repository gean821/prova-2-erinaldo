#include<stdio.h>
#include<math.h>
// 16)Escreva um programa que apresente um menu com as seguintes opções:
// 1. Calcular o fatorial de um número.
// 2. Sair. O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O menu deve continuar sendo exibido até que o usuário escolha a opção de sair.
unsigned long long fatorial(int n) {
  if (n == 0 || n == 1) {
      return 1;
  }
  return n * fatorial(n - 1);
}

int main() {
  int opcao;
  int numero;

  do {
printf("\nMenu:\n");
printf("1. Calcular o fatorial de um número\n");
printf("2. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

if (opcao == 1) {
printf("Digite um número inteiro não negativo: ");
scanf("%d", &numero);

if (numero < 0) {
printf("Por favor, insira um número não negativo.\n");
} else {
printf("Fatorial de %d = %llu\n", numero, fatorial(numero));
  }
} else if (opcao != 2) {
printf("Opção inválida! Tente novamente.\n");
}
} while (opcao != 2);

  printf("Saindo do programa...\n");
  return 0;
}