/*
(6 pt) Una funzione soloParole riceve come parametro una stringa e la modifica così che nella stringa 
compaiano solo le parole (ovvero le sequenze massimali di caratteri alfabetici maiuscoli o minuscoli 
non accentati) della stringa parametro, dove ogni due parole consecutive sono separate da un 
singolo spazio. Il primo e l’ultimo carattere della stringa devono quindi essere alfabetici, ammesso che 
la stringa parametro contenga dei caratteri alfabetici. Ad esempio, se la stringa parametro è 
"123abc6/   def1!! gh   ", allora la stringa deve essere modificata in "abc def gh".   
*/

#include <stdio.h>
#include <string.h>

int is_letter(char c){
	return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}


void verifica(char* str){
	int i=0;//indice prima stringa
	int j=0;//indice secondo stringa
	int color=0;
	while(str[i]!='\0'){
		if(is_letter(str[i]) ){
			str[j++]=str[i];//salva nel secondo indice che forma una sotto stringa
			color=1;
		}else{
			if(color){
				str[j++]=' ';//salva nel secondo indice che forma una sotto stringa creando lo spazio al posto di un non carattere
				color=0;
			}
		}
		i++;
	}
	//elimina l'ultimo spazio| ↓ l'ultimo carattere è ' ' (spazio)?
    if (j > 0 && str[j - 1] == ' ') j--;
        //^-- verifica se è vuota la stringa
    str[j] = '\0';
}

int main(){
	char stringa[50];
	printf("applico questa proprita' 123abc6/   def1!! gh   -> abc def gh \n");
	printf("inserisci la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	printf("%s",stringa );
	return 0;
}