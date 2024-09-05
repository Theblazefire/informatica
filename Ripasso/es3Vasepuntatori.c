#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void maiuscole(char* stringa)
{
	int i=0; //contatore
	while(stringa[i]!='\0')
	{
		if (stringa[i]>='a'&&stringa[i]<='z')
		{
			stringa[i]=stringa[i]-32;
		}

		i++;
	}
	printf("%s\n",stringa);
}
char* memoria()
{
	char* Mstr= malloc(50*sizeof(char));
}
int main()
{
	printf("converto le lettere minusco in maiuscole\n");
	/*prendi stringa*/
	char *str=memoria();
	fgets(str,50,stdin);
	/*elimina \n*/
	str[strlen(str)-1]='\0';
	/*rendi le lettere minusco in maiuscole*/
	maiuscole(str);
	/*svuota la memoria*/
	free(str);
}