#include "pointh.h"
//{ Membentuk sebuah POINT dari komponen-komponennya }
Point MakePoint(float x,float y)
{
    Point P;
    P.x=x;
    P.y=y;
    return (P);
}
//{ Mengirimkan komponen absis dari P }
float GetAbsis(Point P)
{
    return P.x;
}
//{ Mengirimkan komponen ordinat dari P }
float GetOrdinat(Point P)
{
    return P.y;
}
//{ Mengubah nilai komponen absis dari P }
void SetAbsis(Point *P,float newx)
{
    (*P).x=newx;

}
//{ Mengubah nilai komponen ordinat dari P }
void SetOrdinat(Point *P,float newy)
{
        (*P).y=newy;
}
//{ Nilai P ditulis ke layar dengan format "(X,Y)" }
void Tulis(Point P)
{
    printf("<%0.2f,%0.2f>",P.x,P.y);
}

//{ Membaca nilai absis dan ordinat dari keyboard dan membentuk
//POINT P berdasarkan dari nilai absis dan ordinat tersebut }
void BacaPoint(Point *P)
{
    float x,y;
    printf("Input Baca (X Y) :");scanf("%f %f",&x,&y);
    (*P)=MakePoint(x,y);
}
//Menghasilkan POINT yang bernilai P1 + P2 }
// Melakukan operasi penjumlahan vector
Point Plus(Point P1,Point P2)
{
    Point hasil;
    hasil.x=P1.x+P2.x;
    hasil.y=P1.y+P2.y;
    return(hasil);
}
//{ Menghasilkan POINT bernilai P1 - P2 }
Point Minus(Point P1,Point P2)
{
    Point hasil;
    hasil.x=P1.x-P2.x;
    hasil.y=P1.y-P2.y;
    return(hasil);

}
//Operasi perkalian P1.P2 : melakukan operasi dot product
Point Product(Point P1,Point P2)
{
    Point hasil;
    hasil.x=P1.x*P2.x;
    hasil.y=P1.y*P2.y;
    return(hasil);
}
//Operasi perkalian P1XP2 : melakukan operasi cross product}
Point Multi(Point P1,Point P2)
{
    Point hasil;
    hasil.x=P1.x*P2.y;
    hasil.y=P2.x*P1.y;
    return(hasil);

}
//{ Mengirimkan true jika P1 = P2 : absis dan ordinatnya sama }
boolean EQ(Point P1,Point P2)
{
    if((P1.x==P2.x)&&(P1.y==P2.y))
    {

        return true;
    }else{

        return false;
    }
}
// Mengirimkan true jika P1 tidak sama dengan P2 }
boolean NEQ(Point P1,Point P2)
{
    if((P1.x!=P2.x)||(P1.y!=P2.y))
    {
        return true;
    }else{
        return false;
    }
}
boolean LT(Point P1,Point P2)
{
    if((P1.x<P2.x)&&(P1.y<P2.y))
    {
        return true;
    }else{
        return false;
    }

}
boolean GT(Point P1,Point P2)
{
    if((P1.x>P2.x)&&(P1.y>P2.y))
    {
        return true;
    }else{
        return false;
    }

}
//{ Menghasilkan true jika P adalah titik origin 0.0}
boolean IsOrigin(Point P)
{
    if((P.x==0)&&(P.y==0))
    {
        return true;
    }else{
        return false;
    }

}
// Menghasilkan true jika P tepat di SB X}
boolean IsOnSbX(Point P)
{
    if(P.y==0)
    {
        return true;
    }else{
        return false;
    }
}

