/*
(ConvertiNumeroArray) 
Scrivere un programma 
che prende in input 
un intero n e stampa 
in output un array di 
interi in cui ogni 
componente dell’array 
corrisponde a una cifra 
del numero. La cifra 
più significativa di n 
si trova in posizione 
d’indice 0. Si consiglia 
di utilizzare funzioni 
di supporto. 

Esempio: 123 -> {1,2,3}
*/
#include <stdio.h>
#include <string.h>
/*da riprendere
void Num(char *s)
{
	int k=0;
	if (strlen(s)==0)
	{
		k=0;
	}
	else
	{//123
		k=Num(s-1);
		printf("%s,",k );
	}
	

}	
int main()
{//124
	printf("inserisci un numero\n");
	char string[50];
	fgets(string,50,stdin);
	//canc \n
	string[strlen(string)-1]='\0';
	//int n=Num(string,strlen(string));
	//printf("%d\n", n);
	Num(string);
}
*/