/*
specifica
input (x1...xn)
pre-condiozione (x1...xn) app Z
output q variabile booleana
post-condione q vale vero se nella sequenza esiste una tripla con due elementi pari
altrimenti è false
problema di tipo universale
*/
#include <stdio.h>
/*controlla la sequenza che vale la proprietà*/
int tripleDuePari(int sca[],int n)
{
	int q=1;//variabile booleana
	int i=0;//contatore
	while(i<n-2&&q)
	{//1 4 5
		if (
            !( 
            ((sca[i]%2==0)&&(sca[i+1]%2==0))||
            ((sca[i]%2==0)&&(sca[i+2]%2==0))||
            ((sca[i+1]%2==0)&&(sca[i+2]%2==0))
             )
           )
		{
			q=0;
		}
		/*restitusci il valore*/
		return q;
	}

}
/*funz principale*/
int main()
{
	/*input*/
	printf("verifico se esiste una tripla nella sequenza che contiene due elementi pari\n");
	printf("inserisci lunghezza\n");
	/*prendi la lunghezza*/
	int n;
	scanf_s("%d",&n);
	int scatola[n];//dichiarazione arrey
	/*prendi elementi*/
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci %d elemento\n",i+1 );
	    scanf_s("%d",&scatola[i]);
	}
	if (tripleDuePari(scatola,n))
	{
		printf("esiste almeno una tripla che sodisfa la proprieta'\n");
	}
	else
	{
		printf("non esiste almeno una tripla che sodisfa la proprieta'\n");		
	}
	return 0;
}