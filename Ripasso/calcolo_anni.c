#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	/*input*/
	char N[20];//anno attuale
    char n[20];//anno inserito dall'utente
    printf("in che anno sei nato?\n");
    scanf_s("%s",n);
    printf("in che anno siamo?\n");
    scanf_s("%s",N);
    //converti il carattere in numero con atoi
    printf("hai %d anni\n",atoi(N)-atoi(n) );

}