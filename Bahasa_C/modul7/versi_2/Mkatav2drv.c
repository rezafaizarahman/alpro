#include "kata2.h"
Kata Coba;
extern char CC;
extern Kata KT;
int main()
{
    StartKata();
    Coba=KT;
    printf("KT : \n");
    while(KT.Panjang>0&&!EOP())
    {
       printf("%s\n",KT.TabKata);
       advkata();
    }

    printf("\n\nApa kah sama ? %s",(IsKataSama(Coba,KT))?"Sama":"Tidak");
    //printf("%i\n",a);

    return 0;
}
