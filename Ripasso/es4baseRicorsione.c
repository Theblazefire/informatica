#include <stdio.h>
#include <string.h>
#include <ctype.h>
int bo(char* string, int inf, int sup)
{
	int verifica;
	if (inf>=sup)
	{//2002
		verifica=1;
	}
	else
	{
		verifica=(string[inf]==string[sup]) && bo(string,inf+1,sup-1);
	}
	return	verifica;
}
int palindromo(char* string)
{
	return	bo(string,0,strlen(string)-1);
}
int main()
{
	printf("dammi un numero\n");
	printf("verifico se sia un palindromo es 2002\n");
	char string[50];
	fgets(string,50,stdin);
	//( elimino \n)
	string[strspn(string,"\n")]='\0';

	if(palindromo(string))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}

	return 0;
}