#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PAROLE 3
#define LUNGHEZZA 255


void inserisciParole(char [][LUNGHEZZA]);
void stampaParole(char [][LUNGHEZZA]);
void ordina(char [][LUNGHEZZA]);
int confrontaParole(char [], char []);
void scambiaParole(char [], char []);

int main()
{

    char parole[PAROLE][LUNGHEZZA];

    inserisciParole(parole);
    printf("\n----------------------------\n");
    printf("      Parole inserite       \n");
    printf("----------------------------\n");
    stampaParole(parole);
    ordina(parole);
    printf("\n----------------------------\n");
    printf("      Parole ordinate       \n");
    printf("----------------------------\n");
    stampaParole(parole);

    return 0;
}

void inserisciParole(char _parole[][LUNGHEZZA])
{
    int i;

    for (i=0; i < PAROLE; i++)
    {
        printf("Inserisci la %d° parola: ",i+1);
        scanf("%s",_parole[i]);
    }
}

void stampaParole(char _parole[][LUNGHEZZA])
{
    int i;

    for (i=0; i < PAROLE; i++)
    {
        printf("%d° parola: %s\n",i+1, _parole[i]);
    }
}

void ordina(char _parole[][LUNGHEZZA])
{
    int i,j, indicemin;
    for (i=0; i < PAROLE-1; i++)
    {  
      indicemin = i;
      for(j=i+1; j < PAROLE; j++)
      {
          if (confrontaParole(_parole[j], _parole[indicemin]) == 1)
              indicemin = j;
      }
      scambiaParole(_parole[indicemin], _parole[i]);
    }
}


int confrontaParole(char _parola1[], char _parola2[])
{
    int i;
    int daScambiare = 0;
    int len1 = strlen(_parola1);
    int len2 = strlen(_parola2);
    int minLen = len1 > len2 ? len2 : len1;

    for (i=0; i < minLen; i++)
    {
        if (_parola1[i] > _parola2[i])
            return 1;  //scambiare

        if (_parola1[i] == _parola2[i])
            daScambiare = 0;

    }

    //due parole con parte/radice comune es gatto ~ gattone
    //scambio metto la più corta
    if (len1 > len2 && daScambiare == 0)
    {
        daScambiare = 1;
    }

    return daScambiare;
}

void scambiaParole(char _parola1[], char _parola2[])
{
    char tmp[LUNGHEZZA];

    strcpy(tmp, _parola1);
    strcpy(_parola1, _parola2);
    strcpy(_parola2, tmp);
}
