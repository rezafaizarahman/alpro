#ifndef KATA_H_INCLUDED
#define KATA_H_INCLUDED

#include "karakter.h"
#ifndef BLANK
#define BLANK ' '
#endif
#define NMax 50


typedef struct {
        char TabKata[NMax];
        int Length;
}Kata;

void Ignore_Blank(void);
void  STARTKATA(void);
void ADVKATA (void);
void  SalinKata (void);
boolean IsKataSama  (Kata K1, Kata  K2);
#endif
