#ifndef MATRIK_H_INCLUDED
#define MATRIK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BrsMin 1
#define BrsMax 100
#define KolMin 1
#define KolMax 100
#define nullentry '\0'

#define true 1
#define false 0
#define boolean unsigned char

typedef int indeks; //utk index baris dan kolom
typedef int el_type;

typedef struct{
    el_type Mem[BrsMax][KolMax];
    int NbrsEff; //baris terdefinisi >=1
    int NkolEff; //kolom terdefinisi >=1
//NbrsEff=0 dan NkolEff=0 berarti matrik kosong
//NbrsEff>=0 dan NkolEff>=0 berarti matrik kosong acuan awal
}TMatrik;

typedef TMatrik Matrik; //dengan definisi seperti ini memudahkan
//invoke dan penuisan parameter
//dalam fungsi

void MakeMatrik(int NB,int NK,Matrik *M);
Matrik NullMatrik();
indeks GetIdxBrsMin();
indeks GetIdxBrsMax();
indeks GetIdxKolMin();
indeks GetIdxKolMax();
boolean IsIdxMValid(int i,int j);
indeks FirstIdxBrs(Matrik M);
indeks FirstIdxKol(Matrik M);
indeks LastIdxBrs(Matrik M);
indeks LastIdxKol(Matrik M);
int GetNbrsEff(Matrik M);
int GetNkolEff(Matrik M);
boolean IsIdxMEff(Matrik M, int i,int j);
el_type GetElmtM(Matrik M,int i,int j);
el_type GetElmtDiagonal(Matrik M,int i);
void SetBrsEff(Matrik *M,int NB);
void SetKolEff(Matrik *M,int NK);
void SetEl_M(Matrik *M,int i,int j,el_type X);
void SetM(Matrik Min,Matrik *Mhsl);
void BacaMatrik(Matrik *M,int NB,int NK);
void TulisMatrik(Matrik M);
Matrik PlusMatrik(Matrik M1, Matrik M2);
Matrik MinusMatrik(Matrik M1, Matrik M2);
Matrik MulMFX(Matrik M, int X);
void MulMPX(Matrik *M, int K);
boolean IsEqM(Matrik M1, Matrik M2);
boolean EQSize(Matrik M1, Matrik M2);
int NBElmt(Matrik M);
boolean StrongEQ(Matrik M1, Matrik M2);
boolean NEQ(Matrik M1, Matrik M2);
boolean MLT(Matrik M1, Matrik M2);
boolean IsBujurSangkar(Matrik M);
boolean IsSymetri(Matrik M);
boolean IsSatuan(Matrik M);
boolean IsSparse(Matrik M);
Matrik Invers1(Matrik M);
Matrik Invers(Matrik M);
void invers1(Matrik *M);
void invers(Matrik *M);
float Determinan(Matrik M);
void Transpose(Matrik *M);

#endif // MATRIK_H_INCLUDED
