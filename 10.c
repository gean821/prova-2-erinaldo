#include<stdio.h>
#include<math.h>
//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais). (0.4 ponto)
//Entrada: 10 idades.
//Saída: a classificação etária para cada idade.

int main () {
  int idade;

  printf("informe a sua idade :\n");
  for (int x=1; x<11; x++) {
    scanf("%d", &idade);
    if (idade<=12 ) {
      printf("Criança.\n",x);
    }else if (idade>12 && idade<18) {
      printf("Adolescente\n",x);
    }else if (idade>17 && idade <65){
      printf("Adulto\n",x);
    }else
      printf("idoso\n",x);
    
    
  }
}