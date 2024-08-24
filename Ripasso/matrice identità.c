#include<stdio.h>
/*
realiza una matrice identità con dim 
inserira dall'utente
gli arrey

*/
//funz principale
int main()
{	
	//imput
	printf("inserisci la dimensione della matrice\nidentita'\n");
	int dim;
	scanf_s("%d",&dim);
	int scatola[dim][dim];//arrey bidimensione
	//riepi la matrice
	for (int i = 0; i < dim; ++i)//riga
	{
		for (int j = 0; j < dim; ++j)//colonna
		{
			//crea la diagonale della matrice I
			if (i==j)
			{
				scatola[i][j]=1;
			}
			else
			{
				scatola[i][j]=0;
			}
		}
	}
	//stampa la matrice
	/*
	1 0 0
	0 1 0
	0 0 1
	*/
	for (int i = 0; i < dim; ++i)//riga
	{
		for (int j = 0; j < dim; ++j)//colonna
		{
			printf("%d ", scatola[i][j]);
			
		}
		printf("\n");
	}



	return 0;
}