/*
specifica
input (x1..xn)
pre-condizione (x1..xn) app Z
output q variabile booleana
post-condizione q se è vera esiste una
tripla incui la somma di alcuni elementi danno
10. q è falsa allora nella sequenza non esiste.
Problema condizione di esistenza universale

*/
#include <stdio.h>
/*funz controlla la sequenza*/
int tripleSomma10(int sca[],int n)
{
	int q=1;//variabile booleana
	int i=0;//variabile contatore
	while(i<n-2&&q)
	{
		if (!((sca[i]+sca[i+1]==10)||(sca[i]+sca[i+2]==10)||(sca[i+1]+sca[i+2]==10)))
		{
			q=0;
		}
		i++;

	}
//restitusci valore
return q;
}
/*funz principale*/
int main()
{   /*input*/
	printf("verifico se la somma di elementi \ndi una traplia la quale e' in una sequenza fanno 10\n");
	printf("inserisci lunghezza sequenza\n");
	/*prendi lunghezza della sequenza*/
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	/*prendi elementi della sequenza*/
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci %d elemento\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}

	/*output*/
		if ( tripleSomma10(scatola,n))
		{
			printf("tutta la sequenza sodisfa la prop\n");
	    }
	    else
	    {
		    printf("non in tutta la sequenza sodisfa la prop\n");
	    }
	return 0;
}