#include <stdio.h>
#include <string.h>
int is_letter(char c){
	return	((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
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
			if(!is_letter(str[i])){
				remove_char(str,i);
			}else{
				i++;
			}
	}
}

int main(){
	char stringa[50];
	printf("cancello tutto tranne le lettere\n");
	printf("inserisci stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	printf("%s\n",stringa );
	return 0;
}