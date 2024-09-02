#include <stdio.h>
#include <string.h>
/*
verifica nella stringa tramite la 
ricorsione se esiste almeno 
un elemento minuscolo
*/
int CaratereMin(char* s,int n)
{
	int q;
	if (n==0)
	{
		q=0;
	}
	else
	{
		q=(s[n-1]>='a'&&s[n-1]<='z')||CaratereMin(s,n-1);
	}
	return q;
}
int AlmenoUnaMinuscola(char* string)
{
	return CaratereMin(string,strlen(string)-1);
}
/*Funz principale*/
int main()
{
	/*input*/
	printf("inserisci una stringa\n");
	printf("verifico se esiste almeno un carattere minuscolo\n");
	//prendi stringa
	char string[50];
	fgets(string,50,stdin);
	//elimina \n
	string[strcspn(string,"\n")]='\0';
	if (AlmenoUnaMinuscola(string))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}