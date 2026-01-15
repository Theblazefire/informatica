/*
12 febbraio – Fondamenti di Informatica – Seconda Parte – 135 minuti 
COMPITO A – Esercizi di Programmazione (23 punti)  
Esercizio A1 (7 punti): Stringhe 
Realizzare un'applicazione ViaParoleDaDue definita come segue.  
(6pt) L’applicazione contiene una funzione viaParoleDaDue che riceve come parametro una stringa e 
la modifica rimuovendo ogni sequenza di esattamente due caratteri alfabetici consecutivi. Ad 
esempio, se la stringa ricevuta come parametro è "aB12cde56EE78a67bb", la stringa deve essere 
modificata in "12cde5678a67". 
(1pt) L’applicazione contiene una funzione main che chiede all'utente di inserire una stringa da 
tastiera ed utilizzando la funzione fgets memorizza la stringa introdotta dall'utente all'interno di un array 
di 50 caratteri. Dopo aver rimosso il carattere '\n' dalla stringa, la funzione main invoca la funzione 
viaParoleDaDue fornendole come parametro la stringa letta; la funzione main stampa quindi la stringa 
modificata.
*/

#include <stdio.h>
#include <string.h>
int is_letter(char c){
	return	(c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
void remove_char(char* str,int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
void viaParoleDaDue(char*str){
	int i=0;/// 
	
	int n=strlen(str);
	while(i<n-1){
		int prev=(i>0)&&is_letter(str[i-1]);
		int next=(i<n-1)&&is_letter(str[i+1]);
		int nextnext=(i<n-2)&&is_letter(str[i+2]);
		if(!prev&&is_letter(str[i])&&next&&!nextnext){
			remove_char(str,i);
			remove_char(str,i);
		}else{
			i++;
		}
	}
	
}

int main(){
	char stringa[50];
	printf("inserisci la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	viaParoleDaDue(stringa);
	printf("%s\n", stringa);
	return 0;
}