#include "kata3.h"
Kata CKata;
extern char CC;


void Ignore_Blank()
{
        while (CC == BLANK) {
                ADV();
        }
}
void INITAKSES()
{      // printf("s");
       START();
    ADVKATA();

}
void ADVKATA ()
{

       if (!EOP()) {
               SalinKata();
            Ignore_Blank();
        }


}


void  SalinKata ()
{
        //kamus lokal
         CKata.Panjang=0;
        while (CC != BLANK && !EOP()) {
                CKata.TabKata[CKata.Panjang] = CC;
                CKata.Panjang++;
                CKata.TabKata[CKata.Panjang]=0;
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
                        if (K1.TabKata[i] != K2.TabKata[i])
                        {
                            return false;
                        }
                        i++;
                }
        } else {
            return false;

        }
        return true;
}
