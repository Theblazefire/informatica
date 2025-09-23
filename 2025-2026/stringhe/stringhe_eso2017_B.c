#include<stdio.h>
#include <string.h>
void censura(char* str)
{
	int i=0,j;
	while(str[i]!='\0')
	{
		if (!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) )
		{
			str[i]='#';
		}
		
		
			i++;			
		

	}//chiusura

}//chiusura censura
int main()
{//12dd \0
	char stringa[50];
	/*input*/
	printf("hey sono un programma che censura tutti ni caratteri che non sono lettere\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	censura(stringa);
	printf("%s\n", stringa);
	return 0;
}