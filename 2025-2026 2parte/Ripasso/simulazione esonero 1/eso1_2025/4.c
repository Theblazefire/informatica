/*
Consegnare su moodle (al link Consegna compito A – Stringhe 2) una funzione C funzioneStringhe2
che riceve come parametro una stringa e la modifica così che ogni sottostringa di caratteri numerici
venga sostituita da un singolo carattere asterisco ‘*’. Ad esempio, se la stringa parametro è
"abc123d4e654ff78", allora la funzione deve modificare la stringa in "abc*d*e*ff*".
*/

#include <stdio.h>
#include <string.h>
int is_letter(char c){
	return (c>='0'&&c<='9');
}

void funzioneStringhe2(char* str){
	int i=0;
	int j=0;
	int color=0;
	while(str[i]!='\0'){
		int curr=is_letter(str[i]);
		/*_8_
		1_
		11_
		_111
		_ _ _
		*/ 
		if(curr){
			if(!color){
				str[j++]='*';
				color=1;
			}
		}else{
			str[j++]=str[i];
			color=0;
		}
		i++;
	}
	str[j]='\0';
}

int main(){
	char stringa[50];
	printf("inserisci stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	funzioneStringhe2(stringa);
	printf("%s\n",stringa );
	return 0;
}