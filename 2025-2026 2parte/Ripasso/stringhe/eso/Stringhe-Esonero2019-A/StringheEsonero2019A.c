/*
(6 pt) Una funzione alPiuDueConsecutivi riceve come parametro una stringa e la modifica così che 
ogni sequenza di almeno due caratteri consecutivi uguali venga trasformata in una sequenza di 
esattamente due caratteri consecutivi uguali. Ad esempio, se la stringa ricevuta come parametro è 
"abbbbacccddaaaa", la stringa deve essere modificata in "abbaccddaa". 
*/
#include <stdio.h>
#include <string.h>
void sms(){
	printf("applico questa proprita' se la stringa ricevuta come parametro è 'abbbbacccddaaaa', \nla stringa deve essere modificata in 'abbaccddaa' \n");
	printf("inserisci la stringa\n");
}

void alPiuDueConsecutivi(char* str){
	int i=0;
	int j=0;
	int count=0;
	
	if(str[0]!='\0'){
		str[j++]=str[i++];
		count=1;
		while(str[i]!='\0'){
				if(str[i]==str[j-1]){
					count++;
				}else{
					count=1;//reset count
				}

				if(count<=2){
					str[j++]=str[i];
				}
			i++;
		}
		str[j]='\0';
	}
}

int main(){
	char stringa[50];
	sms();
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	alPiuDueConsecutivi(stringa);
	printf("%s\n",stringa );
	return 0;
}