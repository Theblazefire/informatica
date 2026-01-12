/*
ESERCIZIO ARRAY 2 (5 punti)
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi,
contare quante coppie di interi (non necessariamente consecutivi) nella sequenza sono tali che uno
dei due interi divide l’altro. Ad esempio, la soluzione del problema per la sequenza [8, 3, 4, 12] è 3, in
quanto le coppie [8, 4], [3, 12] e [4, 12] sono tali che uno dei due interi divide l’altro.
*/
#include <stdio.h>
int verifica(int *sca, int n){
	int i=0;
	int count=0;
	while(i<n-1){
		int j=i;
		while(j<n){
			int prim=sca[i];
			int sec=sca[j];
			if( ( (prim % sec)==0) || ((prim % sec)==0) ){
				count++;
			}
			j++;
		}
		i++;
	}
	return count;
}
int main(){
	printf("inserisci lunghezza sequenza\n");
	int n;
	scanf("%d",&n);
	if(n>1){
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c della sequenza	\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		int count= verifica(sca,n);
		printf(" ho trovato %d coppie dividibili \n",count );
	}else{
		printf("accetto minimo due elementi	\n");
	}
	return 0;
}