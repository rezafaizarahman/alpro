#include <stdio.h>
#include <stdlib.h>
#include "expstat.h"
TabInt T,T1,T2;
int i;
int main()
{
    for (i=1;i<=26;i++)
    {
            if (i%2==0)
            {
                T.Neff++;
                T.TI[T.Neff]=i*2+1;
            }else{
                T.Neff++;
                T.TI[T.Neff]=i*1+3;
            }
    }
    BacaIsi(&T);
    TulisIsi(T);
    TuliIsiTab(T);
    MaxSortAsc(&T);
    TuliIsiTab(T);
    InsSortDesc(&T);
    TuliIsiTab(T);
    printf("Jumlah elemen tabel T = %i\n",NbElmt(T));
    printf("Maximal elemen tabel T = %i\n",MaxNbEl(T));
    printf("Index elemen pertama tabel = %i\n",GetFirstIdx(T));
    printf("Index elemen terakhir tabel = %i\n",GetLastIdx(T));
    printf("Elemen index ke-2 di tabel = %i\n",GetElmt(T,2));

    SetNeff(&T,27);
    SetEl(&T,27,5);
    SetTab(T,&T);
    TuliIsiTab(T);
    printf("Elemen index ke-27 di tabel = %i\n",GetElmt(T,27));
    printf("Jumlah elemen tabel T = %i\n",NbElmt(T));
    printf("Apakah Index %d Valid?: %s\n",29,IsIdxValid(T,29)?"Ya":"Tidak");
    printf("Apakah Index %d Sesuai Eff?: %s\n",29,IsIdxEff(T,29)?"Ya":"Tidak");
    printf("Apakah Tabel kosong?: %s\n",IsEmpty(T)?"Ya":"Tidak");
    printf("Apakah Index sudah penuh?: %s\n",IsFull(T)?"Ya":"Tidak");
     for (i=1;i<=26;i++)
    {

                T1.Neff++;
                T1.TI[T1.Neff]=i;

    }
    BacaIsi(&T1);
        TuliIsiTab(T);
    TuliIsiTab(T1);
    printf("\nT+T1 :\n");
    PlusTab(T,T1);
    printf("\nT-T1 :\n");
    MinusTab(T,T1);
    printf("\nT*T1 :\n");
    KaliTab(T,T1);
    printf("\nT1*2:\n");
    KaliKons(T1,2);
    printf("\nApakah T Sama dg T1?: %s\n",IsEQ(T,T1)?"Ya":"Tidak");
    printf("\nApakah T1 Kurang dari T?: %s\n",IsLess(T1,T)?"Ya":"Tidak");
    printf("\nApakah 53 ada di tabel T?: %s\n",Search1(T,53)?"Ada":"Tidak");
    printf("\nApakah 53 ada di tabel T?: %s\n",Search2(T,53)?"Ada":"Tidak");
    printf("\nApakah 53 ada di tabel T?: %s\n",SearchB(T,53)?"Ada":"Tidak");
    printf("\nApakah 53 ada di tabel T?: %s\n",SearchSentinel(T,53)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T?: %i\n",ValMax(T));
    printf("\nApa Nilai Minimum tabel T?: %i\n",ValMin(T));
    printf("\nApa index Nilai Maksimum tabel T?: %i\n",IdxMaxTab(T));
    printf("\nApa index Nilai Minimum tabel T?: %i\n",IdxMinTab(T));
    CopyTab(T,&T2);
    BacaIsi(&T2);

    TuliIsiTab(T2);
    InverseTab(&T2);
    TuliIsiTab(T2);
    TuliIsiTab(T1);
    printf("\nApakah T1 Simetris?: %s\n",IsSimetris(T1)?"Ya":"Tidak");
    printf("Menambahkan 27 pada index terakhir : \n");AddAsLastEl(&T1,27);
    TuliIsiTab(T1);
    printf("Menambahkan 34 pada index ke 4 : \n");AddEli(&T1,34,4);
    TuliIsiTab(T1);
    printf("Menghapus elemen terakhir : \n");DelLastEl(&T1,&i);
    TuliIsiTab(T1);
     printf("Menghapus 34 pada index ke 4 : \n");DelEli(&T1,4,&i);
     TuliIsiTab(T1);
     printf("Menambahkan Unik 99 pada tabel: \n");AddElUnik(&T1,99);
    TuliIsiTab(T1);
    printf("\nApakah 99 ada di tabel T1?: %s\n",SearchUrut(T,99)?"Ada":"Tidak");
    printf("\nApa Nilai Maksimum tabel T1?: %i\n",Max(T1));
    printf("\nApa Nilai Minimum tabel T1?: %i\n",Min(T1));
    printf("\nApa Nilai MaksMin tabel T1?: ");MaxMin(T1);
    printf("\nMenambahkan 34 pada tabel urut T1 : \n");Add1Urut(&T1,34);
    TuliIsiTab(T1);
    printf("\nMenghapus 34 pada tabel urut T1 : \n");Del1Urut(&T1,34);
    TuliIsiTab(T1);

    return 0;

}
