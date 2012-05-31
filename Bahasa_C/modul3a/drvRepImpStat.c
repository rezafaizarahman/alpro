#include <stdio.h>
#include <stdlib.h>
#include "RepImpStat.h"
/*
nama :dyarsa S.Pamungkas
Nim  :A11.2011.06186
Klmpk: A11.4204


---copyright dy_arsa---
*/
int main()
{
TabInt T,T1,T2,TCopy,TInv,TSim,TBaca;
 int i;
    MakeEmpty(&T1);
    for (i=1;i<=10;i++)
    {

        T1.TI[i]=i;
    }
     TulisIsiTab(T1);
//       printf("Tekan sembarang tombol untuk melanjutkan....\n");getch();
    printf("\n");
    printf("Empty T=1, F=0 :%d\n",IsEmpty(T1));
    printf("Full   T=1, F=0 :%d\n",IsFull(T1));
//       printf("Tekan sembarang tombol untuk melanjutkan....\n");getch();
    printf("\n");
    printf("index 0           :%s\n",IsIdxValid(T1,0)?"Ya":"Tidak");
    printf("index 1           :%s\n",IsIdxValid(T1,1)?"Ya":"Tidak");
    printf("index 5           :%s\n",IsIdxValid(T1,5)?"Ya":"Tidak");
    printf("index 10          :%s\n",IsIdxValid(T1,10)?"Ya":"Tidak");
    printf("index 101         :%s\n",IsIdxValid(T1,101)?"Ya":"Tidak");

    printf("GetFirstIdx Efektif]  :%d\n",GetFirstIdx(T1));
    printf("GetLastIdx Efektif   :%d\n",GetLastEfIdx(T1));
    printf("\n");
    MakeEmpty(&T2);
    for (i=1;i<=10;i++)
    {

        T2.TI[i]=i*2+1;
    }
    printf("T1\n");
    TulisIsiTab(T1);
    printf("\nT2 \n");
    TulisIsiTab(T2);
    printf("\n");
    printf("\nT1+T2 :\n"); PlusTab(T1,T2);
    printf("\nT2-T1 :\n"); MinusTab(T2,T1);
    printf("\nT1*T2 :\n");KaliTab(T1,T2);
    printf("\nT1*2:\n"); KaliKons(T1,2);
    printf("\nApakah T1 Sama dg T2?: %s\n",IsEQ(T1,T2)?"Ya":"Tidak");
    printf("\nApakah T1 Kurang dari T2?: %s\n",IsLess(T1,T2)?"Ya":"Tidak");

    printf("\nApa Nilai Maksimum tabel T1?: %i\n",ValMax(T1));
    printf("\nApa Nilai Minimum tabel T1?: %i\n",ValMin(T1));
    printf("\nApa index Nilai Maksimum tabel T2?: %i\n",IdxMaxTab(T2));
    printf("\nApa index Nilai Minimum tabel T2?: %i\n",IdxMinTab(T2));
    printf("\nApa Nilai Maksimum tabel T?: %i\n",Max(T));
    printf("\nApa Nilai Minimum tabel T?: %i\n",Min(T));
    printf("\nApa Nilai MaksMin tabel T?: ");MaxMin(T);

    return 0;
}
