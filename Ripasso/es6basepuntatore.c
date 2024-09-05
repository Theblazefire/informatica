/*
prendi un insieme e stampalo
tramite i puntatori
*/
#include <stdio.h>
#include <stdlib.h>
void* memoria()
{
	int *puntatore=(int*)malloc(1*sizeof(int));
	return puntatore;
}
int main()//funz principale
{
	/*input*/
	printf("inserisci una sequenza\n");
	int* scaTol= memoria();
	int n=0;
	int N=2;
	int c=0;
	do
	{
		if (n==N)
		{
			N*=2;
			scaTol=(int*)realloc(scaTol,N);
		}
		printf("insersci %d elemento\n", n);
		scanf_s("%d",scaTol+n);
		n++;
		printf("inserisci numero?(1->si 0->no)\n");
		scanf_s("%d",&c);
	}while(c==1);
		    // Stampa i numeri inseriti
    printf("Hai inserito i seguenti numeri: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", scaTol[i]);
    }
	free(scaTol);
	return 0;
}