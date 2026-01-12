/*
ESERCIZIO STRINGHE 1 (4 punti)
Consegnare su moodle (al link Consegna compito C – Stringhe 1) una funzione C funzioneStringhe1
che riceve come parametro una stringa e restituisce il numero di caratteri numerici della stringa che
sono seguiti da uno spazio ‘ ‘. Ad esempio, se la stringa parametro è "12 abc3v4 56", allora la funzione
restituisce 2, poiché la stringa contiene 2 caratteri numerici (il ‘2’ e il ‘4’) seguiti da uno spazio.

*/
#include <stdio.h>
#include <string.h>
int verifica(char* str){
int i=0;
int count=0;
	while(str[i]!='\0'){
		int curr=(str[i]>='0'&&str[i]<='9');
		int next=str[i+1]==' ';
		if (curr&&next)
		{
			count++;
		}
		i++;
	}
	return count;
}
int main(){
	char stringa[50];
	printf("inserisci la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	int count=verifica(stringa);
	printf("%d\n", count);
	return 0;
}