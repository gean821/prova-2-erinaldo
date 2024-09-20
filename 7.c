#include<stdio.h>
#include<math.h>

//7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para //cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
//o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
//a média de cada aluno e se ele foi aprovado ou reprovado.(0.3 ponto)
int main() {
int notas[5];
float medias;

  printf("informe sua nota : ");
  for (int x=1; x<6; x++) {
    scanf("%d", &notas[x]);
  }  
  for (int x=1; x<6; x++) {
    medias= (notas[x]/1);
   printf("Aluno %d, sua media foi de %.2f\n",x, medias);
    if (medias<7) {
    printf("Aluno %d, você está reprovado.\n", x);
    }else{
      printf("Aluno %d, você está aprovado;\n",x);
    }
    
    
  
  
  
  }
}  