#include <stdio.h>
void modifica(char str[]){
	str[0]='C';
}
int main(){
	char stringa[]="ciao";
	printf("Prima della modifica\n");
	printf("%s\n",stringa );
	printf("Dopo la modifica\n");
	modifica(stringa);
	printf("%s\n", stringa);
	return 0;
}