#include <stdio.h>
#include <string.h>
/*
(6 pt) Una funzione sommaNumeri riceve come parametro una stringa e la modifica così che nella 
stringa compaiano solo i numeri (ovvero le sequenze massimali di caratteri numerici) della stringa 
parametro, dove ogni due numeri consecutivi sono separati da un ‘+’. Il primo e l’ultimo carattere 
della stringa devono quindi essere numerici, ammesso che la stringa parametro contenga dei 
caratteri numerici. Ad esempio, se la stringa parametro è "abc123d/   45a!! 36   ", allora la stringa deve 
essere modificata in "123+45+36".   
*/
void sms(){
	printf("applico questa proprita' (abc123d/   45a!! 36  ) -> (123+45+36) \n");
	printf("inserisci la stringa\n");
}

int is_num(char c){
	return (c>='0'&&c<='9');
}

void verifica(char* str){
	int i=0;
	int j=0;
	int color=0;
	while(str[i]!='\0'){
			if(is_num(str[i])){
				str[j++]=str[i];
				color=1;
			}else{
				if(color){
					str[j++]='+';
					color=0;
				}
			}
		i++;
	}
	if(j>0 && str[j-1]=='+')j--;
	str[j]='\0';
}

int main(){
	char stringa[54];
	sms();
	fgets(stringa,54,stdin);
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	printf("%s\n",stringa );
	return 0;
}