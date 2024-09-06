#include <stdio.h>
void EsattamenteUnoPariGrande(int sca[],int n,int maggior10,int pari)
 {
	
	if (n==0)
	{//caso base
	if (maggior10==2&&pari==1)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}	
	}
	else
	{//passo ricorsivo 30 11 7
		if (sca[n-1]>=10)
		{
			maggior10=maggior10+1;
			if (sca[n-1]%2==0)
		    {
			  pari= pari+1;

		    }
			
		}
	}
	EsattamenteUnoPariGrande(sca,n-1,maggior10,pari);
 }

int main()//funzione principale
{
	int n=3;
	int scatola[n];
	printf("verfico se la tripla inserita contiene due elementi maggiori di 10 e un unico elemento pari\n");
	printf("inserisci una tripla\n");
	for (int i = 0; i < n; ++i)
	{
		printf("insersci %d elemento\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}
	EsattamenteUnoPariGrande(scatola,n,0,0);
	
	return 0;
}