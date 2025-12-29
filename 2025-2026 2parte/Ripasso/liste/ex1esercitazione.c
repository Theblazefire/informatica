#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct vertice{
    float x;
    float y;
}v;

typedef struct parallelogramma{
    v bs;
    v ad;
    float b;
}pal;

int main(){

 pal *p = (pal*)malloc(sizeof(pal));
    
    printf("Inserisci un parallelogramma\n");
    printf("inserici lunghezza della base\n");
    scanf("%f",p->b);
    printf("inserici la X del vertice bs\n");
    scanf("%f",p->bs.x);
    printf("inserici la Y del vertice bs\n");
    scanf("%f",p->bs.y);
    
    printf("inserici la X del vertice ad\n");
    scanf("%f",p->ad.x);
    printf("inserici la Y del vertice ad\n");
    scanf("%f",p->ad.y);

}


