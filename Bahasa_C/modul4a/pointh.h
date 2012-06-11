#ifndef POINTH_H_INCLUDED
#define POINTH_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "boolean.h"
typedef struct
{
    float x;  //absis
    float y;  //ordinat
}Tpoint;

typedef Tpoint Point;


Point MakePoint(float x,float y);

void Tulis(Point P);

void BacaPoint(Point *P);

float GetAbsis(Point P);

float GetOrdinat(Point P);

void SetAbsis(Point *P,float newx);

void SetOrdinat(Point *P,float newy);

Point Plus(Point PD,Point PS);

Point Minus(Point P1,Point P2);
Point Product(Point P1,Point P2);
Point Multi(Point P1,Point P2);
boolean EQ(Point P1,Point P2);
boolean NEQ(Point P1,Point P2);
boolean LT(Point P1,Point P2);
boolean GT(Point P1,Point P2);
boolean IsOrigin(Point P);
boolean IsOnSbX(Point P);
boolean IsOnSbY(Point P);
int Kuadran(Point P);
Point NextX(Point P);
Point NextY(Point P);
Point PlusDelta(Point P,float deltax,float deltay);
Point MirrorOf(Point P,boolean Sbx,boolean Sby);
float Jarak0(Point P);
float Panjang(Point P1,Point P2);
void Geser (Point *P,float deltax,float deltay);
void GeserKeSbX(Point *P);
void GeserKeSbY(Point *P);
void Mirror(Point *P,boolean Sbx,boolean Sby);
void Putar(Point *P,float Sdt);
#endif // POINTH_H_INCLUDED
