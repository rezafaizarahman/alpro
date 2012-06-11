#include "garis.h"


Garis G1,G2,G3,G4,G5,G6;
Point P1,P2,P3,P4,P5,P6,P7,P8,P9,P10;
Garis T;Point Pt1,Pt2;
int main()
{
    P1=MakePoint(2,0);
    P2=MakePoint(4,0);
    MakeGaris(P1,P2,&G1);//G1
    printf("MakeGaris G1 P1(2,0) P2(4,0): ");TulisGaris(G1);printf("\n");
//    test set dan get
    printf("GetPAw G1 :");Tulis(GetPAw(G1));printf("\n");
    printf("GetPAw G1 :");Tulis(GetPAkh(G1));printf("\n");
    SetPAw(&G1,MakePoint(3,5));SetPAkh(&G1,MakePoint(-3,5));
    printf("SetPAw&SetPAkh P1(3,5) P2(-3,5): ");TulisGaris(G1);printf("\n");

    P3=MakePoint(1,1);
    P4=MakePoint(4,4);//m1=0-4=-4
    MakeGaris(P3,P4,&G2);//G3
    printf("MakeGaris G2 P1(1,1) P2(4,4): ");TulisGaris(G2);printf("\n");
    /*
    printf("\nIs G1 & G2 Eq [true 1 false 0]   : %d",EQG(G1,G2));
    printf("\nIs G1 & G2 !Eq [true 1 false 0]  : %d",NEQG(G1,G2));
    printf("\nIs G1 on Sb X [true 1 false 0]   : %d",IsOnSbXG(G1));
    printf("\nIs G1 on Sb Y [true 1 false 0]   : %d",IsOnSbYG(G1));
    printf("\nIs G2 on Sb X [true 1 false 0]   : %d",IsOnSbXG(G2));
    printf("\nIs G2 on Sb Y [true 1 false 0]   : %d",IsOnSbYG(G2));
    printf("\n Kuadran G1 is [undefine -99]    : %d",KuadranG(G1));
    printf("\n Kuadran G2 is [undefine -99]    : %d",KuadranG(G2));

    // tegak lurus G3 G4
    P3=MakePoint(3,0);
    P4=MakePoint(0,3);
    P5=MakePoint(-1,0);
    P6=MakePoint(0,1);
    MakeGaris(P3,P4,&G3);//G3
    MakeGaris(P5,P6,&G4);//G4

    //sejajar G5 G6
    P7=MakePoint(-2,0);
    P8=MakePoint(0,2);
    P9=MakePoint(0,-1);
    P10=MakePoint(1,0);
    MakeGaris(P7,P8,&G5);//G5
    MakeGaris(P9,P10,&G6);//G6
    printf("\n");
    printf("MakeGaris G3 ((3,0)(0,3))            :");TulisGaris(G3);printf("\n");
    printf("MakeGaris G4 ((-1,0)(0,1))            :");TulisGaris(G4);printf("\n");
    printf("MakeGaris G5 ((-2,0)(0,2))          :");TulisGaris(G5);printf("\n");
    printf("MakeGaris G6 ((0,-1)(1,0))           :");TulisGaris(G6);printf("\n");

    printf("\n G3 G4 Tegak Lurus [true 1 false 0]: %d\n",IsTegakLurus(G3,G4));
    printf("\n G5 G6 Sejajar     [true 1 false 0]: %d\n",IsSejajar(G5,G6));
    printf("\n G5 G6 Berimpit    [true 1 false 0]: %d\n",IsBerimpit(G5,G6));
    printf("\n G3 G4 Sudutnya                    : %2.0f.\n",SudutGaris(G3,G4));

    Pt1=MakePoint(2,1);
    Pt2=MakePoint(2,2);
    MakeGaris(Pt1,Pt2,&G2);
    printf("\n MakeGaris G2 ((2,1)(2,2))         : ");TulisGaris(G2);printf("\n");


    printf("\nsebelum di mirror ke-x!"); TulisGaris(G2); printf("\n");
    MirrorG(&G2,true,false);
    printf("\nsetelah di mirror ke-x!");
    TulisGaris(G2); printf("\n");
    printf("Panjang Garis G2 diatas    :%.2f",PanjangG(G2));
    T=HslGeser(G2,2,2);
    printf("\nHasil Geser Garis G2 Sebesar (2,2)  :");
    TulisGaris(HslGeser(G2,2,2)); printf("\n");
    GeserG(&G2,true,false);
    printf("Hasil Geser Garis G2 Sb-X    : ");
    TulisGaris(G2);printf("\n");
    GeserG(&G2,false,true);
    printf("Hasil Geser Garis G2 Sb-Y    : ");
    TulisGaris(G2);printf("\n");
    TulisGaris(G6);
    PutarG(&G6,90);
    printf("Hasil Putar Gais G6 90 CCW   : ");
    TulisGaris(G6);printf("\n");
    /*KURANG SUDUT DAN ARAH Silahkan Lengkapi*/

    return 0;
}
