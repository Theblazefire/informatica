#include <stdio.h>
int Massimo_della_tripla(int*sca,int n)
{
	int max=0;
	for (int i = 0; i+2 < n; i++)
	{
		if ((sca[i]+sca[i+1]+sca[i+2])>max)
		{
			max=sca[i]+sca[i+1]+sca[i+2];
		}
	}


  return max;
}//fine Max

int main()
{
	printf("ciao sono un programma che verifica il massimo di una sequenza di tre numeri di un insieme\n");
    printf("dammi il numero dei elementi nell'insieme\n");
    int n;
    scanf_s("%d",&n);
    if (n<3)
    {
    	printf("l'insieme numerico deve avere almeno 3 elementi\n");
    }
    int scatola[n];
    for (int i = 0; i < n; i++)
    {
    	printf("dammi il %d numero dell'insieme\n", i+1);
    	scanf("%d",&scatola[i]);
    }
    int max=Massimo_della_tripla(scatola,n);
	printf("Max della somma di una tripla %c %d\n",138,max );
	return 0;
}