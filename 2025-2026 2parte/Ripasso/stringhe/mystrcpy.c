#include <stdio.h>
#include <string.h>

char* mystrcpy(char* str2,char* str1){
	int i=0;
	while(str1[i]!='\0'){
			str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	return str2;
}

int main(){
	char str1[]="NNNN";
	char str2[50];
	mystrcpy(str2,str1);
	printf("%s", str2);
	return 0;
}