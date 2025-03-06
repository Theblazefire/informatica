#include <stdio.h>
#include <string.h>
void SoloAlfabetici()
{


}//chiusura solo alfabetici
int main()
{
char stringa[50];
/*input*/
printf("inserisci una stringa");
fget(stringa,50,stdio);//prendi stringa
stringa[strlen(stringa)-1]='\0';
printf('%s',stringa);

}//chiusura main
