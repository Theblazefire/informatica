#include <stdio.h>
#include <string.h>
void SoloAlfabetici(char* str)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{//trova carattere no alfabetico
		if ( !( ( (str[i]>='a')&&(str[i]>='z') ) || ( (str[i]>='A')&&(str[i]>='Z') ) ) )
		{
			j=i;//imposta indice j
			//sposta a caratere a destra 1a\0->11\0
			while(str[j]!='\0')//leggi
			{//asd1a
				str[j]=str[j+1]
				j++;
			}
		}
		else
		{
			i++;		
		}
	
	}

}//chiusura solo alfabetici
int main()
{
char stringa[50];
/*input*/
printf("inserisci una stringa\n");
fgets(stringa,50,stdin);//prendi stringa
stringa[strlen(stringa)-1]='\0';
SoloAlfabetici(stringa);
printf("%s\n",stringa);

}//chiusura main
