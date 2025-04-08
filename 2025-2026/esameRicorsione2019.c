/*
Esame 3 Luglio
Realizzare un'applicazione
TripleTuttiDiversi definita come segue.
L?applicazione contiene una funzione ricorsiva tripleTuttiDiversi che verifica, all?interno di un array di interi ricevuto come parametro, se ogni tripla di interi adiacenti nell?array è composta da interi tutti diversi fra loro. Ad esempio, [1, 5, 6, 7, 5, 1] è un?istanza positiva del problema, in quanto ciascuna delle triple [1, 5, 6], [5, 6, 7], [6, 7, 5], e [7, 5, 1] è composta da tre interi fra loro diversi. 
 
*/
int verifica(sca,n,0)
{
	int ris;
	if (i+2==n)
	{
		ris=1;
	}
	else
	{
		ris=(sca[i]!=)
	}
}//ciusura verifica
int TripleTuttiDiversi(int* sca,int n)
{
	return verifica(sca,n,0);
}
//dunzione principale
int main()
{
printf("ciao sono un programma che verifica se in una tripla ci sono numeri tutti diversi\n");
printf("inserisci il numero di elementi\n");
int n;
int scatola[n];
scanf("%d",&n);
for (i = 0; i < n; i++)
{
	printf("inserisci l'elemento %d sella sequenza",i+1);
	scanf("%d",&scatola[i]);
}
if (TripleTuttiDiversi(scatola,n))
{
	printf("1");
}
else
{
printf("0");
}
}
