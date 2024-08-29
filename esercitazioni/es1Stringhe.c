/*
a[20]
ciaociao
stringa[]="ciaociao"=n*2
stringa[i]==stringa[n+i]
for (int i = 0; i < 20	; ++i)
{
	if()
	{
	
	}

}

*/
#include <stdio.h>
#include <string.h>
void doppiastringa(char* string)
{
	//conta la lunghezza lunghezza
	int n=strlen(string);
	//verifica se è pari la lunghezza  
	if (n%2!=0)
	{
		printf("la stringa non e' pari\n");
	}
	//prendi la lunghezza della prima stringa
	int m=n/2;
	for (int i = 0; i < m; ++i)
	{
		//verifica se sono uguali le stringhe 
		if (string[i]==string[i+m])
		{
			printf("1\n");
		}

	}
	printf("0\n");

}

int main()
{
	char string[50];
		printf("inserisci una stringa\n");
		//prendi la stringa
		fgets(string,50,stdin);
		//elimana \n dalla stringa inserita,
		//sostituisci con fine stringa
		string[strspn(stringa,'\n')]='\0';
		
		doppiastringa(string);
	
	return 0;
}