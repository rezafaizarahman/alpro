#include "karakterh.h"

extern char CC;

int DSP,DSPA,DSPAN,DSPV,DSPK,DSP1;
int main()
{
    printf("=========================");
    printf("=Program Mesin Karakter =");
    printf("=========================");
    printf("\n\nIsi file krktrdsp.txt...\n");
    printf("===========================");
    printf("=========================\n\n");

    START();
    while(!EOP())
    {
        printf("%c",CC);
        DSP+=CountHuruf(CC);
        DSPA+=CountHurufA(CC);
        DSPAN+=CountAN(CC);
        DSPV+=CountVokal(CC);
        DSPK+=CountKonsonan(CC);
        DSP1+=Count_1(CC);
        ADV();
    }

    printf("\n\n===========================");
    printf("=========================\n");
    printf("\nAkhir Pembacaan pita...\n");
    printf("\nJumlah Total Karakter    :%d\n",DSP);
    printf("\nJumlah Karakter A        :%d\n",DSPA);
    printf("\nJumlah Karakter AN       :%d\n",DSPAN);
    printf("\nJumlah Karakter Vokal    :%d\n",DSPV);
    printf("\nJumlah Karakter Konsonan :%d\n",DSPK);
    printf("\nJumlah Karakter 1        :%d\n",DSP1);

    printf("=========================");
    printf("=Copyright by @dyarsa_SP=");
    printf("=========================");

    return 0;
}
