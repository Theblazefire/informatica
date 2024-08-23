#include<stdio.h>
/*
realiza una matrice che da l'utente
gli arrey

*/
//funz principale
int main()
{	
	//input
	printf("inserisci numero righe\n");
	int Irig;
	scanf_s("%d",&Irig	);

	printf("inserisci numero colonne\n");
	int Jcol;
	scanf_s("%d",&Jcol	);
	//assegna dimensione arrey bidimensione
	int scatola[Irig][Jcol];
	//inserisci elementi nella matrice
	for (int i = 0; i < Irig; ++i)
	{
		for (int j = 0; j < Jcol; ++j)
		{
			printf("inserisci elemento situato\nnella matrice %d%d",i,j);
			scanf_s("%d",&scatola[i][j]);
		}
	}
	//stampa la matrice
	for (int i = 0; i < Irig; ++i)
	{
		for (int j = 0; j < Jcol; ++j)
		{
			printf("%d ",scatola[i][j]);
		}
		printf("\n");
	}
	return 0;
}