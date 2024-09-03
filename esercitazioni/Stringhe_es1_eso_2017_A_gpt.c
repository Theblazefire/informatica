#include <stdio.h>
#include <ctype.h>  // Per la funzione isalpha

void rimuoviNumeriSpeciali(char *str) {
    char *dest = str;  // Puntatore alla posizione di scrittura nella stringa

    while (*str) {
        // Controlla se il carattere è una lettera o uno spazio
        if (isalpha((unsigned char)*str) || *str == ' ') {
            *dest++ = *str;  // Copia il carattere nella posizione di destinazione
        }
        str++;  // Passa al carattere successivo
    }
    *dest = '\0';  // Termina la stringa risultante
}

int main() {
    char str[] = "1234ad asd123";
    
    rimuoviNumeriSpeciali(str);
    
    printf("Stringa risultante: '%s'\n", str);
    
    return 0;
}
