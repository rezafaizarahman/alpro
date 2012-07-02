#include "kata.h"

boolean EndKata;
Kata CKata;
extern char CC;


void Ignore_Blank(void)
{
        while (CC == BLANK) {
                ADV();
        }
}


void  STARTKATA(void)
{
        /* Kamus Lokal */
        // Algoritma
        START();
        Ignore_Blank();
        if (EOP() || CC == BLANK ) {
                EndKata = true;
        } else {
                SalinKata();
        }
}

void ADVKATA (void)
{
        //algoritma
        Ignore_Blank();
        if (!EOP()) {
                SalinKata();
        } else {
                EndKata = true;
        }
}
void  SalinKata (void)
{
        //kamus lokal
       // int i =0;
        //algoritma
        CKata.Length=0;
        while (CC != BLANK && !EOP()) {
                CKata.TabKata[CKata.Length] = CC;
                CKata.Length++;
                CKata.TabKata[CKata.Length]=0;
                ADV();
        }

        if (CC == EOP() && CKata.Length<NMax)
        {
            EndKata = true;
        } else {
                EndKata = false;
        }
}
boolean IsKataSama  (Kata K1, Kata  K2 )
{
        int i=0;
        if (K1.Length == K2.Length)
        {
                while (i<K1.Length)
                {
                        if (K1.TabKata[i] != K2.TabKata[i]){
                             return false;
                        }
                        i++;
                }
        } else {
            return false;
        }
        return true;
}
