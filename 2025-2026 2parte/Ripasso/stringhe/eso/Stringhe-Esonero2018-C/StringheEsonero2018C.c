/*
(6 pt) Una funzione paroleBenSeparate riceve come parametro una stringa e la modifica così che 
nella stringa compaiano solo le parole minuscole (ovvero le sequenze massimali di caratteri alfabetici 
minuscoli non accentati) della stringa parametro, dove ogni due parole consecutive sono separate 
da un trattino ‘-‘. Il primo e l’ultimo carattere della stringa devono quindi essere alfabetici minuscoli, 
ammesso che la stringa parametro contenga dei caratteri alfabetici minuscoli. Ad esempio, se la 
stringa parametro è "123abc6/   Def1!! gh   ", allora la stringa deve essere modificata in "abc-ef-gh".
*/
#include <stdio.h>
#include <string.h>

void sms(){
	printf("applico questa proprita' (123abc6/   Def1!! gh   )-> (abc-ef-gh) \n");
	printf("inserisci la stringa\n");
}

int is_letter(char c){
	return (c >= 'a'&& c <= 'z');
}

void paroleBenSeparate(char* str){
	int i=0;
	int j=0;
	int color=0;
	while(str[i]!='\0'){
			if(is_letter(str[i])){
				str[j++]=str[i];
				color=1;
			}else{
				if (color)
				{
					str[j++]='-';
					color=0;
				}
			}
		i++;
	}

	if(j>0&&str[j-1]=='-')j--;
	str[j]='\0';
} 

int main(){
	sms();
	char stringa[50];
	fgets(stringa,50,stdin);
	paroleBenSeparate(stringa);
	printf("%s\n", stringa);
	return 0;
}