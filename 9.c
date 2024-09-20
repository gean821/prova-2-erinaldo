#include<stdio.h>
#include<math.h>

//9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
//maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
//vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)

int main () {
int nota1,nota2;
float medias;

  printf("Aluno,informe suas notas 1 e 2: ");
for (int x=1; x<6; x++){
  scanf("%d %d", &nota1, &nota2);

  medias = (nota1+nota2) /2.0;
  printf("aluno %d, a sua média foi %.2f\n", x, medias);
  if (medias>=5 && medias <=6.9) {
    printf("aluno %d, você vai para a recuperação.\n",x);
  }else if (medias<5) {
    printf("Aluno %d, você está reprovado.\n", x);
  }else if (medias>=7) {
    printf("Aluno %d, você está aprovado.\n", x);
  }
}
}
