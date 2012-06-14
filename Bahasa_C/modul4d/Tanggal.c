#include "Tanggal.h"
#include "boolean.h"
Tanggal Reset()
{
Tanggal t;
     t.DD=1;t.MM=1;t.YY=1901;
     return t;
}
/*Selektor Get Set*/
int Day(Tanggal T)
{
     return T.DD;
}
int Month(Tanggal T)
{
     return T.MM;
}
int Year(Tanggal T)
{
     return T.YY;
}
void SetDay(Tanggal *T,int newday)
{
     (*T).DD=newday;
}
void SetMonth(Tanggal *T,int newmonth)
{
     (*T).MM=newmonth;
}
void SetYear(Tanggal *T,int newyear)
{
     (*T).YY=newyear;
}
boolean IsTanggalValid (int D,int M, int Y)
{
     if(D>=1&&D<=31 && (M==1||M==3||M==5||M==7||M==8||M==10||M==12) && Y>=1)
        return true;
     else if(D>=1&&D<=30 && (M==4||M==6||M==9||M==11) && Y>=1)
        return true;
     else if (D>=1&& D<=29&&IsKabisat(Y) && M==2)
        return true;
     else if(D>=1 && D<=28&&M==2&&IsKabisat(Y)==false)
         return true;
     else return false;
}
Tanggal MakeTANGGAL(int h, int b,int t)
{
     Tanggal T;
     if (IsTanggalValid(h,b,t))
     {
//T.DD=h;T.MM=b;T.YY=t;
          SetDay(&T,h);SetMonth(&T,b);SetYear(&T,t);
          return T;
     } else return T=Reset();
}
/*Baca Tulis*/
void BacaTANGGAL(Tanggal *T)
{
     int h,b,t;
     printf("Masukan Tanggal [DD MM YY]:");
     scanf("%d %d %d",&h,&b,&t);
     MakeTANGGAL(h,b,t);
}
void TulisTANGGAL(Tanggal T)
{
     printf("%2d/%2d/%4d\n",T.DD,T.MM,T.YY);
}
Tanggal NextDay (Tanggal D )
{
    if(IsTanggalValid(D.DD, D.MM, D.YY))
    {
          if(D.DD==31&&(D.MM==1||D.MM==3||D.MM==5||D.MM==7||D.MM==8||D.MM==10))
          {
               D.DD=1;
               D.MM=D.MM+1;
          }
          else if(D.DD==30&&(D.MM==4||D.MM==6||D.MM==9||D.MM==11))
          {
               D.DD=1;
               D.MM=D.MM+1;
          }
          else if(D.DD==29&&D.MM==2&&IsKabisat(D.YY))
          {
               D.DD=1;
               D.MM=3;
          }
          else if(D.DD==28&&D.MM==2&&IsKabisat(D.YY)==false)
         {
               D.DD=1;
               D.MM=3;
         }
         else if(D.DD==31&&D.MM==12)
         {
               D.DD=1;
               D.MM=1;
               D.YY=D.YY+1;
         }
         else D.DD=D.DD+1;
    }
     return D;
}
Tanggal PrevDay (Tanggal D )
{
     if(IsTanggalValid(D.DD, D.MM, D.YY))
    {
          if(D.DD==1&&(D.MM==5||D.MM==7||D.MM==8||D.MM==10||D.MM==12))
          {
D.DD=30;
               D.MM=D.MM-1;
          }
          else if(D.DD==1&&(D.MM==2||D.MM==4||D.MM==6||D.MM==9||D.MM==11))
          {
               D.DD=31;
               D.MM=D.MM-1;
          }
          else if(D.DD==1&&D.MM==3&&IsKabisat(D.YY))
          {
               D.DD=29;
               D.MM=2;
          }
          else if(D.DD==1&&D.MM==3&&IsKabisat(D.YY)==false)
         {
               D.DD=28;
               D.MM=2;
         }
         else if(D.DD==1&&D.MM==1)
         {
               D.DD=31;
               D.MM=12;
               D.YY=D.YY-1;
         }
         else D.DD=D.DD-1;
    }
    return D;
}
Tanggal NextNday (Tanggal D,int N)
{
     int H;
     H=HariKe(D)+N;
     return DayOfYear(H, Year(D));
}
Tanggal PrevNDay (Tanggal D,int N)
{
     int H;
     H=HariKe(D)-N;
     return DayOfYear(H, Year(D));
}
int HariKe (Tanggal D)
{
     int i,x=0,sum, sum1=0,sum2=0,sum3=0,sum4=0;
	for(i=1;i<D.MM;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			x++;
	} sum1=x*31;
	x=0;
	for(i=1;i<D.MM;i++)
	{
if(i==4||i==6||i==9||i==11)
			x++;
		sum2=x*30;
	}
	x=0;
	for(i=1;i<D.MM;i++)
	{
		if(i==2 && IsKabisat(D.YY)==true)
			x++;
	} sum3=x*29;
	x=0;
	for(i=1;i<D.MM;i++)
	{
		if(i==2 && IsKabisat(D.YY)==false)
			x++;
	} sum4=x*28;
	sum=D.DD+sum1+sum2+sum3+sum4;
	return sum;
}
Tanggal DayOfYear(int H, int Y)
{
     Tanggal D;
     if(H>=1&&H<=366&&IsKabisat(D.YY))
     {
         if(H<=31) {D.DD=H; D.MM=1; }
         else if (H>31&&H<=60) {D.DD=H-31; D.MM=2; D.YY=Y; }
         else if (H>60&&H<=91) {D.DD=H-60; D.MM=3; D.YY=Y;}
         else if (H>91&&H<=121) {D.DD=H-91; D.MM=4; D.YY=Y;}
         else if (H>121&&H<=152) {D.DD=H-121; D.MM=5; D.YY=Y;}
         else if (H>152&&H<=182) {D.DD=H-152; D.MM=6; D.YY=Y;}
         else if (H>182&&H<=213) {D.DD=H-182; D.MM=7; D.YY=Y;}
         else if (H>213&&H<=244) {D.DD=H-213; D.MM=8; D.YY=Y;}
         else if (H>244&&H<=274) {D.DD=H-244; D.MM=9; D.YY=Y;}
         else if (H>274&&H<=305) {D.DD=H-274; D.MM=10; D.YY=Y;}
         else if (H>305&&H<=335) {D.DD=H-305; D.MM=11; D.YY=Y;}
         else {D.DD=H-335; D.MM=12; D.YY=Y;}
     }
     if(H>=1&&H<=365&&IsKabisat(D.YY)==false)
     {
         if(H<=31) {D.DD=H; D.MM=1; }
         else if (H>31&&H<=59) {D.DD=H-31; D.MM=2; D.YY=Y;}
         else if (H>59&&H<=90) {D.DD=H-59; D.MM=3; D.YY=Y;}
         else if (H>90&&H<=120) {D.DD=H-90; D.MM=4; D.YY=Y;}
         else if (H>120&&H<=151) {D.DD=H-120; D.MM=5; D.YY=Y;}
         else if (H>151&&H<=181) {D.DD=H-151; D.MM=6;D.YY=Y; }
         else if (H>181&&H<=212) {D.DD=H-181; D.MM=7;D.YY=Y; }
         else if (H>212&&H<=243) {D.DD=H-212; D.MM=8;D.YY=Y; }
         else if (H>243&&H<=273) {D.DD=H-243; D.MM=9; D.YY=Y;}
         else if (H>273&&H<=304) {D.DD=H-273; D.MM=10;D.YY=Y; }
         else if (H>304&&H<=334) {D.DD=H-304; D.MM=11;D.YY=Y; }
         else {D.DD=H-334; D.MM=12; D.YY=Y;}
}
     return D;
}
boolean IsEqD (Tanggal D1, Tanggal D2)
{
     if(D1.DD==D2.DD&&D1.MM==D2.MM&&D1.YY==D2.YY)
     return true;
     else return false;
}
boolean IsBefore (Tanggal D1,Tanggal D2)
{
     if(D1.YY<D2.YY)
     return true;
     else if(D1.YY==D2.YY&&D1.MM<D2.MM)
     return true;
     else if(D1.YY==D2.YY&&D1.MM==D2.MM&&D1.DD<D2.DD)
     return true;
     else return false;
}
boolean IsAfter (Tanggal D1, Tanggal D2)
{
     if(D1.YY>D2.YY)
     return true;
     else if(D1.YY==D2.YY&&D1.MM>D2.MM)
     return true;
     else if(D1.YY==D2.YY&&D1.MM==D2.MM&&D1.DD>D2.DD)
     return true;
     else return false;
}
boolean IsKabisat (int Y )
{
     if(Y%100==0)
     {
          if(Y%400==0) return true;
          else return false;
     }
     else if(Y%4==0) return true;
     else return false;
}
