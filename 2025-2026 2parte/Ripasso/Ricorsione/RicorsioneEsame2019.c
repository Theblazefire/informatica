/*verificare in una tripla 
se esiste un numero positivo*/
#include<stdio.h>

int verifico(int* sca,int n,int i)
{
	int ris;
	/*caso base*/
	if (i+2==n)
	{//se siamo agli ultimi
		ris=1;
	}
	else
	{//passo induttivo
		ris=(//proprietà
			(sca[i]>0)&&(sca[i+1]>0)&&(sca[i+2]>0)
		)&&verifico(sca,n,i+1);//aumento il contatore
	}


	return ris;
}

int triplaPositiva(int* sca,int n)
{
	return verifico(sca,n,0);
}
/*funzione principale*/
int main()
{
	printf("ciao sono un programma,\n controllo se ci sono valori positivi in un tripla\n");	
	int n;
	printf("inserisci la lunghezza della tripla\n");
	scanf("%d",&n);
	if (n==3)
	{
		printf("inserisci i numeri\n");
		int scatola[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci il i° della sequenza\n");
			scanf("%d",&scatola[i]);
		}

		if (triplaPositiva(scatola,n))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("lo vedo che non %c una tripla ritenta!\n",130 );
	}
return 0;
}