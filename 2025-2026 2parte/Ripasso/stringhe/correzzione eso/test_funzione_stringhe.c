#include <stdio.h>
#include <string.h>
int is_num(char c){
    return (c>='0'&&c<='9');
}

void canc(char* str, int pos){
    int j=pos;
    while(str[j]!='\0'){
        str[j]=str[j+1];
        j++;
    }
}

// ───── funzioni di supporto ───── 
/*
int is_num(char c) {
    return (c >= '0' && c <= '9');
}

void canc(char *str, int pos) {
    int j = pos;
    while (str[j] != '\0') {
        str[j] = str[j + 1];
        j++;
    }
}
*/
// ───── versione BUGGY (originale) ───── 

void funzioneStringhe2_buggy(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        int curr = (str[i] == '1' && str[i + 1] == '2');
        if (curr) {
            str[i + 2] = 'x';              // BUG 1: assegna sempre 'x'
            if (!is_num(str[i])) {         // BUG 2: controlla str[i] (sempre '1')
                canc(str, i);
            } else {
                i++;
            }
        }
        // BUG 3: manca i++ nel ramo else → loop infinito se curr==0
        // aggiunto qui solo per far girare il test senza bloccarsi
        else {
            i++;
        }
    }
}

// ───── versione CORRETTA ───── 

/*
void funzioneStringhe2(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '1' && str[i + 1] == '2') {
            if (is_num(str[i + 2])) {      // str[i+2] è cifra → sostituisci con 'x'
                str[i + 2] = 'x';
                i++;
            } else {                        // str[i+2] non è cifra → cancella
                canc(str, i + 2);
            }
        } else {
            i++;
        }
    }
}
*/
//12uu->12u
//120h->12xh

void funzioneStringhe2(char *str){
    int i=0;
    while(str[i]!='\0'){
        if (str[i]=='1'&&str[i+1]=='2')
        {
            if (is_num(str[i+2]))
            {
                str[i+2]='x';
                i++;
            }else{
                canc(str,i+2);
                i++;
            }
        }else{
            i++;
        }
    }
}

// ───── helper di stampa ───── 

void run_test(int n, const char *input, const char *expected, int use_correct) {
    char buf[256];
    strncpy(buf, input, sizeof(buf));

    if (use_correct)
        funzioneStringhe2(buf);
    else
        funzioneStringhe2_buggy(buf);

    int ok = (strcmp(buf, expected) == 0);
    printf("Test %d [%s] | input: \"%-15s\" | atteso: \"%-15s\" | ottenuto: \"%-15s\" | %s\n",
           n,
           use_correct ? "CORRETTA" : "BUGGY   ",
           input, expected, buf,
           ok ? "OK" : "FAIL");
}

// ───── main ─────

int main(void) {
    printf("=== Test versione CORRETTA ===\n");
    // Caso 1: str[i+2] è cifra  → '3' diventa 'x'
    run_test(1, "a123b",   "a12xb",  1);
    // Caso 2: str[i+2] non è cifra → 'z' viene cancellato
    run_test(2, "a12zb",   "a12b",   1);
    // Caso 3: str[i+2] è '\0'  → nessun carattere dopo 12, cancella il terminatore? no: canc lascia stringa invariata
    run_test(3, "a12",     "a12",    1);
    // Caso 4: nessun "12" presente → stringa invariata
    run_test(4, "hello",   "hello",  1);
    // Caso 5: più occorrenze di "12"
    run_test(5, "12312x",  "12x12x", 1);
    // Caso 6: "12" sovrapposti tipo "123" → 3 sostituito
    run_test(6, "0129abc", "012xabc",1);

    printf("\n=== Test versione BUGGY ===\n");
    // Dimostra bug 1+2: anche con str[i+2]='z' (non cifra), scrive 'x' invece di cancellare
    run_test(7, "a12zb",   "a12b",   0);  // atteso corretto, buggy scriverà 'x'
    // str[i+2] cifra: in questo caso buggy e corretta coincidono
    run_test(8, "a123b",   "a12xb",  0);

    return 0;
}
