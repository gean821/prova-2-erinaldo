//1. Escreva um programa em C que solicite ao usuário o valor inicial de um
//investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
//dinheiro será investido. O programa deve calcular o valor final do investimento ao
//final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
//acumulado ano a ano. (0.1 ponto
#include<stdio.h>
#include<math.h>

int main (void) {
 float valor_inicial, juros_anual,vf_ano, vf;
int anos;

printf("Qual o valor inicial do investimento?\n");
scanf("%f", &valor_inicial);

printf("Quantos anos você irá investir?\n");
scanf("%d", &anos);
  
printf("A taxa de juros anual será de (em porcentagem) :\n");
scanf("%f", &juros_anual);
  juros_anual= (juros_anual/100);

  printf("\nTabela de Valores Acumulados:\n"); 
  printf("Ano\tValor Acumulado\n"); //o \t serve para alinhar, dar um espaço e ficar certinho"
  printf("---------------------\n");

for (int i=1; i<= anos; i++) {
  vf_ano= valor_inicial * pow (1 + juros_anual, i);
  printf("%d\t%.2f\n", i, vf_ano); //aqui coloquei %d primeiro para ja aparecer o ano, e o\t para o ano se alinhar à tabela que eu fiz.

}
  vf= valor_inicial * pow (1+ juros_anual, anos);
printf("\nO valor final do investimento após %d anos será de %.2f\n", anos, vf);




    
  
}