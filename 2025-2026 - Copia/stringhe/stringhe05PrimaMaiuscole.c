#include <stdio.h>
#include <string.h>
int Seigrande(char*str)
{
	int c=0;
	int i=0;
	while(str[i]!='\0')
	{
		if (str[i]>='A'&&str[i]<='Z')
		{
			i=1;
		}
		i++;
	}
	return c;
}

void a(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(Seigrande(str[i]))
		{
			str[i];
		}
		i++;
	}
}

int main()
{
	char stringa[60]
	printf("ciao sono un programma che riordina\n");
	fgets(stringa,60,stdin);
	stringa[strlen(stringa)-1]='\0';
	a(stringa);
	return 0;
}