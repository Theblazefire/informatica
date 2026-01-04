/*
(7 pt) Una funzione sommaDueNumerici riceve come parametro una stringa e la modifica 
rimpiazzando ogni sequenza (massimale) di esattamente due caratteri numerici adiacenti nella stringa 
con la somma dei numeri corrispondenti ai caratteri. Ad esempio, se la stringa ricevuta come 
parametro è "xx13xxx74xx784xx00xx6xx", la stringa deve essere modificata in 
"xx4xxx11xx784xx0xx6xx", in quanto 1+3=4, 7+4=11 e 0+0=0.  
*/
#include <stdio.h>
#include <string.h>
void sms(){
	printf("rispetto la proprieta' se la stringa ricevuta come parametro %c 'xx13xxx74xx784xx00xx6xx' -> 'xx4xxx11xx784xx0xx6xx'\n",138);
	printf("inserire stringa\n");
}

int is_num(char c){
	return (c>='0'&&c<='9');
}
void verifica(char* str){
	int i=0;
	int j=0;
	int n=strlen(str);
	while(str[i]!='\0'){//_67_
		int prev_num=(i>0)&&is_num(str[i-1]);
		int curr=is_num(str[i]);
		int next_num=(i<n-1)&&is_num(str[i+1]);
		int next_next_num=(i<n-2)&&is_num(str[i+2]);

		if(!prev_num&&curr&&next_num&&!next_next_num){
			int somN=(str[i]-'0')+(str[i+1]-'0');
			if(somN>=10){
				str[j++]='1';
				str[j++]=(somN-10)+'0';
			}else{
				str[j++]=somN+'0';
				i++;
			}

			i+=2;
		}else{
			str[j++]=str[i++];
		}
	}
	str[j]='\0';
}

int main(){
	char stringa[50];
	sms();
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	printf("%s\n", stringa );
}