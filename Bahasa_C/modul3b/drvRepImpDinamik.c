#include <stdio.h>
#include <stdlib.h>
#include "HimpDinamik.h"

int main()
{
Tabint T,T1,T2,TCopy,TInv,TSim,TBaca;
 int i;
    MakeEmpty(15,&T1);
    for (i=1;i<=10;i++)
    {

        T1.T[i]=i;
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
    MakeEmpty(15,&T2);
    for (i=1;i<=10;i++)
    {

        T2.T[i]=i*2+1;
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
    printf("\nApakah 2 ada di index tabel T1?: %i\n",Search1(T1,2));
    printf("\nApakah 2 ada di index tabel T2?: %i\n",Search2(T2,2));
    printf("\nApakah 5 ada di tabel T1?: %s\n",SearchB(T1,5)?"Ada":"Tidak");
    printf("\nApakah 3 ada di tabel T2?: %s\n",SearchSentinel(T2,3)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T1?: %i\n",ValMax(T1));
    printf("\nApa Nilai Minimum tabel T1?: %i\n",ValMin(T1));
    printf("\nApa index Nilai Maksimum tabel T2?: %i\n",IdxMaxTab(T2));
    printf("\nApa index Nilai Minimum tabel T2?: %i\n",IdxMinTab(T2));
    MakeEmpty(15,&T);
    for (i=1;i<=10;i++)
    {
        if(i%2==0)
        {
               T.T[i]=i*3+2;
        }else{
            T.T[i]=i*2+1;
        }
    }
    printf("Unsorted tabel T :\n");
    TulisIsiTab(T);
    MaxSortAsc(&T);
    printf("\nSorted Max Sort Ascending tabel T :\n");
    TulisIsiTab(T);
    InsSortDesc(&T);
    printf("\nSorted Insert Sort Descending tabel T :\n");
    TulisIsiTab(T);
    printf("\nCopy Tabel T1 Ke Tabel TCopy : \n");CopyTab(T1,&TCopy);
    TulisIsiTab(TCopy);
    printf("\nInverse Tabel TCopy :\n");InverseTab(&TCopy);
    TulisIsiTab(TCopy);
    MakeEmpty(10,&TSim);
    TSim.T[1]=1;
    TSim.T[2]=2;
    TSim.T[3]=3;
    TSim.T[4]=2;
    TSim.T[5]=1;
    printf("\nTSIm\n");
    TulisIsiTab(TSim);
    printf("\nApakah TSim Simetris?: %s\n",IsSimetris(TSim)?"Ya":"Tidak");
    MaxSortAsc(&T);
    TulisIsiTab(T);
    printf("\nMenambahkan 27 pada index terakhir Tabel diatas: \n");AddAsLastEl(&T,27);
    TulisIsiTab(T);
    printf("\nMenambahkan 34 pada index ke 4 Tabel diatas : \n");AddEli(&T,34,4);
    TulisIsiTab(T);
    printf("\nMenghapus elemen terakhir Tabel diatas: \n");DelLastEl(&T,&i);
    TulisIsiTab(T);
    printf("\nMenghapus 34 pada index ke 4 : \n");DelEli(&T,4,&i);
    TulisIsiTab(T);
    printf("\nMenambahkan Unik 99 pada tabel: \n");AddElUnik(&T,99);
    TulisIsiTab(T);
    printf("\n\nApakah 99 ada di tabel T?: %s\n",SearchUrut(T,99)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T?: %i\n",Max(T));
    printf("\nApa Nilai Minimum tabel T?: %i\n",Min(T));
    printf("\nApa Nilai MaksMin tabel T?: ");MaxMin(T);
    printf("\n");
    TulisIsiTab(T1);
    printf("\nMenambahkan 34 pada tabel urut T1 : \n");Add1Urut(&T1,1);
    TulisIsiTab(T1);
    printf("\nMenghapus 34 pada tabel urut T1 : \n");Del1Urut(&T1,1);
    TulisIsiTab(T1);
    return 0;
}
