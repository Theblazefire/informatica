#include <stdio.h>
	int verifica(int* sca,int n, int i)
	{
			int ris;
			if (i+2==n)
			{
				ris=1;
			}
			else
			{ 
			ris= (
			   ( (sca[i]>=10 && sca[i+1]>=10)||
			     (sca[i]>=0 && sca[i+2]>=10)||
				 (sca[i+1]>=10 && sca[i+2]>=10)			     
               ) 
			       && 
			   ( (sca[i]%2==0 && sca[i+1]%2==0)||
			     (sca[i]%2==0 && sca[i+2]%2==0)||
				 (sca[i+1]%2==0 && sca[i+2]%2==0)
			   ) && verifica(sca,n,i+1) 
			    );
 			}
 			return ris;
	}//chiusura verifica
	int EssattamenteUnoPariGrande(int* sca,int n)
	{
	return verifica(sca,n,0);
	}
int main()
{
	printf("sono un programma che controllo un tripla di elementi sopra o uguale al 10, uno dei quali e' pari");
	printf("inserisci il numero dei elememti da inserire");
	int n;
	scanf("%d", &n);
	int scatola[n];
	for (int i = 0; i < n; i++)
	{
		printf("inserisci il %d",i+1);
		scanf("%d",&scatola[i]);
	}
	if (EssattamenteUnoPariGrande(scatola,n))
	{
		printf("1 \n");
	}
	else
	{
	printf("0 \n");
	}
}