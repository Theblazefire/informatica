#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *Op = fopen("lista della spesa.txt", "w");
    printf("Ciao sono un programma che scriverà la tua lista della spesa in un file .txt\n");
    
    int fine = 0;
    int n;
    char stringa[60];
    char input_buffer[10]; // Buffer per input numerici

    while (!fine) {
        // Inserisci elemento
        printf("Cosa devi comprare?\n");
        fgets(stringa, 60, stdin);
        stringa[strlen(stringa)-1] = '\0'; // Rimuove il newline
        fprintf(Op, "%s ", stringa);

        // Inserisci quantità
        printf("Inserisci quantità dell'elemento\n");
        fgets(input_buffer, 10, stdin);//prendi i numeri come stringhe
        sscanf(input_buffer, "%d", &n);//converti i numeri da stringhe a interi
        fprintf(Op, "%d\n", n);

        // Chiedi se continuare
        printf("Chiudere lista (1/0) SI=1, NO=0\n");
        fgets(input_buffer, 10, stdin);//prendi i numeri come stringhe
        sscanf(input_buffer, "%d", &fine);//converti i numeri da stringhe a interi
    }

    fclose(Op);
    return 0;
}