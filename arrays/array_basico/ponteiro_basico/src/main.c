#include <stdio.h>
#include <stdlib.h>


int main(){
  
  int numero = 0;
  int *p_numero = &numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  printf("Voce digitou o seguinte numero: %d", numero);

  printf("\n\n");

  printf("Agora modifique o numero usando o ponteiro: ");
  scanf("%d", p_numero);

  printf("O numero agora é: %d\n", *p_numero);

  return 0;
}
