#include<stdio.h>
#include<math.h>

//6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
//valor inicial e um valor final. O programa deve então exibir todos os números primos
//dentro desse intervalo. Se não houver números primos no intervalo, o programa
//deve informar isso. (0.3 ponto)
int main(void) {
int vi,vf,n;
  printf("informe dois números inteiros positivos(valor  inicial e final.) :\n");
  scanf("%d %d", &vi, &vf);

if (vi<1 ||vf<1 || vi>vf) {
   printf("Insira novamente, o numero final/e ou final está fora da ordem necessária.\n");
}
  printf("Números primos entre %d e %d:\n", vi, vf);
  
  for (int n =vi; n<=vf; n++) { //coloquei o n para percorrer o loop, do vi até o vf. Será ele que irá contar o intervalo do vi até o vf.
    if (n<2) continue; 

  int primo=1; //assume que é primo
      
for (vi = 2; vi < n; vi++) {
  if (n % vi == 0) {
   primo=0; // n não é primo
   break; // Sai do loop
  }
    
    
  }

  
// Se n é primo, exibe
  if (primo) {
    printf("%d ", n);
  } 
} 
// Se não encontrou primos
if (vi < 2 && vf < 2) {
  printf("Não existem números primos no intervalo.\n");

}  
  

}
