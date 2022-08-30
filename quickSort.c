#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int cont=0;

void troca(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int particao(int v[], int inicio, int fim) {
  int pivo = v[fim];
  int i = (inicio - 1);
  int j;
  for (j = inicio; j < fim; j++) {
    if (v[j] <= pivo) {
      i++;
      troca(&v[i], &v[j]);
    }
  }
  troca(&v[i + 1], &v[fim]);

  return (i + 1);
}

void quickSort(int v[], int inicio, int fim) {
  if (inicio < fim) {
    int pi = particao(v, inicio, fim);
    quickSort(v, inicio, pi - 1);
    quickSort(v, pi + 1, fim);
  }
}

//-------------
 int main(){
 	int *v,i,n;
 	printf("Quantidade de valores para o vetor:");
 	scanf("%d",&n);
 	v = malloc(sizeof(int)*n); // alocando espaco para o vetor
 	geraVet(v,n);
 	
    /*printf("Entre com dados para o vetor:");
 	for(i=0;i<n;i++)
 		scanf("%d",&v[i]);*/

	printf("Vetor recebido:\n");
	printVet(v,n);
 	
 	quickSort(v,0,n-1);
 	   
 	printf("\nVetor ordenado:\n",cont);
 	printVet(v,n);
 		
  return 0;		
 }

