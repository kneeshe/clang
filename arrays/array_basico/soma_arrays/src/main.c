#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(){

  int array[ARRAY_SIZE];
  int sum_data_array = 0;

  printf("--- Soma de valores dentro de um array\n\n");
  
  // os numeros são lidos e armazenados no array nessa função
  printf("Digite 10 numeros: \n");
  for(int i = 0; i < 10; i++){
    printf("%do numero: ", i+1);
    scanf("%d", &array[i]);
  }

  // aqui, é feito um for pelo array somando os valores e salvando eles em uma variavel auxiliar
  for(int j = 0; j < ARRAY_SIZE; j++){
    sum_data_array += array[j];
  }

  printf("O valor total dos elementos no array é: %d\n", sum_data_array);
  
  return 0;
}
