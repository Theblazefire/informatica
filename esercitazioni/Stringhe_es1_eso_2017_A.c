#include <stdio.h>
#include <string.h>
void soloparole(char* s,int n)
{
	int i=0;
	int j=0;
	/*leggi la stringa*/
	while(s[i]!='\0')
	{
		if (((s[i]>='A'&&s[i]<='Z')||
			(s[i]>='a'&&s[i]<='z'))||(s[i]==' '))
		{//
		 //cancella i caratteri non lettere
		/*	j=i;
			while(s[j]!='\0')
			{//123z\0
				//s[j]=' ';
				s[j]=s[j+1];
				j++;
			}*/
		    s[j++]=s[i];
		    
	    }//if
	    i++;
	}//while
	s[j]='\0';
printf("%s\n",s );
}
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