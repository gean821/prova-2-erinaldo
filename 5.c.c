#include<stdio.h>
#include<math.h>

//5. Escreva um programa que peça ao usuário para inserir 10 números inteiros. O
//programa deve contar quantos números são pares e quantos são ímpares, e exibir
//esses valores no final. (0.3 ponto)
//Entrada: 10 números inteiros.
//Saída: quantidade de números pares e ímpares.

int main(void) {
int n,somaPares=0,somaImpar=0;
  
  printf("Informe 10 Números inteiros:\n");
for (int x=1; x<11; x++) {
  scanf("%d", &n);

  if (n%2==0) {
    somaPares++;
  }else {
    somaImpar++;
  } 
}
printf("A quantidade de Pares é %d\n", somaPares);

printf("A quantidade de impares é %d\n",somaImpar);


}