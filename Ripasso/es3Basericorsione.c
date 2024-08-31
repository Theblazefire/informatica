#include <stdio.h>
int bo(int sca[], int n)
{
	int q;
	if (n==0)
	{//caso base
		q=0;//algortimo di esistenza
	}
	else
	{//passo indutivo
		q=((sca[n-3]+sca[n-2]==sca[n-1])||(sca[n-3]*sca[n-2]==sca[n-1]))||bo(sca,n-1);
	}
	return	q;
}

int main()
{
	printf("dammi una sequenza\n");
	printf("verifico se esiste una tripla (a,b,c) ->a+b=c\n");
	printf("oppure a*b=c\n");
	printf("inserisci lunghezza della sequenza\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	for (int i = 0; i < n; ++i)
		{
			printf("inserisci elemento %d della sequenza\n", i+1);
			scanf_s("%d",&scatola[i]);
		}
	if (bo(scatola,n))
		{
			printf("esiste una tripla che sodisfa la condizione\n");
		}
		else
		{
			printf("non esiste una tripla che sodisfa la condizione\n");
		}	
	return 0;
}