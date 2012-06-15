#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED
#define true 1
#define false 0
#define boolean unsigned char
#include <stdio.h>
#include <stdlib.h>
typedef struct {
int DD;//1-31 hari
int MM;//1-12 bln
int YY;//>0 thn
}TTanggal;
typedef TTanggal Tanggal;
Tanggal Reset();
int Day(Tanggal T);
int Month(Tanggal T);
int Year(Tanggal T);
void SetDay(Tanggal *T,int newday);
void SetMonth(Tanggal *T,int newmonth);
void SetYear(Tanggal *T,int newyear);
Tanggal MakeTANGGAL(int h, int b,int t);
void BacaTANGGAL(Tanggal *T);
void TulisTANGGAL(Tanggal T);
Tanggal NextDay (Tanggal D );
Tanggal PrevDay (Tanggal D );
Tanggal NextNday (Tanggal D,int N);
Tanggal PrevNDay (Tanggal D,int N);
int HariKe (Tanggal D);
Tanggal DayOfYear(int H, int Y);
boolean IsEqD (Tanggal D1, Tanggal D2);
boolean IsBefore (Tanggal D1,Tanggal D2);
boolean IsAfter (Tanggal D1, Tanggal D2);
boolean IsKabisat (int Y );


#endif // TANGGAL_H_INCLUDED
