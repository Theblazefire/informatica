#include <stdio.h>
int uguaglianza(int*sca,int n)
{
	int uguale=0;
	for (int i = 0; i+2 < n; i++)
	{
		if ( (sca[i]==sca[i+1])&&(sca[i]==sca[i+2]) )
		{
			uguale=1;
		}
		
	}


return uguale;
}//chiusura uguaglianza

int main()
{
	printf("ciao sono un programma che trova l'uguaglianza di un numero in una tripla. tale tripla è in un insieme numerico\n");
    printf("inserisci la lunghezza dell'insieme numerico\n");
    /*input*/
    int n;
    scanf_s("%d",&n);
    //int scatola=(int*)malloc(sizeof(int*n));
    int scatola[n];
    for (int i = 0; i < n; i++)
    {
    	printf("inserisci il %d numero\n", i+1);
    	scanf_s("%d",&scatola[i]);
    }
    if(uguaglianza(scatola,n))
    {
    	printf("esiste una tripla uguale\n");
    }



}