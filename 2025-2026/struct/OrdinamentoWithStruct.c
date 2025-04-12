#include <stdio.h>
#include <math.h>
typedef struct punto
{
	float x;
	float y;
}PUNTO;
void scambia(PUNTO *sca,int i,int j)
{
	PUNTO temp= sca[i];
	sca[i]=sca[j];
	sca[j]=temp;
}//chiusura scambia
void ordina(PUNTO *sca,int n)
{
	int verifica=1;
	int NonOrdinato=n-1;
	while (NonOrdinato>0 && verifica)
	{
		verifica=0;
		for (int j = 0; j < NonOrdinato; j++)
		{
			if (distanza(&sca[j+1])<distanza(&sca[j]))
			{
				scambia(sca,j,j+1);
				verifica=1;
			}//chiusura if
			
		}//chiusura for
		NonOrdinato--;
	}//chiusura while
}//ordina
float distanza(PUNTO* p)
{
	return sqrt( p->x*p->x + p->y*p->y );
}
void stampa(PUNTO *scatola,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("punto (%2.f,%2.f) distanza = %2.f\n",scatola[i].x,scatola[i].y,distanza(&scatola[i]));
	}
}//chiusura stampa
int main()
{
		printf("Ciao sono un programma che riordina un array di punti\n");
		printf("rispetto all'origine\n");
		printf("inserisci la lunghezza dell'array\n");
		int n;
		scanf("%d",&n);
		PUNTO scatola[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci coordinata x\n");
			scanf("%f",&scatola[i].x);
			printf("inserisci coordinata y\n");
			scanf("%f",&scatola[i].y);
		}
		ordina(scatola,n);
		stampa(scatola,n);
}
