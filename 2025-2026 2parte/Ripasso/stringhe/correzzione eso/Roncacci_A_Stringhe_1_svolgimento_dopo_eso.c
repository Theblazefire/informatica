#include <stdio.h>
#include <string.h>

/*
 * ESERCIZIO:
 * Implementare la funzione funzioneStringhe1 che:
 * - Riceve una stringa di caratteri (cifre e/o lettere)
 * - Restituisce il carattere corrispondente alla CIFRA MASSIMA trovata
 * - Se la stringa e' vuota o non contiene cifre, restituisce '\0'
 *
 * Esempi:
 *   "394"   -> '9'
 *   "a3b7c" -> '7'
 *   "abc"   -> '\0'
 *   ""      -> '\0'
 */

/* Svolgimento corretto
char funzioneStringhe1(char* str) {
    Controllo stringa vuota 
    int n = strlen(str);
    if (n == 0) return '\0';

    int i = 0;
    int max = -1; Nessuna cifra trovata ancora 

    while (str[i] != '\0') {
        Controllo che il carattere sia una cifra (senza isdigit)
        if (str[i] >= '0' && str[i] <= '9') {
            int num = str[i] - '0';
            if (num > max) {
                max = num;
            }
        }
        i++;
    }

    Nessuna cifra trovata nella stringa
    if (max == -1) return '\0';

    return (char)(max + '0');
}
*/

int main() {
    /* Test 1: stringa di sole cifre */
    char s1[] = "394";
    printf("Input: \"%s\" -> Cifra max: '%c'\n", s1, funzioneStringhe1(s1));

    /* Test 2: stringa mista lettere e cifre */
    char s2[] = "a3b7c1";
    printf("Input: \"%s\" -> Cifra max: '%c'\n", s2, funzioneStringhe1(s2));

    /* Test 3: stringa senza cifre */
    char s3[] = "abc";
    char r3 = funzioneStringhe1(s3);
    if (r3 == '\0')
        printf("Input: \"%s\" -> Cifra max: '\\0' (nessuna cifra)\n", s3);
    else
        printf("Input: \"%s\" -> Cifra max: '%c'\n", s3, r3);

    /* Test 4: stringa vuota */
    char s4[] = "";
    char r4 = funzioneStringhe1(s4);
    if (r4 == '\0')
        printf("Input: \"\" -> Cifra max: '\\0' (stringa vuota)\n");
    else
        printf("Input: \"\" -> Cifra max: '%c'\n", r4);

    /* Test 5: una sola cifra */
    char s5[] = "5";
    printf("Input: \"%s\" -> Cifra max: '%c'\n", s5, funzioneStringhe1(s5));

    return 0;
}
