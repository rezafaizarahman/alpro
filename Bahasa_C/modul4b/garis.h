#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define true 1
#define false 0
#include "Boolean.h"


#define undef -99

typedef struct {
    float x;
    float y;
}TPoint;

typedef TPoint Point;

Point MakePoint(float x,float y);

void Tulis(Point P);

void BacaPoint(Point *P);

float GetAbsis(Point P);

float GetOrdinat(Point P);

void SetAbsis(Point *P,float newx);

void SetOrdinat(Point *P,float newy);

Point AddP(Point P1,Point P2);

Point MinP(Point P1,Point P2);

Point MulCros(Point P1,Point P2);

Point MulDot(Point P1,Point P2);

boolean EqP(Point P1,Point P2);

boolean NEqP(Point P1,Point P2);

boolean LTP(Point P1,Point P2);

boolean GTP(Point P1,Point P2);

boolean IsOrigin(Point P);

boolean IsOnSbX(Point P);

boolean IsOnSbY(Point P);

int Kuadran(Point P);

Point NextX(Point P);

Point NextY(Point P);

Point PlusDelta(Point P,float a,float b);

Point MirrorOf(Point P,boolean a,boolean b);

void Geser(Point *P,float a,float b);

void GeserSbX(Point *P);

void GeserSbY(Point *P);

float JarakPst(Point P);

float Panjang(Point P1,Point P2);

void Mirror(Point *P,boolean a,boolean b);

void Putar(Point *P,float x);

Point Koor2Point(Point P1,Point P2);







typedef struct{
    Point PAw;
    Point PAkh;
}TGaris;

typedef TGaris Garis;

void MakeGaris(Point P1,Point P2,Garis *L);

Point GetPAw(Garis G);

Point GetPAkh(Garis G);

void SetPAw(Garis *G,Point newpaw);

void SetPAkh(Garis *G,Point newpakh);

void BacaGaris(Garis *L);

void TulisGaris(Garis L);

boolean EQG(Garis L1,Garis L2);

boolean NEQG(Garis L1,Garis L2);

boolean IsOnSbXG(Garis L1);

boolean IsOnSbYG(Garis L1);

int KuadranG(Garis L);

Garis MirrorG(Garis *L,boolean x,boolean y);

float PanjangG(Garis L);

Garis HslGeser(Garis L,float x,float y);

void GeserG(Garis *L,boolean x,boolean y);

void PutarG(Garis *L,float x);

