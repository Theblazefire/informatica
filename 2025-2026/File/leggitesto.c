#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char a;
    FILE *Op=fopen("leggimi.txt","r");
    fprintf(Op,"a1");
    fscanf(Op,"%c%d",&a,&n);
    printf("carattere %c\nnumero %d\n",a,n);
    fclose(Op);
}