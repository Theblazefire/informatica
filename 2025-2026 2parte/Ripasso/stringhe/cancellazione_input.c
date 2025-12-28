#include <stdio.h>
#include <string.h>

int is_letter(char c){
	return ( (c>='a' && c<='z') || (c>='A' && c<='Z') );
}

int is_digit(char c){
	return (c>='0'&&c<='9');
}

void remove_char(char* str,int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
void verifica(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(is_letter(str[i])&&is_digit(str[i+1]) ){
				remove_char(str,i+1);
		}else{
			i++;
		}
	}
}
int main(){
	char stringa[50];
  printf("ciao sono un programma che cancella numeri adiacenti a lettere\n");
  printf("inserisci una stringa\n");
  //prendi stringa
  	fgets(stringa,50,stdin);
  	stringa[strlen(stringa)-1]='\0';
  		verifica(stringa);
  		printf("%s\n",stringa );
	return 0;
}