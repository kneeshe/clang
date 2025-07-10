#include <stdio.h>
#include <stdlib.h>

// define o tamanho do array
#define ARRAY_SIZE 8

int main(){

  int array[ARRAY_SIZE];
  int maior_numero = 0;
  int menor_numero = ARRAY_SIZE; //associa o menor valor ao tamanho do array; gambiarra
  printf("Digite os valores: \n");

  // escreve os valores no array e compara o maior e o menor
  for(int i = 0; i < ARRAY_SIZE; i++){
    printf("Digite o %do numero: ", i+1);
    scanf("%d", &array[i]);
    if(array[i] > maior_numero){
      maior_numero = array[i];
    }
    if(array[i] < menor_numero) {
      menor_numero = array[i];
    }
  }

  printf("Esses são os numeros digitados: \n");
  for(int j = 0; j < ARRAY_SIZE; j++){
    printf("%d\n", array[j]);
  }

  printf("Esses são os maiores e os menores numeros: %d e %d\n", maior_numero, menor_numero);

  return 0;
}
