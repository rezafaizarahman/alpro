#ifndef KATA3_H_INCLUDED
#define KATA3_H_INCLUDED

#include "karakter.h"
#define BLANK ' '

#define NMax 50

typedef struct
{
    char TabKata[NMax];
    int Panjang;
}Kata;

void Ignore_Blank(void);
void INITAKSES(void);
void ADVKATA ();
void  SalinKata ();

boolean IsKataSama  (Kata K1, Kata  K2 );


#endif // KATA3_H_INCLUDED
