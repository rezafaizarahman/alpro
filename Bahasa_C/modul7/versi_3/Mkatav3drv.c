#include "kata3.h"
extern char CC;
extern Kata CKata;
extern boolean EndKata;
Kata KataWHILE;
int NWHILE;
int main()
{

    /* Kamus lokal  */


/* ALgoritma  : menuliskan isi pita  */
        INITAKSES();
        printf("Ckata : \n");
        while(CKata.Panjang>0&&!EOP())
        {
            printf("%s\n",CKata.TabKata);
            ADVKATA();
        }

    return 0;
}
