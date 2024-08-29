/*
max nella stringa
algoritmo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void Max(char* string)
{
	int i=0;//variabile contatore della stringa
	int decine=0;
	int max=-1;
	/*leggi stringa*/
	while(string[i]!='\0')
	{
		/*trova un numero*/
		if (isdigit(string[i]))
		{
			int n1=string[i]-'0';
			int decine= decine*10 + n1;
		   /*fai il massimo*/
		   if (decine>max)
		   {
			max=decine
		   }
	    }
	    else
	    {
	    	/*resetta*/
	    	decine=0;
	    }
    i++;
	}//while
	printf("%d\n",max);

}
int main()
{
	/*input*/
	int string[50];
	/*prendi stringa*/
	fgets(string,50,stdin);
	/*elimina \n*/
	string[strspn(string,'\n')]='\0';
	Max(string);
}