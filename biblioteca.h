#include <stdio.h>
#include <stdlib.h>

//-------------------------------
void printVet(int v[], int n){
	int i;
 	for(i=0;i<n;i++)
 		printf("%d |",v[i]);
 	printf("\n");	
} 		
//------------------------------
void geraVet(int v[],int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	  v[i] = rand()%50;
}
//-----------------------------
