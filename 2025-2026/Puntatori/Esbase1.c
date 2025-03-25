#include<stdio.h>
int main()
{
    int x=10;
    int* Px;
    Px=&x;
    printf("%d", *Px);
    return 0;
}