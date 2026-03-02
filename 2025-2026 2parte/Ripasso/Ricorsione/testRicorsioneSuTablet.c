#include <stdio.h>
/*
verifica ricorsivamente una tripla che 
ha un numero positivo e due negativi 
da compilare
*/
int verifica(int*sca,int n,int i){
    int ris;
    if(i+2==n){
        ris=1;
    }else{
        ris=( 
        (sca[i]>=0 && (!(sca[i+1]>0&&sca[i+2]>0)) )||
        (sca[i+1]>=0 && (!(sca[i]>0&&sca[i+2]>0)) )||
        (sca[i+2]>=0 && (!(sca[i+1]>0&&sca[i]>0)) )
        )&&verifica(sca,n,i+1);
    }
    return ris;
}

int guardatripla(int* sca,int n){
    return verifica(sca,n,0);
}
int main(){
    printf("ciao sono un programma che verifica se esiste\nuna tripla con due numeri negativi e un positivo\n");
    printf("inserisci numero elementi");
    int n=0;
    scanf("%d",&n);
    if(3<n){
        printf("non e' una tripla");
        }else{
            printf("leggo la tripla");
            int sca[n];
            for(int i=0; i<n;i++){
                printf("inserisci %d° elemento",i+1);
                scanf("%d",&sca[i]);
            }
            if(guardatripla(sca,n)){
                printf(":)");
            }else{
                printf(":(");
            }
        }
}
 