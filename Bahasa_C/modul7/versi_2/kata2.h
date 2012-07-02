#ifndef KATA2_H_INCLUDED
#define KATA2_H_INCLUDED
#include "karakter.h"
#ifndef BLANK
#define BLANK ' '
#endif

#define NMax 50

typedef struct
{
    char TabKata[NMax];
    int Panjang;
}Kata;

extern Kata KT;
void IgnoreBlank();
void StartKata();
void advkata();
void  SalinKata ();

boolean IsKataSama  (Kata K1, Kata  K2 );
#endif // KATA2_H_INCLUDED