// Menghasilkan true jika P tepat di SB Y}
boolean IsOnSbY(Point P)
{
    if(P.x==0)
    {

        return true;
    }else{
        return false;
    }
}
int Kuadran(Point P)
{


    if((P.x>0)&&(P.y>0))
    {
        return 1;
    }else if((P.x<0)&&(P.y>0)){
        return 2;
    }else if((P.x<0)&&(P.y<0)){
        return 3;
    }else if((P.x>0)&&(P.y<0)){
        return 4;
    }else{
        return 0;
    }
}
Point NextX(Point P)
{
    Point hasil;
    hasil.x=P.x+1;
    hasil.y=P.y;
    return (hasil);

}
Point NextY(Point P)
{
    Point hasil;
    hasil.x=P.x;
    hasil.y=P.y+1;
    return (hasil);

}
Point PlusDelta(Point P,float deltax,float deltay)
{
    Point hasil;
    hasil.x=P.x+deltax;
    hasil.y=P.y+deltay;
    return (hasil);

}
Point MirrorOf(Point P,boolean Sbx,boolean Sby)
{
    Point hasil;
    if(Sbx==1)
    {
        hasil.x=P.x;
        hasil.y=P.y*(-1);
    }else if(Sby==1){
        hasil.x=P.x*(-1);
        hasil.y=P.y;
    }
    return (hasil);
}
//Menghitung jarak P ke (0,0)
float Jarak0(Point P)
{
    float hasil;
    hasil=sqrt((((P.x)*(P.x))+((P.y)*(P.y))));
    return hasil;

}
//Menghitung Panjang P1 ke P2
float Panjang(Point P1,Point P2)
{
    float hasil;
    hasil=sqrt((((P1.x-P2.x)*(P1.x-P2.x))+((P1.y-P2.y)*(P1.y-P2.y))));
    return hasil;

}
//P Absis(X) digeser sebesar deltaX dan
//ordinatnya(Y) sebesar deltaY
void Geser (Point *P,float deltax,float deltay)
{
    (*P).x=(*P).x+deltax;
    (*P).y=(*P).x+deltay;
}
//P digeser ke sumbu X. }
// Contoh : Jika koordinat semula (9,9), maka menjadi (9,0) }
void GeserKeSbX(Point *P)
{
        (*P).x=(*P).x;
        (*P).y=0;
}
void GeserKeSbY(Point *P)
{
        (*P).x=0;
        (*P).y=(*P).y;
}
//dicerminkan tergantung nilai SbX atau SbY }
// Jika SbX true maka dicerminkan terhadap sumbu X }
// Jika SbY true maka dicerminkan terhadap sumbu Y }
void Mirror(Point *P,boolean Sbx,boolean Sby)
{
    if(Sbx==1)
    {
        (*P).x=(*P).x;
        (*P).y=(*P).y*-1;
    }else if(Sby==1){
        (*P).x=(*P).x*-1;
        (*P).y=(*P).y;
    }
}
/*
*/

void Putar(Point *P,float Sdt)
{
    float temp;
    if((Sdt==90)||(Sdt=-270))
    {
        temp=(*P).x;
        (*P).x=(*P).y*(-1);              //   Jika R(x, y) diputar pada pusat O(0, 0)
        (*P).y=temp;                     // sejauh 90 atau -270o maka R‘(-y, x)

    }else if((Sdt==180)||(Sdt=-180)){
        (*P).x=(*P).x*(-1);     //b. Jika R(x, y) diputar pada pusat O(0, 0)
        (*P).y=(*P).y*(-1);      //sejauh 180 atau -180o maka R‘(-x, -y)

    }else if((Sdt==270)||(Sdt==-90)){

        temp=(*P).x;    //Jika R(x, y) diputar pada pusat O(0, 0)
        (*P).x=(*P).y;     //sejauh 270oatau -90o maka R‘(y, -x)*/
        (*P).y=temp*(-1);
    }else if((Sdt==360)||(Sdt=0)){
        (*P).x=(*P).x  ;         //d. Jika R(x, y) diputar pada pusat O(0, 0)
        (*P).y=(*P).y  ;         //sejauh 360o atau 0o maka R‘(a, b)

    }else{
        printf("sudut harus 0,90,180,270,360,-90,-180,-270");
    }
}
