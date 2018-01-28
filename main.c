#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum Color
{
    Bialy,
    Czarny,
    Czerwony,
    Niebieski
} Color;

typedef enum Fitting
{
    Podstawowe,
    Standard,
    Premium
} Fitting;
//KLASA SAMOCHODOWA
typedef struct Samochod {
    int waga;
    int cena;
    enum Color kolor;
    enum Fitting wyposazenie;
} Samochod;

Samochod bryki[10];

int losuj_liczbe(int min, int max)
{
    //max++;
    return (rand()%((max+1)-min))+min;
}

void sortuj_samochody(char pole, char kierunek);//SORTOWANIE


int main()
{
    srand(time(NULL));
    //Samochod bryki[10];
    unsigned i,k;
    for (i=0;i<10;i++)
    {
        bryki[i].waga=losuj_liczbe(500,1500);
        bryki[i].cena=losuj_liczbe(20000,30000);
        k=losuj_liczbe(1,4);
        switch(k)
        {
            case 1:
                bryki[i].kolor=Bialy;
                break;
            case 2:
                bryki[i].kolor=Czarny;
                break;
            case 3:
                bryki[i].kolor=Czerwony;
                break;
            case 4:
                bryki[i].kolor=Niebieski;
                break;
        }
        k=losuj_liczbe(1,3);
        switch(k)
        {
            case 1:
                bryki[i].wyposazenie=Podstawowe;
                break;
            case 2:
                bryki[i].wyposazenie=Standard;
                break;
            case 3:
                bryki[i].wyposazenie=Premium;
                break;
        }
    }
    int z=0;
    while (z<10)
    {
        printf("pole=%d kg\n",bryki[z].waga);
        z++;
    }
    printf("===============\n");
    z=0;
    sortuj_samochody('w','r');
    while (z<10)
    {
        printf("pole=%d kg\n",bryki[z].waga);
        z++;
    }
    printf("===============\n");
    sortuj_samochody('c','r');
    z=0;
      while (z<10)
    {
        printf("pole=%d zl\n",bryki[z].cena);
        z++;
    }
    printf("===============\n");
    sortuj_samochody('w','m');
    z=0;
      while (z<10)
    {
        printf("pole=%d kg\n",bryki[z].waga);
        z++;
    }
    printf("===============\n");
    sortuj_samochody('k','r');
    z=0;
    Color r;
      while (z<10)
    {
        //bryki[z].kolor=Bialy;
        r=bryki[z].kolor;
        printf("pole=%d \n",r);
        z++;
    }
    return 0;
}

void sortuj_samochody(char pole, char kierunek)
{
    unsigned i, j;
    Samochod temp;
    if ((pole=='w')&&(kierunek=='r'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].waga < bryki[j-1].waga )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='c')&&(kierunek=='r'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].cena < bryki[j-1].cena )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='w')&&(kierunek=='m'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].waga > bryki[j-1].waga )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='c')&&(kierunek=='m'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].cena > bryki[j-1].cena )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='k')&&(kierunek=='r'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].kolor < bryki[j-1].kolor )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='f')&&(kierunek=='r'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].wyposazenie < bryki[j-1].wyposazenie )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
     if ((pole=='k')&&(kierunek=='m'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].kolor > bryki[j-1].kolor )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
    if ((pole=='f')&&(kierunek=='m'))
    {
        for(i = 0; i < 9; i++)
            for(j = 9; j > i; j--)
                if( bryki[j].wyposazenie > bryki[j-1].wyposazenie )
                {
                    temp = bryki[j-1];
                    bryki[j-1] = bryki[j];
                    bryki[j] = temp;
                }
    }
}

