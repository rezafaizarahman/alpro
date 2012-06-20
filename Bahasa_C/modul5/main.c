#include "matrik.h"

Matrik M,M1,M2,M3,Mx,Mi,M4,M5,M6;
int i,j;

int main()
{
    /* MakeMatrik(3,3,&M);
    SetBrsEff(&M,3);SetKolEff(&M,3);
    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    SetEl_M(&M,i,j,7);
    */

    MakeMatrik(3,4,&M1);
    SetBrsEff(&M1,3);SetKolEff(&M1,4);
    for(i=1;i<=3;i++)
    for(j=1;j<=4;j++)
    SetEl_M(&M1,i,j,5);

    MakeMatrik(3,4,&M2);
    SetBrsEff(&M2,3);SetKolEff(&M2,4);
    for(i=1;i<=3;i++)
    for(j=1;j<=4;j++)
    SetEl_M(&M2,i,j,5);
    /*
    TulisMatrik(M);
    printf("Matik Diatas Symetri True 1 False 0 : %d\n",IsSymetri(M));
    printf("Matik Diatas Satuan True 1 False 0 : %d\n",IsSatuan(M));
    */
    TulisMatrik(M1);
    TulisMatrik(M2);
    Mx=PlusMatrik(M1,M2);
    printf("Hasil penjumlahan matrik: ");TulisMatrik(Mx);
    /*printf("Hasil pengurangan matrik: ");TulisMatrik(M5);*/
    printf("Apakah Matrik M1=Matrik M2? %d\n", IsEqM(M1,M2));
    printf("Apakah ukuran Matrik M1=Matrik M2? %d\n", EQSize(M1,M2));
    printf("Jumlah elemen Matrik M: %d\n", NBElmt(M1));
    printf("Apakah Matrik M1 StrongEQ dari Matrik M2? %d\n", StrongEQ(M1,M2));
    printf("Apakah Matrik M1 NEQ dari Matrik M2? %d\n", NEQ(M1,M2));
    printf("Apakah ukuran efektif M1 < Ukuran efektif M2? %d\n", MLT(M1,M2));
    printf("Matrik Diatas bujur sangkar True 1 False 0 :%d\n",IsBujurSangkar(M1));
    printf("Matrik Diatas Symetri True 1 False 0 : %d\n",IsSymetri(M1));
    printf("Matrik Diatas Satuan True 1 False 0 : %d\n",IsSatuan(M1));

    Mx=MinusMatrik(Mx,M1);
    TulisMatrik(Mx);
    /*
    Mx=MulM(M1,M2);
    TulisMatrik(Mx);
    */

    M1=MulMFX(M1,3);
    printf("\nHasil MulMFX 3 Matrik M1: ");TulisMatrik(M1);
    MulMPX(&M1,2);
    printf("\nHasil MulMPX 2 Matrik M1: ");TulisMatrik(M1);
    MakeMatrik(3,3,&M3);
    SetBrsEff(&M3,3);SetKolEff(&M3,3);
    SetEl_M(&M3,1,1,2);
    SetEl_M(&M3,1,2,1);SetEl_M(&M3,1,3,3);//SetEl_M(&M3,1,4,7);
    SetEl_M(&M3,2,1,5);
    SetEl_M(&M3,2,2,6);SetEl_M(&M3,2,3,7);//SetEl_M(&M3,2,4,9);
    SetEl_M(&M3,3,1,8);
    SetEl_M(&M3,3,2,9);SetEl_M(&M3,3,3,4);//SetEl_M(&M3,3,4,1);
    TulisMatrik(M3);
    Transpose(&M3);
    TulisMatrik(M3);
    /*
    MakeMatrik(3,3,&M3);
    SetBrsEff(&M3,3);SetKolEff(&M3,3);
    SetEl_M(&M3,1,1,10);
    SetEl_M(&M3,1,2,3);SetEl_M(&M3,1,3,1);//SetEl_M(&M3,1,4,1);
    SetEl_M(&M3,2,1,5);
    SetEl_M(&M3,2,2,7);SetEl_M(&M3,2,3,9);//SetEl_M(&M3,2,4,9);
    SetEl_M(&M3,3,1,8);
    SetEl_M(&M3,3,2,9);SetEl_M(&M3,3,3,5);//SetEl_M(&M3,3,4,1);
    TulisMatrik(M3);

    /*
    printf("determinan : %f\n",Dete(M3,3));//Det(M3));
    InversM4(M3);
    printf("Matik Diatas Identitas True 1 False 0 :%d\n",IsIdentity(Mi));
    */
    BacaMatrik(&M4,2,2);
    TulisMatrik(M4);
    printf("Determinan : %f\n",Determinan(M4));
    printf("Matrik Diatas Symetri True 1 False 0 : %d\n",IsSymetri(M4));
    printf("Matrik Diatas Satuan True 1 False 0 : %d\n",IsSatuan(M4));
    printf("Matrik Diatas Sparse Truen 1 False 0 : %d\n", IsSparse(M4));
    BacaMatrik(&M5,2,2);
    TulisMatrik(M5);
    M6=PlusMatrik(M4,M5);
    TulisMatrik(M6);
    invers(&M4);
    TulisMatrik(M4);

    return 0;
}
