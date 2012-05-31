#ifndef STATDINAMIK_H_INCLUDED
#define STATDINAMIK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

typedef int idxtype;
typedef int eltype;

#define IdxMax 100
#define IdxMin 1
#define IdxUndef -999

typedef struct TTabel
{
    eltype *TI;
    int Neff;
    int Size;
}TabInt;

void MakeEmpty(int N,TabInt *T);
int NbElmt(TabInt T);
int MaxNbEl (TabInt T);
idxtype GetFirstIdx(TabInt T);

idxtype GetLastIdx(TabInt T);

eltype GetElmt(TabInt T,idxtype i);

void SetTab(TabInt Tin,TabInt *Tout);

void SetEl(TabInt *T,idxtype i,eltype e);

void SetEff(TabInt *T,idxtype N);

boolean IsIdxValid(TabInt T,idxtype i);

boolean IsIdxEff(TabInt T,idxtype i);

boolean IsEmpty(TabInt T);

boolean IsFull(TabInt T);

void BacaIsi(TabInt *T);

void TulisIsi(TabInt T);

void TuliIsiTab(TabInt T);

int PlusTab(TabInt T1,TabInt T2);

boolean IsEQ(TabInt T1,TabInt T2);

boolean IsLess(TabInt T1,TabInt T2);

idxtype Search1 (TabInt T,eltype X);

idxtype Search2 (TabInt T,eltype X);

boolean SearchB(TabInt T,eltype X);

int SearchSentinel(TabInt T,eltype X);

eltype ValMin(TabInt T);

eltype ValMax(TabInt T);

idxtype IdxMaxTab(TabInt T);

idxtype IdxMinTab(TabInt T);

TabInt CopyTab(TabInt Tin,TabInt *Tout);

TabInt InverseTab(TabInt *T);

boolean IsSimetris(TabInt T);

void MaxSortAsc(TabInt *T);

void InsSortDesc(TabInt *T);

void AddAsLastEl(TabInt *T,eltype X);
void DelLastEl (TabInt *T,eltype *X);

void DelEli (TabInt *T,idxtype i,eltype *X);

void AddElUnik(TabInt *T,eltype X);
idxtype SearchUrut (TabInt T,eltype X);
eltype Max(TabInt T);
eltype Min(TabInt T);
eltype MaxMin(TabInt T);
void Add1Urut(TabInt *T,eltype X);
void Del1Urut(TabInt *T,eltype X);
#endif // STATDINAMIK_H_INCLUDED

