#include <stdio.h>
//funzine principale
int main()
{
	int a=1,b=1;
	printf("%d\n",(((a||b)&&(1&&b))||b)&&0 );
	int a=0,b=1;
	printf("%d\n",(((a||b)&&(1&&b))||b)&&0 );
	int a=1,b=0;
	printf("%d\n",(((a||b)&&(1&&b))||b)&&0 );
	int a=0,b=0;
	printf("%d\n",(((a||b)&&(1&&b))||b)&&0 );



}//chiusura main