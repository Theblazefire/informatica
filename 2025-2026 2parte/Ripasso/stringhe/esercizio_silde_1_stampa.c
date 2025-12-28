#include <stdio.h>

int main(){
	char stringa[50]="ciaooo";
	int i=0;
	while(stringa[i]!='\0'){
		printf("%c",stringa[i] );
		i++;
	}
	return 0;
}