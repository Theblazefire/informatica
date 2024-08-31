#include <stdio.h>
int positivo(int sca[],int n)
{
	int q;
	if (n==0)
	{//caso base   
	//                
		q=1;
	}
	else
	{//passo ricorsivo 
		q=sca[n-1]>=0 && positivo(sca,n-1);
		
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