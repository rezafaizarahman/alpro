#include <stdio.h>
#include <stdlib.h>
#include "statdinamik.h"

TabInt T,T1,T2,TCopy,TInv,TSim,TBaca;
int i;
int main()
{
     system("cls");
     MakeEmpty(30,&T1);
     for (i=1;i<=10;i++)
    {

        T1.TI[i]=i;
    }
    TuliIsiTab(T1);
    // printf("Tekan sembarang tombol untuk melanjutkan...\n");getch();
    printf("\n");
    printf("Empty T=1, F=0      :%d\n",IsEmpty(T1));
    printf("Full  T=1, F=0      :%d\n",IsFull(T1));
    // printf("Tekan sembarang tombol untuk melanjutkan...\n");getch();
    printf("\n");
    printf("index 0   Valid?  : %s\n",IsIdxValid(T1,0)?"Ya":"Tidak");
    printf("index 1   Valid?  : %s\n",IsIdxValid(T1,1)?"Ya":"Tidak");
    printf("index 5   Valid?  : %s\n",IsIdxValid(T1,5)?"Ya":"Tidak");
    printf("index 10  Valid?  : %s\n",IsIdxValid(T1,10)?"Ya":"Tidak");
    printf("index 101 Valid?  : %s\n",IsIdxValid(T1,101)?"Ya":"Tidak");
    // printf("Tekan sembarang tombol untuk melanjutkan...\n");getch();
    printf("\n");
    printf("Set Ukuran Tabel Effektif 15\n\n");SetEff(&T1,15);
    printf("index 0  Efektif? : %s\n",IsIdxEff(T1,0)?"Ya":"Tidak");
    printf("index 1  Efektif? : %s\n",IsIdxEff(T1,1)?"Ya":"Tidak");
    printf("index 5  Efektif? : %s\n",IsIdxEff(T1,5)?"Ya":"Tidak");
    printf("index 10 Efektif? : %s\n",IsIdxEff(T1,10)?"Ya":"Tidak");
    printf("index 16 Efektif? : %s\n",IsIdxEff(T1,16)?"Ya":"Tidak");
    // printf("Tekan sembarang tombol untuk melanjutkan...\n");getch();
    printf("\n");
    printf("GetFirstIdx[Eff]: %d\n",GetFirstIdx(T1));
    printf("GetLast Idx[Eff]: %d\n",GetLastIdx(T1));
    printf("Jumlah elemen tabel T = %i\n",NbElmt(T1));
    printf("Maximal elemen tabel T = %i\n",MaxNbEl(T1));

     for (i=1;i<=15;i++)
    {

        T1.TI[i]=i;
    }
    TuliIsiTab(T1);
    MakeEmpty(30,&T);
    printf("Set Ukuran Tabel Effektif 15\n\n");SetEff(&T,15);

     for (i=1;i<=15;i++)
    {

        T.TI[i]=i+1;
    }
    TuliIsiTab(T);
    printf("\n");
    printf("\nT+T1 :\n"); PlusTab(T,T1);
    printf("\nT-T1 :\n"); MinusTab(T,T1);
    printf("\nT*T1 :\n");KaliTab(T,T1);
    printf("\nT1*2:\n"); KaliKons(T1,2);
    printf("\n");
    TuliIsiTab(T1);
    TuliIsiTab(T);
    printf("\nApakah T Sama dg T1?: %s\n",IsEQ(T,T1)?"Ya":"Tidak");
    printf("\nApakah T1 Kurang dari T?: %s\n",IsLess(T1,T)?"Ya":"Tidak");
    printf("\nApakah 2 ada di index tabel T1?: %i\n",Search1(T1,2));
    printf("\nApakah 2 ada di index tabel T?: %i\n",Search2(T,2));
    printf("\nApakah 5 ada di tabel T?: %s\n",SearchB(T,5)?"Ada":"Tidak");
    printf("\nApakah 3 ada di tabel T1?: %s\n",SearchSentinel(T1,3)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T1?: %i\n",ValMax(T1));
    printf("\nApa Nilai Minimum tabel T1?: %i\n",ValMin(T1));
    printf("\nApa index Nilai Maksimum tabel T?: %i\n",IdxMaxTab(T));
    printf("\nApa index Nilai Minimum tabel T?: %i\n",IdxMinTab(T));

    printf("\nCopy Tabel T1 Ke Tabel TCopy : \n");CopyTab(T1,&TCopy);
    TuliIsiTab(TCopy);

    MakeEmpty(10,&TInv);
    SetEff(&TInv,5);
    for (i=1;i<=5;i++)
    {

       TInv.TI[i]=i*2;
    }

    TuliIsiTab(TInv);
    printf("\nInverse Tabel TInv :\n");InverseTab(&TInv);
    TuliIsiTab(TInv);

    MakeEmpty(10,&TSim);
    SetEff(&TSim,5);
    TSim.TI[1]=1;
    TSim.TI[2]=2;
    TSim.TI[3]=3;
    TSim.TI[4]=2;
    TSim.TI[5]=1;
    printf("\n");
    TuliIsiTab(TSim);
    printf("\nApakah TSim Simetris?: %s\n",IsSimetris(TSim)?"Ya":"Tidak");
    MaxSortAsc(&TSim);
    TuliIsiTab(TSim);
    InsSortDesc(&TSim);
    TuliIsiTab(TSim);
    TuliIsiTab(T1);
    printf("Menambahkan 27 pada index terakhir Tabel diatas: \n");AddAsLastEl(&T1,27);
    TuliIsiTab(T1);
    printf("Menambahkan 34 pada index ke 4 Tabel diatas : \n");AddEli(&T1,34,4);
    TuliIsiTab(T1);
    printf("Menghapus elemen terakhir Tabel diatas: \n");DelLastEl(&T1,&i);
    TuliIsiTab(T1);
    printf("Menghapus 34 pada index ke 4 : \n");DelEli(&T1,4,&i);
    TuliIsiTab(T1);
    printf("Menambahkan Unik 99 pada tabel: \n");AddElUnik(&T1,99);
    TuliIsiTab(T1);
    printf("\nApakah 99 ada di tabel T1?: %s\n",SearchUrut(T,99)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T1?: %i\n",Max(T1));
    printf("\nApa Nilai Minimum tabel T1?: %i\n",Min(T1));
    printf("\nApa Nilai MaksMin tabel T1?: ");MaxMin(T1);
    TuliIsiTab(T1);
    printf("\nMenambahkan 34 pada tabel urut T1 : \n");Add1Urut(&T1,34);
    TuliIsiTab(T1);
    printf("\nMenghapus 34 pada tabel urut T1 : \n");Del1Urut(&T1,34);
    TuliIsiTab(T1);
    // printf("Tekan sembarang tombol untuk melanjutkan...\n");getch();
    return 0;
}
