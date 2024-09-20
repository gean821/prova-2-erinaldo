#include<stdio.h>
#include<math.h>
//3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
//respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
//média final da turma. (0.1 ponto)
//Entradas: 5 pares de valores (nota e peso) para cada aluno.
//Saída: a média ponderada de cada aluno e a média final da turma
int main() {
int alunos,pesos,somaMedias=0,somaPesos=0;
float notas,mp, mf;
  
for (int i=1; i<6;i++) {
  printf("Aluno,informe as notas e os pesos:\n");
  scanf("%f %d", &notas, &pesos);
  mp=(notas*pesos);
  printf("Aluno %d, sua media ponderada é %.2f\n",i,mp);
  
  somaMedias+=mp;
  somaPesos+=pesos;
  mf= (somaMedias /somaPesos);
}
  
  printf("A média final da turma é %.2f\n",mf);
}