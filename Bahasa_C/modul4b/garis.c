#include"garis.h"

Point MakePoint(float x,float y){
    Point P;
    P.x=x;P.y=y;
    return (P);
}

float GetAbsis(Point P){
    return P.x;
}

float GetOrdinat(Point P){
    return P.y;
}

void SetAbsis(Point *P,float newx){
    (*P).x=newx;
}

void SetOrdinat(Point *P,float newy){
    (*P).y=newy;
}

void BacaPoint(Point *P){
    float x,y;
    printf("Buat Point (X Y): ");
    scanf("%f %f",&x,&y);
    (*P)=MakePoint(x,y);
}

void Tulis(Point P){
    printf("(%0.2f,%0.2f)\n",P.x,P.y);
}

