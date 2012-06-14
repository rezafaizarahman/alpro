#include "jam.h"
/*Validasi*/
const maxdetik=86400;
void ResetJam(JAM J)
{
     (J).HH=0;(J).MM=0;(J).SS=0;
}

boolean IsJValid(int H,int M,int S)
{ //hh,mm,ss
     return (((H>=0 && H<=23) &&(M>=0 && M<=59)&&(S>=0 && S<=59)) ?true:false);
}

/*Konstruktor*/
JAM MakeJam(int HH,int MM,int SS)
{//hh,mm,ss
    JAM J;
    if (IsJValid(HH,MM,SS)){
        J.HH=HH;J.MM=MM;J.SS=SS;
        return J;
    }
    else
    {
         printf("Invalid Jam\n");
         ResetJam(J);
    }
}

/*test konstruktor*/
void MakeJamTest(int HH,int MM,int SS)
{//hh,mm,ss
    JAM J;
    J=MakeJam(HH,MM,SS);
    TulisJam(J);
}

/*Selektor*/
int GetHour(JAM J)
{
    return J.HH;
}

int GetMinute(JAM J){
    return J.MM;
}

int GetSecond(JAM J){
    return J.SS;
}

void SetHH(JAM *J,int newHH){
    (*J).HH=newHH;
}

void SetMM(JAM *J,int newMM){
    (*J).MM=newMM;
}

void SetSS(JAM *J,int newSS){
     (*J).SS=newSS;
}

/*Baca Tulis*/
void BacaJam(JAM *J){
      int j,m,d;
      printf("Masukan Jam [HH MM DD]: ");
      scanf("%d %d %d",&j, &m, &d);
      (*J)=MakeJam(j,m,d);
      TulisJam(*J);
}

void TulisJam(JAM J){
     printf("%d:%d:%d\n",J.HH,J.MM,J.SS);
}

int Jam2Detik (JAM J)
{
     int detik;
	detik=J.HH*3600+J.MM*60+J.SS;
	return detik;
}

JAM Detik2Jam (int N )
{
    JAM J;
    int mod,h,m,s;
    h=N/3600;
    mod=N%3600;
    m=mod/60;
    s=mod%60;
    J.HH=h; J.MM=m; J.SS=s;
    return J;
}

boolean JEQ (JAM J1, JAM J2)
{
     boolean status=false;
     if(J1.HH==J2.HH&&J1.MM==J2.MM&&J1.SS==J2.SS)
          status=true;
     else return status;

}

boolean JNEQ (JAM J1,JAM J2)
{
     boolean status=true;
     if(J1.HH==J2.HH&&J1.MM==J2.MM&&J1.SS==J2.SS)
          status=false;
else return status;
}

boolean JLT (JAM J1,JAM J2)
{
     boolean status=true;
     if(J1.HH>J2.HH)
          status=false;
     else if (J1.HH==J2.HH&&J1.MM>J2.MM)
          status=false;
     else if(J1.HH==J2.HH&&J1.MM==J2.MM&&J1.SS<J2.SS)
          status=false;
     else return status;
}

boolean JGT (JAM J1,JAM J2)
{
     boolean status=false;
     if(J1.HH>J2.HH)
          status=true;
     else if (J1.HH==J2.HH&&J1.MM>J2.MM)
          status=true;
     else if(J1.HH==J2.HH&&J1.MM==J2.MM&&J1.SS>J2.SS)
          status=true;
     else return status;
}

JAM JPlus (JAM J1,JAM J2)
{
     JAM J;
     J.SS=(J1.SS+J2.SS)%60;
     J.MM=(((J1.SS+J2.SS)/60)+J1.MM+J2.MM)%60;
     J.HH=(J1.HH+J2.HH+(((J1.SS+J2.SS)/60)+J1.MM+J2.MM)/60);
     return J;
}

JAM JMinus (JAM J1,JAM J2)
{
     JAM J;
     if(JLT(J1,J2)==true)
       J.SS=Jam2Detik(J2)-Jam2Detik(J1);
     else
       J.SS=Jam2Detik(J1)-Jam2Detik(J2);

       return Detik2Jam(J.SS);
}

JAM NextDetik (JAM J)
{
     J.SS=Jam2Detik(J)+1;
     return Detik2Jam(J.SS);
}

JAM NextNDetik (JAM J,int N)
{
     J.SS=Jam2Detik(J)+N;
     return Detik2Jam(J.SS);
}

JAM PrevDetik (JAM J)
{
      J.SS=Jam2Detik(J)-1;
     return Detik2Jam(J.SS);
}

JAM PrevNDetik (JAM J,int N)
{
     J.SS=Jam2Detik(J)-N;
     return Detik2Jam(J.SS);
}

int Durasi (JAM Jaw,JAM Jakh)
{
     int Durasi;
     Durasi=Jam2Detik(Jakh)-Jam2Detik(Jaw);
     return Durasi;

}
