/*
Specifica
input (x1..xn)
pre-condizione (x1..xn) app Z
output q variabile booleana
post-condizione q è vera quando 
in una tripla esiste il prodotto 
fra alcuni elementi della tripla 
che danno 12 altrimenti è vale false
Problema di tipo condizione di esistenza
*/
#include <stdio.h>
int triplaProdotto12(int sca[],int n)
{
	int q=0;//variabile booleana
	int i=0;//contatore
	while(i<n-2&&!q)
	{
		if ((sca[i]*sca[i+1]==12)||(sca[i]*sca[i+2]==12)||(sca[i+1]*sca[i+2]==12)	)
		{
			q=1;
		}
		i++;
		return	q;
	}

}
/*funz principale*/
int main()
{
		/*input*/
    printf("verifico se esistono dei elementi in una tripla che il loro prodotto da 12. la tripla appartiene a una sequenza\n");
	printf("inserisci lunghezza della sequenza\n");
	//prendi lunghezza
	int n;
	scanf_s("%d",&n);
	int scatola[n];//dichiarazione arrey
	//prendi gli elementi della sequenza
	for (int i = 0; i < n; ++i)
	 {
	 	printf("inserisci elemento %d della sequenza\n",i+1 );
	    scanf_s("%d",&scatola[i]); 
	 }
	/*output*/
		if (triplaProdotto12(scatola,n) )
		{
			printf("esiste almeno una sequenza il quale prodotto fra alcuni elementi è 12\n");
	    }
	    else
	    {
			printf("esiste almeno una sequenza il quale prodotto fra alcuni elementi è 12\n");
	    }
	return 0;
}