#include<stdio.h>
#include<math.h>
//4. Escreva um programa que solicite ao usuário um número decimal e um valor de
//base de conversão (entre 2 e 16). O programa deve converter o número decimal
//para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.(0.1 ponto)

int main(void) {
int base,resto, decimal,indice=0;
char resultado[32];
  printf("informe um número decimal :\n");
  scanf("%d", &decimal);

  printf("informe um valor de base de conversão (entre 2 e 16:\n");
  scanf("%d", &base);

if (base<2||base>16) {
    printf("%d não é um valor de base correto.\n",base);
}

if (decimal==0) {
    printf("O resultado da conversão é: 0\n");
}

while (decimal>0) {
  resto= decimal % base;

  if (resto<10) {
   resultado[indice]= '0' +resto; //p numeros de 0 a 9
  }  else {
   resultado[indice]= "A" + (resto-10); //p numeros de 10 a 15
  } 
  

indice++;
    decimal/=base;
}
  printf("O resultado da conversão :\n");
  for (int i = indice - 1; i >= 0; i--) {
    printf("%c", resultado[i]);
  }
  printf("\n");
}
//Entrada do Usuário: O programa solicita ao usuário um número decimal e uma base de conversão.
//Validação da Base: Verifica se a base fornecida está entre 2 e 16.
//Conversão: A função converterParaBase realiza a conversão do número decimal para a base especificada, armazenando os dígitos resultantes em uma string.
//Exibição do Resultado: O resultado é impresso na ordem correta, invertendo a sequência dos caracteres armazenados.


//Se você inserir o número 10 e escolher a base 2, o programa exibirá "Resultado da conversão: 1010".
//Se você inserir o número 255 e escolher a base 16, o programa exibirá "Resultado da conversão