#include <stdio.h>
#include<stdlib.h>
#include "pilha.h"


int main() {
	
	int n = 5;
	
	Pilha *pi = create(n);
	
	add(pi, 2);
	add(pi, 6);
	add(pi, 8);
	add(pi, 1);
	add(pi, 4);
	
	 int base = bottom (pi);
	 int top = topo(pi);
	 
	 printf("\nElemento base %d , elemento topo %d \n\n",base,top);
	
	 printf("Quantidade de elementos %d\n\n", size(pi));
	 
	 printf("Remover elemento do topo, retorna: 1 - true e  0 - false. Resultado : %d \n\n", pop(pi));
	 
	 printf("Quantidade de elementos apos a remocao %d\n\n", size(pi));
	
	 printf("Recebe um inteiro.Retorna -1 se o elemento nao foi encontrado e o indice se elemento encontrado. Resultado : %d \n\n", find(pi, 1));
	 
	 printf("Retorna verdadeiro se a Pilha está cheia. Resultado : %d \n\n", isFull(pi));
	
	 printf("Retorna verdadeiro se a Pilha está vazia. Resultado : %d \n\n", isEmpty(pi));
	 
	 printf("Retorna verdadeiro se remove todos os elementos da pilha: %d \n\n", clear(pi));
	 
	 printf("Quantidade de elementos apos remover todos: %d\n", size(pi));
	 
	return 1;
}
