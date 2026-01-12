/*
ESERCIZIO STRINGHE 2
Realizzare una funzione numeriNascosti che riceve come parametro una stringa e la modifica
rimpiazzando ogni sequenza di caratteri numerici con esattamente un carattere ‘*’. Ad
esempio, se la stringa ricevuta come parametro è 
"per l'esame del 17/09/2020 ci sono 105 studenti prenotati nei 2 canali", 
la stringa deve essere modificata in 
"per l'esame del */  /* ci sono * studenti prenotati nei * canali".
*/

#include <stdio.h>
#include <string.h>
// _1_
void remove_char(char* str,int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
int is_num(char c){
	return (c>='0'&&c<='9');
}
void numeriNascosti(char* str){
	int i=0;
	
	while(str[i]!='\0'){
		if (is_num(str[i]))
		{//*_
			str[i]='*';
			while(is_num(str[i+1]))
			{
				remove_char(str,i+1);
			}
		}
		i++;
	}
}

int main(){
	char stringa[50];
	printf("dammi la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	numeriNascosti(stringa);
	printf("%s\n",stringa );
	return 0;
}