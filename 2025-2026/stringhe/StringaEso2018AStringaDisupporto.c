#include <stdio.h>
#include <string.h>

void soloParole(char* str) {
    int i = 0;    // indice di lettura
    int j = 0;    // indice di scrittura
    int inWord = 0; // flag per indicare se siamo in una parola

    // Scorri tutta la stringa di input
    while (str[i] != '\0') {
        // Se è un carattere alfabetico
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Se stiamo iniziando una nuova parola dopo uno spazio
            if (inWord == 0 && j > 0) {
                // Aggiungiamo uno spazio prima della nuova parola
                str[j++] = ' ';
            }
            // Copiamo il carattere alfabetico e poi incrementiamo j
            str[j++] = str[i];
            inWord = 1; // Ora siamo in una parola
        } else {
            // Carattere non alfabetico, lo ignoriamo
            // Ma segniamo che non siamo più in una parola
            inWord = 0;
        }
        i++;
    }
    
    // Terminiamo la stringa
    str[j] = '\0';
}

int main() {
    printf("correggo la stringa\n");
    printf("inserisci la stringa\n");
    char stringa[60];
    fgets(stringa, 60, stdin);
    stringa[strlen(stringa)-1] = '\0';  // Rimuovi il carattere newline
    soloParole(stringa);
    printf("la stringa modificata è %s\n", stringa);
   
}