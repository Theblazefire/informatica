/*
(6 pt) Una funzione dueMinuscolePerVolta riceve come parametro una stringa e la modifica così che 
ogni sequenza di almeno due caratteri alfabetici minuscoli venga trasformata in una sequenza di 
esattamente due caratteri alfabetici minuscoli (a scelta fra quelli della sequenza preesistente). Ad 
esempio, se la stringa ricevuta come parametro è "acbvd45dshAfdkf", la stringa può essere modificata 
in "ac45dsAfd ". 
*/
#include <stdio.h>
#include <string.h>
void sms(){
	printf("applico questa proprita' la stringa ricevuta come parametro %c 'acbvd45dshAfdkf',\n la stringa può essere modificata in 'ac45dsAfd '\n",135);
	printf("inserisci la stringa\n");
}

int is_letter(char c){
	return (c>='a'&&c<='z');
}

void dueMinuscolePerVolta(char* str){
	int i=0;
	int j=0;
	int count=0;
		while(str[i]!='\0'){
				if(is_letter(str[i])){
					//salva nella seconda stringa solo i primi due
					count++;
					if(count<=2){
						str[j++]=str[i];
					}
				}else{
					//salva nellsa seconda stringa i non minucoli
					count=0;
					str[j++] = str[i];
				}			
			i++;
		}
	str[j]='\0';
}
int main(){
	char stringa[50];
	sms();
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	dueMinuscolePerVolta(stringa);
	printf("%s\n",stringa );
	return 0;
}