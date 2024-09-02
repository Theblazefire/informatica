#include <stdio.h>
#include <string.h>
void ConversMaiuscole(char* s,int n)
{
	int i=0;
	while(s[i]!='\0')
	{
		if (s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
			
		}
		i++;
	}
	printf("%s",s );
}
int main()
{
	printf("insersci una stringa\n");
	printf("converto i carateri minuscoli in maiuscoli\n");
	char string[50];
	fgets(string,50,stdin);
	//elimina \n
	string[strlen(string)-1]='\0';
	ConversMaiuscole(string,strlen(string));
	return 0;
}