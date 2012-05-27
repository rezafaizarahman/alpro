#ifndef MODUL1_H_INCLUDED
#define MODUL1_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define true 1
#define false 0
#define boolean unsigned char

#define TabMax 100

typedef int Tabel[TabMax];
typedef struct TTabel{
Tabel T;
int PosEff;
}Tab;

#define First(L) (L).T[1]
#define Last(L) (L).T[L.PosEff]

void InitTabel(Tab *Tbl);
boolean IsEmpty(Tab Tbl);
boolean IsFull(Tab Tbl);
void InsElm(Tab *Tbl,int elm);
void PrintList(Tab Tbl);
int count(Tab Tbl);
int Maks(Tab Tbl);
int Min(Tab Tbl);
void Sort(Tab *Tbl);
boolean IsGenap(int x);
int HitGenap(Tab Tbl);
int SumGenap(Tab Tbl);
int Median(Tab Tbl);
int Mean(Tab Tbl);
/*rata-rata atau U*/
int Range(Tab Tbl);
/*selisih nilai Last dan First*/
float Variance(Tab Tbl);
/*
T^2=Sum(Xi-U)^2/N T=theta Xi=Nilai ke-i U=Mean N=size Tab
*/
float STDev(Tab Tbl);
/*s=sqrt[T^2]=sqrt[Sum(Xi-U)^2/N]*/
#endif

