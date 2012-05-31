#ifndef EXPSTAT_H_INCLUDED
#define EXPSTAT_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "boolean.h"

#define idxmax 100
#define idxmin 1
#define idxundef -999

typedef int idxtype;
typedef int eltype;
typedef int tabel[idxmax-idxmin];
typedef struct TTabel
{
    tabel TI;
    int Neff;
}TabInt;

//{ ** KONSTRUKTOR ** }
//{ Konstruktor : create tabel kosong }

void MakeEmpty(TabInt *T);

//{* SELEKTOR * }
//{ * Banyaknya elemen  }
int NbElmt(TabInt T);
int MaxNbEl (TabInt T);

int GetFirstIdx(TabInt T);
int GetLastIdx(TabInt T);
eltype GetElmt(TabInt T,idxtype i);

void SetTab(TabInt Tin,TabInt *Tout);
void SetEl(TabInt *T,idxtype i,eltype v);
void SetNeff(TabInt *T,idxtype N);

boolean IsIdxValid(TabInt T,idxtype i);
boolean IsEmpty(TabInt T);
boolean IsFull(TabInt T);

void BacaIsi(TabInt *T);
void TulisIsi(TabInt T);
void TuliIsiTab(TabInt T);

int PlusTab(TabInt T1,TabInt T2);
int MinusTab(TabInt T1,TabInt T2);
int KaliTab(TabInt T1,TabInt T2);
int KaliKons(TabInt Tin,eltype c);

boolean IsEQ(TabInt T1,TabInt T2);
boolean IsLess(TabInt T1,TabInt T2);

idxtype Search1(TabInt T,eltype X);
idxtype Search2 (TabInt T,eltype X);
boolean SearchB(TabInt T,eltype X);
int SearchSentinel(TabInt T,eltype X);

eltype ValMax(TabInt T);
eltype ValMin(TabInt T);
idxtype IdxMaxTab(TabInt T);
idxtype IdxMinTab(TabInt T);

TabInt CopyTab(TabInt Tin,TabInt *Tout);
TabInt InverseTab(TabInt *T);

boolean IsSimetris(TabInt T);

void MaxSortAsc(TabInt *T);
void InsSortDesc(TabInt *T);

void AddAsLastEl(TabInt *T,eltype X);
void AddEli(TabInt *T,eltype X,idxtype i);
void AddElUnik(TabInt *T,eltype X);

idxtype SearchUrut (TabInt T,eltype X);
eltype Max(TabInt T);
eltype Min(TabInt T);

eltype MaxMin(TabInt T);
void Add1Urut(TabInt *T,eltype X);
void Del1Urut(TabInt *T,eltype X);
#endif // EXPSTAT_H_INCLUDED
