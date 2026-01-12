/*
ESERCIZIO STRINGHE 2 (9 punti)
Consegnare su moodle (al link Consegna compito C – Stringhe 2) una funzione C funzioneStringhe2
che riceve come parametro una stringa e la modifica così che ogni sottostringa di almeno tre
caratteri consecutivi uguali venga rimpiazzata da un singolo carattere della sequenza di caratteri
uguali seguito da un trattino ‘-’ e un maggiore ‘>’ a simboleggiare una freccia “->”. Ad esempio, se la
stringa parametro è "aaaaabbbcaa", allora la funzione deve modificare la stringa in "a->b->caa".
*/
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

void funzioneStringhe2(char* str) {
    int i = 0;
    int j = 0; // posizione dove scrivere
    char temp[50];
    while (str[i] != '\0') {
        // Controlla se ci sono almeno 3 caratteri uguali
        if (str[i] == str[i+1] && str[i+1] == str[i+2]) {
            // Scrivi: carattere + "->"
            char carattere = str[i];
            temp[j++] = carattere;
            temp[j++] = '-';
            temp[j++] = '>';
            
            // Salta tutti i caratteri uguali
            while (str[i] == carattere) {
                i++;
            }
        } else {
            // Copia il carattere normale
            temp[j++] = str[i++];
        }
    }
    temp[j] = '\0'; // termina la stringa
    strcpy(str,temp);
}

int main() {
    char stringa[50];
    printf("Inserisci la stringa: ");
    fgets(stringa, 50, stdin);
    stringa[strcspn(stringa, "\n")] = '\0';
    
    funzioneStringhe2(stringa);
    printf("%s\n", stringa);
    
    return 0;
}