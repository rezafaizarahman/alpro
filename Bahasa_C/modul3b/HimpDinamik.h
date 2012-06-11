#ifndef HIMPDINAMIK_H_INCLUDED
#define HIMPDINAMIK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"


#define idxmax 100
#define idxmin 1
#define idxundef -999 //{ indeks tak terdefinisi }
#define valundef -9999//{ nilai tidak terdefinisi }

typedef int idxtype;         //{ type indeks }
typedef int eltype;  // type elemen tabel }

typedef struct
{
    eltype *T;
    int size;
}Tabint;


void MakeEmpty(int N, Tabint *T);
int NbElmt(Tabint T);
int MaxNbEl (Tabint T);
idxtype GetFirstIdx(Tabint T);

idxtype GetLastIdx(Tabint T);

eltype GetElmt(Tabint T,idxtype i);

void SetTab(Tabint Tin,Tabint *Tout);

void SetEl(Tabint *T,idxtype i,eltype e);

void SetEff(Tabint *T,idxtype N);

boolean IsIdxValid(Tabint T,idxtype i);

boolean IsIdxEff(Tabint T,idxtype i);

boolean IsEmpty(Tabint T);

boolean IsFull(Tabint T);

void BacaIsi(Tabint *T);

void TulisIsi(Tabint T);

void TuliIsiTab(Tabint T);

int PlusTab(Tabint T1,Tabint T2);

boolean IsEQ(Tabint T1,Tabint T2);

boolean IsLess(Tabint T1,Tabint T2);

idxtype Search1 (Tabint T,eltype X);

idxtype Search2 (Tabint T,eltype X);

boolean SearchB(Tabint T,eltype X);

int SearchSentinel(Tabint T,eltype X);

eltype ValMin(Tabint T);

eltype ValMax(Tabint T);

idxtype IdxMaxTab(Tabint T);

idxtype IdxMinTab(Tabint T);

Tabint CopyTab(Tabint Tin,Tabint *Tout);

Tabint InverseTab(Tabint *T);

boolean IsSimetris(Tabint T);

void MaxSortAsc(Tabint *T);

void InsSortDesc(Tabint *T);

void AddAsLastEl(Tabint *T,eltype X);
void DelLastEl (Tabint *T,eltype *X);
int LastIdx(Tabint T);
void DelEli (Tabint *T,idxtype i,eltype *X);

void AddElUnik(Tabint *T,eltype X);
idxtype SearchUrut (Tabint T,eltype X);
eltype Max(Tabint T);
eltype Min(Tabint  T);
eltype MaxMin(Tabint T);
void Add1Urut(Tabint *T,eltype X);
void Del1Urut(Tabint  *T,eltype X);
#endif // HIMPDINAMIK_H_INCLUDED
