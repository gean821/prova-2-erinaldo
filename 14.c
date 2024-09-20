#include<stdio.h>
#include<math.h>
// 14) Escreva um programa que apresente um menu com as seguintes opções:
// 1. Adição.
// 2. Subtração.
// 3. Multiplicação.
// 4. Divisão.
// 5. Sair.
// O programa deve solicitar dois números e realizar a operação
// escolhida. Deve continuar exibindo o menu até que o usuário escolha a opção de sair. 
int main(void) {
  int opcao;
  float num1, num2;

  do {

printf("\nMenu de Operações:\n");
printf("1. Adição\n");
printf("2. Subtração\n");
printf("3. Multiplicação\n");
printf("4. Divisão\n");
printf("5. Sair\n");
printf("Escolha uma opção: ");
 scanf("%d", &opcao);

  if (opcao >= 1 && opcao <= 4) {
    printf("Digite o primeiro número: ");
      scanf("%f", &num1);
    printf("Digite o segundo número: ");
      scanf("%f", &num2);
}

switch (opcao) {
  case 1:
printf("Resultado da adição: %.2f\n", num1 + num2);

break;
  case 2:
printf("Resultado da subtração: %.2f\n", num1 - num2);

break;
  case 3:
printf("Resultado da multiplicação: %.2f\n", num1 * num2);

break;
  case 4:
if (num2 != 0) {
printf("Resultado da divisão: %.2f\n", num1 / num2);
} else {
printf("Erro: Divisão por zero não é permitida!\n");
 }
break;
 case 5:
printf("Saindo do programa...\n");

break;
 default:
printf("Opção inválida! Tente novamente.\n");
}
} while (opcao != 5);

return 0;
}



