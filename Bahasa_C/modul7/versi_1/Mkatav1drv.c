#include "kata.h"

Kata Coba;
extern char CC;
extern Kata CKata;
extern boolean EndKata;
int main()
{
    STARTKATA();
    Coba=CKata;
    printf("Ckata : \n");
    while(CKata.Length>0&&!EOP())
    {
       printf("%s\n",CKata.TabKata);
        ADVKATA();
    }
    STARTKATA();
    printf("\nCoba : \n");
    while(Coba.Length>0&&!EOP())
    {
        printf("%s\n",Coba.TabKata);

        ADVKATA();
    }
    printf("\n\nApa kah sama ? %s",(IsKataSama(Coba,CKata))?"Sama":"Tidak");
    //printf("%i\n",a);

    return 0;

}
