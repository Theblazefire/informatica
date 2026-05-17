/*
Esercizio 2 (ContaCaratteriStringa) Scrivere un programma che, 
dati in input una stringa e un carattere, conta il numero di 
occorrenze del carattere nella stringa, ossia quante volte 
il carattere compare nella stringa. 
Definire una funzione ricorsiva per tale conteggio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ContaCaratteriStringaRic(char* str,char c,int i,int count){
	if (str[i]=='\0')
	{
		return count;
	}else{
		if (str[i]==c)
		{
			count++;
		}
		return ContaCaratteriStringaRic(str,c,i+1,count);
	}
}
int ContaCaratteriStringa(char* str,char c){
	int count=0;
	return ContaCaratteriStringaRic(str,c,0,count);
}

int main(){
	char str[50];
	char c;
	printf("ciao sono un programma che conta quante volte cista una lettera specifica\n");
	printf("inserisci stringa\n");
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1]='\0';
	printf("inserisci carattere\n");
	scanf_s("%c%*c",&c);
	printf("il carattere %c l'ho trovato %d",c,ContaCaratteriStringa(str,c));
	return 0;
}