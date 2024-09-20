//2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
//(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
//inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
//laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
//ponto)
//Entradas: número inteiro positivo.
//Saída: informar se o número é perfeito ou não

#include<stdio.h>
#include<math.h>
int main (void) {
int numero, soma;
  printf("informe um número inteiro positivo :\n");
  scanf("%d", &numero);

for (int i=1; i < numero; i++) {
  if (numero%i==0 )   {
  soma += i;  //aqui foi usado a variavel i para usar como os divisores do número inserido. Que pode ser qualquer um número.Fiz ele aumentar de 1 a 1, e como não são todos que podem ser divididos pelo numero e logo serem perfeitos, adicionei uma condição, q todos q forem dividir entrar na variável "soma". Para isso usei += que basicamente soma o i á soma. assim sei que os que passarem pela condição entrarão dentro da variável "soma".
  }
}
  
if (soma==numero) {
  printf("É um número perfeito\n");
}else{
  printf("O número %d inserido não é um número perfeito\n", numero); 
}         
//se a soma dos numeros de 1 até a variavel "numero" é igual ao numero, quer dizer q ele logo é divisivel, então é perfeito."
// aqui o que temos que entender é que o for ve i por i e se for o número for divisivel pelo i ele entra na variavel soma, isso somando 1 por 1 e vendo se é divisivel até chegar na quantidade que for determinada. Assim soma-se aqueles numeros que são divididos e se a soma der igual ao numero é perfeito.
  
}