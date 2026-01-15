/*
Consegnare su moodle (al link Consegna compito A – Stringhe 1) una funzione C funzioneStringhe1
che riceve come parametro una stringa e restituisce il numero di caratteri alfabetici minuscoli presenti
nella stringa. Ad esempio, se la stringa parametro è "abc123DEF!- da", allora la funzione restituisce 5,
poiché la stringa contiene 5 caratteri alfabetici minuscoli ‘a’, ‘b’, ‘c’, ‘d’ ed ‘a’
*/

#include <stdio.h>
#include <string.h>
int is_letter(char c){
	return (c>='a'&&c<='z');
}

int funzioneStringhe1(char* str){
	int num=0;
	int i=0;
	while(str[i]!='\0'){
		if(is_letter(str[i])){
			num++;
		}
		i++;
	}

	return num;
}

int main(){
	char stringa[50];
	printf("inserisci stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	int n=funzioneStringhe1(stringa);
	printf("%d\n",n );
	return 0;
}