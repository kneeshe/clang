#include <stdio.h>
#include <stdlib.h>

//função que altera os valores
void trocar_valores(int *a, int *b){
  int var_aux = 0; //valor auxiliar para armazenar o valor temporáriamente
  var_aux = *a;
  *a = *b;
  *b = var_aux;
}

int main(){
  
  int valor_um = 0;
  int valor_dois = 0;
  int *p_valor_um = &valor_um;
  int *p_valor_dois = &valor_dois;

  printf("Digite o primeiro valor: ");
  scanf("%d", &valor_um);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor_dois);

  printf("Os valores digitados foram: a -> %d e b -> %d\n", *p_valor_um, *p_valor_dois);

  //chamada de função
  trocar_valores(p_valor_um, p_valor_dois);

  printf("Os valores trocados são: a -> %d e b -> %d\n", *p_valor_um, *p_valor_dois);
  

  return 0;
}
