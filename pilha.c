#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
	

struct pilha {
		int max;
		int contador; 
		int *valor; 
	} ;
	
	typedef struct pilha Pilha;
	
Pilha* create(int n){ //1
		
		Pilha *pi = (Pilha*) malloc(sizeof(Pilha)); //1
			///complexidade espacial -> O (2) = O(c). constante. 

		if(pi == NULL){//1
			return NULL;//1
		}else{
			pi->valor = (int*) malloc(n * sizeof(int)); //1
			pi->max = n; //1
			return pi; //1
		}
		pi -> contador = 0; //1
	}
	//complexidade temporal -> O(7) = O(c). constante.
	
int add(Pilha *pi, int e){// 2
	int posicao1;// 1 
		///complexidade espacial -> O (3) = O(c). constante.
	if(pi != NULL && pi -> contador < pi -> max){ //1
		posicao1 = pi->contador; //1
		pi -> valor[posicao1] = e; //1
		pi->contador++; //1
		
		///complexidade temporal -> O (5) = O(c). constante.
	}
}

int topo(Pilha *pi){ //1

	///complexidade espacial -> O (2) = O(c). constante.
	if(pi != NULL && !isEmpty(pi)){ //1
		int posicaoX = pi-> contador - 1; //1 //1
		return pi -> valor[posicaoX];	//1
			///complexidade temporal -> O (4) = O(c). constante.
	}
}


int pop(Pilha *pi){ //1
	///complexidade espacial -> O (2) = O(c). constante.
	if(pi == NULL){ //1
		return 0; //1
	}else{
		int posicaoX = pi-> contador - 1; //1 //1
		pi -> valor[posicaoX]; //1
		pi -> contador --; //1
		
		return 1; //1
		
		///complexidade temporal -> O (6) = O(c). constante.
	}
}

int size(Pilha *pi){ //1
	///complexidade espacial -> O(1) = O(c). constante.
	if(pi-> contador <= pi->max) //1
		return pi->contador; //1
}
     ///complexidade temporal -> O (2) = O(c). constante.

int bottom(Pilha *pi){ //1
	///complexidade espacial -> O (1) = O(c). constante.
	if(pi != NULL && !isEmpty(pi)){ //1
		return pi -> valor[0]; //1
	}else
	return -1; //1
	///complexidade temporal -> O(3) = O(c). constante.
}


int find(Pilha *pi, int x){ ///2
	int i; //1
	///complexidade espacial -> O(3) = O(c). constante.
	for(i = 0; i < pi->contador; i++){ // pi->contador = n;
		printf("(%d) -> %d\n", i, pi->valor[i]); // n
		if(x == pi->valor[i]){  //n
			return i; //1
		}
	}
	return -1;    //1
	///complexidade temporal -> O (1 + n + n + n +1) = O(2 + 3n). linear.
}

int isFull(Pilha *pi){ //1
	///complexidade espacial -> O (1) = O(c). constante.
	if(pi->contador == pi->max -1){ //1
		return 1; //1
	}else{
	return 0; //1
	}
	///complexidade temporal -> O (3) = O(c). constante.
}
int isEmpty(Pilha *pi){ //1
	///complexidade espacial -> O (1) = O(c). constante.
	if(pi == NULL){ //1
		return 1; //1
	}
	if(pi->contador <= 0) //1
		return 1; //1
	else
		return 0; //1
	///complexidade temporal -> O (4) = O(c). constante.
	
}
int clear(Pilha *pi){ //1
		///complexidade espacial -> O(1) = O(c). constante.
	if(pi != NULL){ //1
		free(pi->valor); //1
		free(pi); //1
		return 1; //1
	}else{ 
		return 0; //1
 	}
 	///complexidade temporal -> O(5) = O(c). constante.
}


 
