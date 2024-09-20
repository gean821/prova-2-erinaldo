#include<stdio.h>
#include<math.h>
//11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
//classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
//(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto

int main () {
float notas;
  printf("informe sua nota : ");

for (int x=1; x<9; x++) {
  scanf("%f", &notas);
  
  if (notas>8 && notas<11) {
  printf("A\n", x);
  }else if (notas>6 && notas<=8.9){
    printf("B\n", x);
  }else if (notas>=5 && notas <7){
    printf("C\n", x);
  }else if (notas>2.9 && notas <=4.9){
    printf("D\n",x);
  }else
    printf("F\n", x);
  
  
}
}