#include <stdio.h>
/*
verifica ricorsivamente una tripla che 
ha un numero positivo e due negativi 
da compilare
*/
int verifica(int*sca,int n,int i,int pos,int neg){
    if (i==n) return pos==1&&neg==2;
    return verifica(sca,n,i+1,
                    pos+(sca[i]>0?1:0),
                    neg+(sca[i]<0?1:0)
                    );
}
int guardatripla(int* sca,int n){
    return verifica(sca,n,0,0,0);
}
int main(){
    printf("ciao sono un programma che verifica se esiste\nuna tripla con due numeri negativi e un positivo\n");
    printf("inserisci numero elementi");
    int n=0;
    scanf("%d",&n);
    if(n!=3){
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
 