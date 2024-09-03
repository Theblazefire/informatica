#include <stdio.h>
#include <string.h>
void soloparole(char* s, int n)
{
	int i=0;
	int j=0;
	//leggi il la stringa
	while(s[i]!='\0')
	{
		//trova le lettere
		if ( ((s[i]>='a'&&s[i]>='z')||
			 (s[i]>='A'&&s[i]>='Z'))||
			 (s[i]==' ') )
		{
			//copia le lettere in una nuova stringa
			//sovrascrivendola 
			s[j]=s[i];
			j++;
		}
         i++;
	}//while
	//assegna il termine della Nuovastringa
	s[j]='\0';
	printf("%s",s);
}
//funzione principale 123w2!1s 2!12sd  
int main()
{
	/*input*/
	printf("organizo i carateri eliminando\n");
	printf("numeri e carateri speciali\n");
	/*prendi la stringa*/
	char string[100];
	fgets(string,100,stdin);
	/*elimina \n*/
	string[strlen(string)-1]='\0';
	soloparole(string,strlen(string));
	return 0;
}