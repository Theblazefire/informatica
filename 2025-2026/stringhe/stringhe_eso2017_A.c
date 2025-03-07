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
fgets(stringa,50,stdin);//prendi stringa
stringa[strlen(stringa)-1]='\0';
printf("%s",stringa);

}//chiusura main
