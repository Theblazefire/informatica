#include <stdio.h>

int pari(int sca,int ind)
{
	int q;
	if (ind==0)
	{//caso base 
		
		q=1;//deve essere positivo altrimenti non torna indietro
	}
	else
	{//passo ricorsivo
		q=(sca[ind-1]%2==0)&&(pari(sca,ind-1))
	}
return	q;
}

int main()//funzione principale
{
	/*input*/
	printf("verifico se hai inserito una sequenza positiva\n");
	/*prendi lunghezza*/
	printf("lunghezza della sequenza?\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	/*prendi gli elementi*/
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci l'elemento %d della sequenza\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}
	
	if(positivo(scatola,n))
	{
		printf("la sequenza	e' tutta positiva\n");
	}
	else
	{
		printf("la sequenza	non e' tutta positiva\n");
	}
	return 0;
}