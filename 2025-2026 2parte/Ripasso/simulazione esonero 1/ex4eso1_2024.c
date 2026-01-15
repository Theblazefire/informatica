/*
ESERCIZIO STRINGHE 2 (9 punti)
Consegnare su moodle (al link Consegna compito C – Stringhe 2) una funzione C funzioneStringhe2
che riceve come parametro una stringa e la modifica così che ogni sottostringa di almeno tre
caratteri consecutivi uguali venga rimpiazzata da un singolo carattere della sequenza di caratteri
uguali seguito da un trattino ‘-’ e un maggiore ‘>’ a simboleggiare una freccia “->”. Ad esempio, se la
stringa parametro è "aaaaabbbcaa", allora la funzione deve modificare la stringa in "a->b->caa".
*/

#include <stdio.h>
#include <string.h>

void Stringhe2(char* str){
int i=0;
int j=0;
int n=strlen(str);
char temp[50];//aaaaccc
	while(str[i]!='\0'){
		int next=(i<n-1)&&(str[i]==str[i+1]);
		int nextnext=(i<n-2)&&(str[i]==str[i+2]);
		if(next&&nextnext){
			char c=str[i];
			temp[j++]=c;
			temp[j++]='-';
			temp[j++]='>';
			while(c==str[i]){
				i++;
			}
		}else{
			temp[j++]=str[i++];
		}
	}
	temp[j]='\0';
	strcpy(str,temp);
}

int main(){
	char stringa[50];
	printf("inserisci stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	Stringhe2(stringa);
	printf("%s\n",stringa);
	return 0;
}