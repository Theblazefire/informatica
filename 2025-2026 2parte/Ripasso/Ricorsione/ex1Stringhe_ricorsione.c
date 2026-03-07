/*
Esercizio 1(AlmenoUnaMinuscola) 
Scrivere un programma che prende in input 
una stringa non vuota di caratteri e che 
restituisce true se la stringa è composta 
da almeno un carattere alfabetico minuscolo, 
false altrimenti. Tale verifica deve essere 
realizzata attraverso una funzione ricorsiva.
*/

#include <stdio.h>

int verifica(char* str,int i){
	int count=0;
	if (str[i]=='\0')
	{
		return count;
	}else{
		if((str[i]>='a' && str[i]<='z'))
		{
			count++;
		}
		return count+verifica(str,i+1);
	}
	
}
int AlmenoUnaMinuscola(char* str){
	return verifica(str,0)==1;
}
int main(void) {
    char s1[] = "CIAO";
    char s2[] = "CiAO";
    char s3[] = "1234";
    char s4[] = "abc";
    char s5[] = "A1b2";
    char s6[] = "Z";
    char s7[] = "z";

    printf("=== Test AlmenoUnaMinuscola ===\n\n");

    printf("Test 1:\n");
    printf("Stringa: \"%s\"\n", s1);
    printf("Atteso: false\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s1) ? "true" : "false");

    printf("Test 2:\n");
    printf("Stringa: \"%s\"\n", s2);
    printf("Atteso: true\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s2) ? "true" : "false");

    printf("Test 3:\n");
    printf("Stringa: \"%s\"\n", s3);
    printf("Atteso: false\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s3) ? "true" : "false");

    printf("Test 4:\n");
    printf("Stringa: \"%s\"\n", s4);
    printf("Atteso: true\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s4) ? "true" : "false");

    printf("Test 5:\n");
    printf("Stringa: \"%s\"\n", s5);
    printf("Atteso: true\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s5) ? "true" : "false");

    printf("Test 6:\n");
    printf("Stringa: \"%s\"\n", s6);
    printf("Atteso: false\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s6) ? "true" : "false");

    printf("Test 7:\n");
    printf("Stringa: \"%s\"\n", s7);
    printf("Atteso: true\n");
    printf("Ottenuto: %s\n\n", AlmenoUnaMinuscola(s7) ? "true" : "false");

    return 0;
}
