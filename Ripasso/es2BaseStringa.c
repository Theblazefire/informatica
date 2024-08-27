#include <stdio.h>
#include <string.h>
int main()
{
	char string[64];
    printf("pensa a un lettera\n");
    //scanf_s("%c",&string); prende solo un caratere
    fgets(string,64,stdin);
    printf("pensavo anch'io a %s !",string );
printf("dammi una lettera\n");
char x;
while(x!=0)
{
	scanf_s("%c",&x);
	printf("%d\n",x );
}
	return 0;
}
