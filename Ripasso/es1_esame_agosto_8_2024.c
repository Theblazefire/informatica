#include <stdio.h>
int EsattamenteUnoPariGrande(int sca[],int n)
{
	int q;
	if (n==0)
	{//caso base
		q=1;
	}
	else
	{//passo ricorsivo
		if (// 17 12 16
			(sca[n-1]<10)&&(sca[n-2]<10)||
			(sca[n-2]<10)&&(sca[n-3]<10)
		   )
		{
			q=0;
		}
		else
		{
			if (((sca[n-2]%2==0)&&(sca[n-3]%2!=0))||
				((sca[n-2]%2!=0)&&(sca[n-3]%2==0))
			   )
			{
				q=EsattamenteUnoPariGrande(sca,n-1);
			}
			if (((sca[n-2]%2==0)&&(sca[n-1]%2!=0))||
				((sca[n-2]%2!=0)&&(sca[n-1]%2==0))
			   )
			{
				q=EsattamenteUnoPariGrande(sca,n-1);
			}
		}
	}


	return q;
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
	if (EsattamenteUnoPariGrande(scatola,n))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}