#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
crea un file .txt
dove l'utente sxceiverà la lista della spesa  
*/
int main()
{
    FILE *Op= fopen("lista della spesa.txt","w");
    printf("Ciao sono nun programma che scriverà la tua lista della spesa in un file .txt\n");
    int fine=0;
    int n;
    char stringa[60];
    while (!fine)
    {
        //inserisci elemento
        printf("cosa devi comprare?\n");
        fgets(stringa,60,stdin);//prendo elemento da tastiera
        stringa[strlen(stringa)-1]='\0';//elimina \n
        fprintf(Op,"%s ",stringa);//scrivo nel file

        //inserisci numero dell'elemento
        printf("inserisci quantit%c dell'emento\n",133);
        scanf("%d",&n);
        fprintf(Op,"%d\n",n);
        //interrompere il while
        printf(" chiudere lista (1/0) SI=1, NO= 0\n");
        scanf("%d", &fine);
        while (getchar()!='\n')//Pulizia del buffer
        {
            /* code */
        }
        
    }//chiusura while
    fclose(Op);
    
    return 0;
}