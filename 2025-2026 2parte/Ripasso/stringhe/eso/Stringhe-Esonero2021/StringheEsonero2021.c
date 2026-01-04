/*
(6.5 pt) Una funzione coppieDiA riceve come parametro una stringa e la modifica rimpiazzando ogni 
sequenza di esattamente due ‘A’ maiuscole con una singola ‘A’ maiuscola. Sequenze di ‘A’ in numero 
diverso da due non devono essere rimpiazzate. Ad esempio, se la stringa ricevuta come parametro è 
"AAabcAdefAAAghAAiAA", la stringa deve essere modificata in "AabcAdefAAAghAiA". 
*/
#include <stdio.h>
#include <string.h>
void sms(){
	printf("rispetto la proprieta' se la stringa ricevuta come parametro %c 'AAabcAdefAAAghAAiAA' -> 'AabcAdefAAAghAiA'\n",138);
	printf("inserire stringa\n");
}

void remove_char(char* str,int pos){
	int j=pos;
	while(str[j]!='\0'){
		str[j]=str[j+1];
		j++;
	}
}
void coppieDiA_V2(char* str){
	int cond=1;
	for (int i = 0; i < strlen(str)-1; i++)
	{//_AA_
		if(str[i]=='A'&&str[i+1]=='A'){
			/*   ↓ se sono qui parte if
				_AA_
			*/
			if(i!=0){
				if(str[i-1]!='A'){
					cond=1;
				}else{
					cond=0;
				}
			}
			/*	  ↓  se sono qui parte if
				_AA_
				   ↑ controlla se non è una A
			*/
			if((i<strlen(str)-2)&&cond){
				if(str[i+2]!='A'){
					cond=1;
				}else{
					cond=0;
				}
			}
		}else{
			cond=0;
		}
		if(cond)remove_char(str,i);
	}
}


void coppieDiA(char* str){
	int nA=0;
	int n=strlen(str);
	for (int i = 2; i < n-1; i++)
	{// AA134AA\0
		if(str[i]=='A'&& str[i+1]=='A'&&str[i+2]!='A')
		if ( (str[i-2]=='A')&&(str[i-1]=='A')&&(str[i]!='A')&&(i!=n-1) || 
			(str[i-2]!='A')&&(str[i-1]=='A')&&(str[i]=='A')&&( i==n-1) )
		{
			str[i-1]=str[i];
			nA++;
		}
	}

	int ln2=n-nA;

	char str2[ln2];
	for (int i = 0; i < ln2; i++)
	{
		str2[i]=str[i];
	}
printf("%s\n", str2);
/*
	int i=0;
	int j=0;
	while(str[i]!='\0'){
		if( (i=0||str[i-1]!='A') && (str[i]=='A'&&str[i+1]=='A') && (str[i]=='A' && str[i+2]=='A')  ){
			str[j++]='A';
			i+=2;
		}else{
			str[j++]=str[i++];
		}
		
	}
	str[j]='\0';
*/
}
int main(){
	char stringa[50];
	sms();
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	coppieDiA_V2(stringa);
	printf("%s\n", stringa);
	
	return 0;
}