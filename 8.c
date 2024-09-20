#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
//tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
//maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
//para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)
//Entrada: palpites do usuário.
//Saída: dicas (maior/menor) e resultado final (acertou ou //esgotou tentativas)

int main(void) {
  int Nsorteado,palpites,tentativas =7;
  srand(time(0));
  Nsorteado=rand() % 100 +1;
  
  printf("Tente adivinhar o número sorteado entre 1 a 100:\n");
for (int i=1; i<=tentativas; i++) {
    printf("insira seu palpite :\n");
    scanf("%d", &palpites);
  if (palpites<1 || palpites>100) {
    printf("numero informado inválido, informe novamente.\n");
   i--; //serve para não contar essa tentativa inválida.
  continue;
  }
  if (palpites==Nsorteado){
    printf("Parabéns, você acertou o número sorteado.\n");
    return 0;
  }else if (palpites<Nsorteado) {
    printf("O número %d informado é menor que o sorteado.\n",palpites);
  }else if (palpites>Nsorteado) {
    printf("O numero %d informado é maior que o sorteado.\n",palpites);
  }
  
}
  printf("voce esgotou suas tentativas, o numero sorteado era %d\n",Nsorteado);
}

  
  