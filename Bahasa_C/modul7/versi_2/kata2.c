#include "kata2.h"
Kata KT;
extern char CC;
void IgnoreBlank()
{
    while(!EOP&&CC==BLANK)
    {
        ADV();
    }
}
void StartKata()
{
    START();
    advkata();
}
void advkata()
{
    IgnoreBlank();
    KT.Panjang=0;
    while(!EOP()&&CC!=BLANK)
    {
        KT.TabKata[KT.Panjang]=CC;
        KT.Panjang++;

        KT.TabKata[KT.Panjang]=0;
        ADV();
    }
}
void  SalinKata ()
{
        //kamus lokal
       // int i =0;
        //algoritma
    KT.Panjang=0;
    while(!EOP()&&CC!=BLANK)
    {
        KT.TabKata[KT.Panjang]=CC;
        KT.Panjang++;
        KT.TabKata[KT.Panjang]=0;
        ADV();
    }

}
boolean IsKataSama  (Kata K1, Kata  K2 )
{
        int i=0;
        if (K1.Panjang == K2.Panjang)
        {
                while (i<K1.Panjang)
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
