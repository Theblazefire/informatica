/*Realizzare un'applicazione che consiste di tre funzioni. 
(6 pt) Una funzione soloNumeri riceve come parametro una stringa e la modifica così che nella stringa 
compaiano solo i numeri (ovvero le sequenze massimali di caratteri numerici) della stringa parametro, 
dove ogni due numeri consecutivi sono separati da un singolo spazio. Il primo e l’ultimo carattere della 
stringa devono quindi essere numerici, ammesso che la stringa parametro contenga dei caratteri 
numerici. Ad esempio, se la stringa parametro è "abc123d/   45a!! 36   ", allora la stringa deve essere 
modificata in "123 45 36".   */

void is_num(char c){
	return (c>='0'&&c<='9');
}

void soloNumeri_Vstatus(char* str){
	int i=0;
	int j=0;
	int num_st=0;
	int ins_st=1;
	while(str[i]!='\0'){

		if (is_num(str[i]))
		{
			if(!num_st){
				if(!ins_st){
					str[j++]=' ';
				}
				num_st=1;
				ins_st=0;
			}
			str[j++]=str[i];
		}else{
			num_st=0;
		}
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int main(){
	char stringa[50];
	printf("inserisci la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	soloNumeri(stringa);
	printf("%s\n",stringa);
	return 0;
}