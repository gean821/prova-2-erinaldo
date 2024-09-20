#include<stdio.h>
#include<math.h>
//12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
//número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
//que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
//Entrada: 6 números inteiros.
//Saída: paridade do número e a classificação adicional.

int main () {
int numeros;
   printf("Informe 6 números inteiros:\n");
      for (int x = 1; x <= 6; x++) {
          scanf("%d", &numeros);

          // Verifica se o número é par ou ímpar
          if (numeros % 2 == 0) {
              printf("Número %d: Par\n", numeros);
              // Verifica se é maior ou menor que 10
              if (numeros > 10) {
                  printf("E maior que 10.\n");
              } else {
                  printf("E menor ou igual a 10.\n");
              }
          } else {
              printf("Número %d: Ímpar\n", numeros);
              // Verifica se é menor que 50
              if (numeros < 50) {
                  printf("E menor que 50.\n");
              } else {
                  printf("E maior ou igual a 50.\n");
              }
          }
      }

      return 0;
  }
  