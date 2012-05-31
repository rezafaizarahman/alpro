#ifndef REPIMPSTAT_H_INCLUDED
#define REPIMPSTAT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define IdxMax 100
#define IdxMin 1
#define IdxUndef -999
#define ValUndef -9999

typedef int IdxType;
typedef int Eltype;
typedef struct TTabel
{
    Eltype *TI[IdxMax];
}TabInt;

void MakeEmpty(TabInt *T);

IdxType GetFirstIdx(TabInt T);
IdxType GetLastIdx(TabInt T);
Eltype GetElmt(TabInt T,IdxType i);

void SetTab(TabInt Tin,TabInt *Tout);
void SetEl(TabInt *T,IdxType i,Eltype e);
void SetEff(TabInt *T,IdxType N);

boolean IsIdxValid(TabInt T,IdxType i);
boolean IsIdxEff(TabInt T,IdxType i);
boolean IsEmpty(TabInt T);
boolean IsFull(TabInt T);

void BacaIsi(TabInt *T);
void TulisIsi(TabInt T);
void TulisIsiTab(TabInt T);
int PlusTab(TabInt T1,TabInt T2);
int MinusTab(TabInt T1,TabInt T2);
int KaliTab(TabInt T1,TabInt T2);
int KaliKons(TabInt Tin,Eltype c);
boolean IsEQ(TabInt T1,TabInt T2);
boolean IsLess(TabInt T1,TabInt T2);
IdxType Search1 (TabInt T,Eltype X);
IdxType Search2 (TabInt T,Eltype X);
boolean SearchB(TabInt T,Eltype X);
int SearchSentinel(TabInt T,Eltype X);
Eltype ValMax(TabInt T);
Eltype ValMin(TabInt T);
IdxType IdxMaxTab(TabInt T);
IdxType IdxMinTab(TabInt T);
void MaxSortAsc(TabInt *T);
void InsSortDesc(TabInt *T);

TabInt CopyTab(TabInt Tin,TabInt *Tout);
TabInt InverseTab(TabInt *T);
boolean IsSimetris(TabInt T);
void AddAsLastEl(TabInt *T,Eltype X);
void AddEli(TabInt *T,Eltype X,IdxType i);
void DelLastEl (TabInt *T,Eltype *X);
void DelEli (TabInt *T,IdxType i,Eltype *X);
void AddElUnik(TabInt *T,Eltype X);
IdxType SearchUrut (TabInt T,Eltype X);
Eltype Max(TabInt T);
Eltype Min(TabInt T);
Eltype MaxMin(TabInt T);
void Add1Urut(TabInt *T,Eltype X);
void Del1Urut(TabInt *T,Eltype X);
#endif // REPIMPSTAT_H_INCLUDED

