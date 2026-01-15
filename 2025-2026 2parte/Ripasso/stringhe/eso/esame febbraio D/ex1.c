/*
12 febbraio – Fondamenti di Informatica – Seconda Parte – 135 minuti 
COMPITO D – Esercizi di Programmazione (23 punti)  
Esercizio D1 (7 punti): Stringhe 
Realizzare un'applicazione CancellaDueMinuscoliUguali definita come segue.  
(6pt) L’applicazione contiene una funzione cancellaDueMinuscoliUguali che riceve come parametro 
una stringa e la modifica rimuovendo ogni sequenza di esattamente due caratteri alfabetici minuscoli 
uguali consecutivi.  Ad esempio, se la stringa ricevuta come parametro è "aa123bbb44ds4tgghr12k", la 
stringa deve essere modificata in "123bbb44ds4thr12k". 
*/
#include <stdio.h>
#include <string.h>
int is_letter(char c){
	return (c>='a'&&c<='z');
}
void remove_char(char* str,int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
void CancellaDueMinuscoliUguali(char* str){
	
	int n=strlen(str);
	int i=0;
	int j = 0;
	while(str[i]!='\0'){
		int currMin = is_letter(str[i]);
        int prev = (i > 0) && (str[i] == str[i-1]);
        int next = (i < n - 1) && (str[i] == str[i+1]);
        int nextnext = (i < n - 2) && (str[i] == str[i+2]);
		
		if (!prev&&is_letter(str[i])&&next&&!nextnext)
		{
			i+=2;
		}else{
			str[j++]=str[i++];
		}
	
	}
	str[j]='\0';
}

int main(){
	char stringa[50];
	printf("inserisci la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	CancellaDueMinuscoliUguali(stringa);
	printf("%s\n", stringa);
	return 0;
}