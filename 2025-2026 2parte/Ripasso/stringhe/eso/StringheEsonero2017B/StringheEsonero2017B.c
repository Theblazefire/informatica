#include <stdio.h>
#include <string.h>

int maiuscola(char c){
	return (c>='A'&&c<='Z');
}

void remove_char(char* str, int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
void verifica(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(maiuscola(str[i])&&(str[i]==str[i+1]	)){
			remove_char(str,i);
		}else{
			i++;
		}
	}
}
int main(){
	char stringa[50];
	printf("elimino le doppie maiuscile\n");
	printf("inserisci una stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	//appena riprendi lo studio sviluppa la funzione come nel primo esonero
	// è simile
	printf("%s", stringa); 
}