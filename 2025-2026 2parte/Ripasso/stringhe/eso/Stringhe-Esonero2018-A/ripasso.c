#include <stdio.h>
#include <string.h>
void sms(){
	printf("applico questa proprita' 123abc6/   def1!! gh   -> abc def gh \n");
	printf("inserisci la stringa\n");
}
int is_letter(char c){
		return ((c>='a'&&c<'z')||(c>='A'&&c<='Z'));
}
void verifica(char* str){
	int i=0;
	int j=0;
	int color=0;
	while(str[i]!='\0'){
		if(is_letter(str[i])){
			str[j++]=str[i];
			color=1;
		}else{
			if(color){
				str[j++]=' ';
				color=0;
			}
		}
		i++;
	}
	if(j>0 && str[j-1] == ' ') j--;
	str[j]='\0';
}

int main(){
	char str[50];
	sms();
	fgets(str,50,stdin);
	str[strlen(str)-1]='\0';
	verifica(str);
	printf("%s\n", str);
	return 0;
}