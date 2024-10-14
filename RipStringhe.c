#include <stdio.h>
#include <string.h>
void verifica(char* str)
{
  int i=0;
  int j=0;
  //leggi stringa
  while(str[i]!='\0')
  {
  	//guarda se ci sono lettere
  	if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
  	{
  		//guarda se ci sono numeri
  		if (str[i+1]>='0'&&str[i+1]<='9')
  		{
  			j=i+1;
  			while(str[j]!='\0')
  			{//cancella il numero
  			str[j]=str[j+1];
  			j++;
  		    }
  		}
  	}
  	i++;
  }//fine while 
printf("%s\n",str);
}
int main()
{
	char stringa[50];
	printf("ciao sono un programma che cancella numeri adiacenti a lettere\n");
	printf("inserisci una stringa\n");
	//prendi stringa
	fgets(stringa,50,stdin);
	//elimina \n
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
	
}