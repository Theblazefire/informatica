/*
(6 pt) Una funzione viaParoleDaDue riceve come parametro una stringa e la modifica rimuovendo 
ogni sequenza di esattamente due caratteri alfabetici consecutivi. Ad esempio, se la stringa ricevuta 
come parametro è "ab12cde56ee78a67bb", la stringa deve essere modificata in "12cde5678a67". 
*/
#include <stdio.h>
#include <string.h>
void sms(){
	printf("rispetto la proprieta' se la stringa ricevuta come parametro %c 'ab12cde56ee78a67bb' -> '12cde5678a67'\n",135);
	printf("inserire stringa\n");
}
int is_letter(char c){
	return ( (c>='a'&&c<='z')||(c>='A'&&c<='Z') );
}
void viaParoleDaDue(char *str){
	int i=0;
	int j=0;
	int count=0;
	while(str[i]!='\0'){
		if(is_letter(str[i])){
			if(is_letter(str[i+1])) count++;
			if(count!=2)str[j++]=str[i];
		}else{
			count=0;
			str[j++]=str[i];
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
	viaParoleDaDue(stringa);
	printf("%s\n", stringa);
	return 0;
}