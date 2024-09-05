#include <stdio.h>
#include <stdlib.h>
int massimo(int * sca, int n)
{
	int max=sca[0];
	for (int i = 0; i < n; ++i)
	{
		if (sca[i]>max)
		{
			max=sca[i];
		}
	}
	return max;
}
int main()//dunzione principale
{
	int* scatola=(int*)malloc(1*sizeof(int));
	int c;
	int n=1;
	int N=2;
	printf("inserisci una sequenza trovo il massimo appen hai finito di inserirla metti 0\n");
	
	do
	{
		if (n==N)
	    {
	    	N*=2;
	    	scatola=(int*) realloc(scatola,N);
	    }
	   printf("insersci un numero\n");
	   scanf_s("%d", scatola+n);	
	   n++;
	/*verifica se l'utente vuole inserire altr numeri*/
	   //printf("hai inserito %d\n", scatola[n-1]);
       printf("vuoi inserire un altro numero\n");
       printf("1->si 0->no\n");
       scanf_s("%d",&c);
	}while(c==1);
	int max=massimo(scatola,n);
	printf("il massimo= %d\n", max);

	free(scatola);
	
	return 0;
}