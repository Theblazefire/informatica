/*
Esercizio 1 (AlmenoUnaMinuscola) Scrivere un programma 
che prende in input una stringa non vuota di caratteri 
e che restituisce true se la stringa è composta da 
almeno un carattere alfabetico minuscolo, false altrimenti. 
Tale verifica deve essere realizzata attraverso una funzione ricorsiva.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int AlmenoUnaMinuscolaRic(char*str,int i){
	int ver=1;
	if (str[i]=='\0')
	{
		return 0;
	}else{
		return ver=(str[i]>='a'&&str[i]<='z')||AlmenoUnaMinuscolaRic(str,i+1);
	}
}

int AlmenoUnaMinuscola(char* str){
	return AlmenoUnaMinuscolaRic(str,0);
}

int main(){
	char stringa[50];
	printf("inserisci stringa Max 50 caratteri\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';//togli invio
	if (AlmenoUnaMinuscola(stringa))
	{
		printf(":)\n");
	}else{
		printf(":(\n");
	}
	return 0;
}