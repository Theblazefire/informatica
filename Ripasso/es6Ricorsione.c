/*
Esercizio 2 (ContaCaratteriStringa) 
Scrivere un programma che, 
dati in input una stringa
e un carattere, conta il 
numero di occorrenze del 
carattere nella stringa, 
ossia quante volte il 
carattere compare nella 
stringa. Definire una 
funzione ricorsiva per 
tale conteggio.
*/
#include <stdio.h>
#include <string.h>
int verifica(char* s,int n)
{
	int con=0;
	if (n==0)
	{//caso base
		con = 0;
	}
	else
	{//passo ricorsivo
		if( (s[n-1]>='a' && s[n-1]<='z') || (s[n-1]>='A' && s[n-1]<='Z'))
		{
			con= 1+verifica(s,n-1);
		}
		else
		{
		con= verifica(s,n-1);

		}
    }
    return con;
}

int ContaCaratteriStringa(char* string)
{
	return verifica(string,strlen(string));
}
int main()
{
	printf("inserisci una stringa\n");
	printf("conto quante lettere contiene\n");
	//prendi stringa
	char string[50];
	fgets(string,50,stdin);
	//elimina \n
	string[strlen(string)-1]='\0';
	int num=ContaCaratteriStringa(string);
	printf("%d\n", num);
}