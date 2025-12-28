#include <stdio.h>
#include <string.h>

int main(){
	char str1[]="KKKK";
	char str2[50];
	strcpy(str2,str1);// primo slot dove verrà copia la stringa
	printf("%s",str2 );
	return 0;
}