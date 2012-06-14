#include "Tanggal.h"
#include "boolean.h"
Tanggal T,T1;
int main()
{
T=MakeTANGGAL(2,12,1989);
T1=MakeTANGGAL(2,12,1989);
TulisTANGGAL(T);TulisTANGGAL(T1);
printf("Prev Day 2/12/1989 : ");TulisTANGGAL(PrevDay(T));
printf("Next Day 2/12/1989 : ");TulisTANGGAL(NextDay(T));
printf("Next 15 Day 2/12/1989 : ");TulisTANGGAL(NextNday(T,15));
printf("Prev 15 Day 2/12/1989 : ");TulisTANGGAL(PrevNDay(T,15));
printf("Tanggal 2/12/1989 ada : %4d hari",HariKe(T));printf("\n");
printf("hari ke- %4d jatuh pada tanggal :",HariKe(T));TulisTANGGAL(DayOfYear(HariKe(T),Year(T)));printf("\n");
printf("IsEqD T dan T1 ? %s\n",(IsEqD(T,T1)?"true":"false"));
printf("IsBefore T dan T1 ? %s\n",(IsBefore(T,T1)?"true":"false"));
printf("IsAfter T dan T1 ? %s\n",(IsAfter(T,T1)?"true":"false"));
printf("IsKabisat T ?%s\n",(IsKabisat(Year(T))?"true":"false"));
printf("IsKabisat 1972 ? %s\n",(IsKabisat(1972)?"true":"false"));
printf("#hari/tahun : 100/1972 ? ");TulisTANGGAL(DayOfYear(100,1972));
return 0;
}
