#include <stdio.h>
#include <string.h>

void diff(char *str)
	{
	int i=0;//indice
	char str2[5];// seconda striga;
	while(str[i]!='\0')//leggi la stringa
		{
			if( (str[i]>='0'&&str[i]<='9') && !(str[i+1]>='0'&&
			  str[i+1]<='9')  )
			{
				str2[0]=str[i];
			}

			if( (str[i]>='0'&&str[i]<='9') && !(str[i-1]>='0'&&
			    str[i-1])
			  )
                        {
                                str2[1]=str[i];
                        }
		i++;
		}
	int num;
	num= str2[0]-str2[1];
	printf("il risultato %c %d", 138, num);

	}//chiusura diff
int main()
{
	char stringa[50];
	printf("ciao sono un programma che fa la sottrazione fra due numeri se hanno uno spazio fra di loro una lettera es \n a1ss2= 1 \n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	diff(stringa);
}
