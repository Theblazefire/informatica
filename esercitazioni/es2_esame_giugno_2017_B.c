#include <stdio.h>
#include <string.h>
void nienteDoppieMaiuscole(char* s)
{
	int i=0;
	int j=0;
	//leggi stringa
	while(s[i]!='\0')
	{   //trova lettere maiuscole
		if ((s[i]>='A'&&s[i]<='Z'))
		{//aFq\0
			//modifica la stringa quando a due lettere uguali
				if ((s[i]==s[i+1]))
				{
					j=i;
				    while(s[j]!='\0')
				    {
				      s[j]=s[j+1];
				    j++;
				    
				    }
				
			}
		}
		i++;
	}
	//stampa la stringa modificata 
	printf("%s\n", s);
}
int main()
{
	printf("insersci una stringa\n");
	printf("elimino due lettere maiuscolo uguali adiacenti\n");
	char stringa[50];
	fgets(stringa,50,stdin);
	//elimina \n
	stringa[strlen(stringa)-1]='\0';
	nienteDoppieMaiuscole(stringa);

	return 0;
}