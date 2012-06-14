#include <stdio.h>
#include <stdlib.h>
#include "jam.h"
JAM J,j1,j2,j3;
int main()
{
     printf("Test MakeJam: "); MakeJamTest(23,45,50);
     SetHH(&j1,2);SetHH(&j2,23);
     SetMM(&j1,20);SetMM(&j2,20);
     SetSS(&j1,20);SetSS(&j2,20);
     printf("Jam j1 : ");TulisJam(j1);
     printf("Jam j2 : ");TulisJam(j2);
     printf("GetJam j1: %d\n",GetHour(j1));
     printf("GetMinute j1: %d\n",GetMinute(j1));
     printf("GetSecond j1: %d\n",GetSecond(j1));
     printf("jam-detik j1: %d\n",Jam2Detik(j1));
     printf("jam-detik j2: %d\n",Jam2Detik(j2));
     printf("detik-jam j1: ");TulisJam(Detik2Jam(Jam2Detik(j1)));
     printf("detik-jam j2: ");TulisJam(Detik2Jam(Jam2Detik(j2)));
     printf("j1==j2 : %d\n",JEQ(j1,j2));
     printf("j1!=j2 : %d\n",JNEQ(j1,j2));
     printf("j1<j2 : %d\n",JLT(j1,j2));
     printf("j1>j2 : %d\n",JGT(j1,j2));
     printf("j1+j2 : ");TulisJam(JPlus(j1,j2));
     printf("j1-j2 : ");TulisJam(JMinus(j1,j2));
     printf("Next 1 detik j1 : %d\n",Jam2Detik(NextDetik(j1)));
     printf("Next 1 detik j2 : %d\n",Jam2Detik(NextDetik(j2)));
     printf("Next 15 detik j1: %d\n",Jam2Detik(NextNDetik(j1,15)));
     printf("Next 15 detik j2: %d\n",Jam2Detik(NextNDetik(j2,15)));
     printf("Prev 1 detik j1 : %d\n",Jam2Detik(PrevDetik(j1)));
     printf("Prev 1 detik j2 : %d\n",Jam2Detik(PrevDetik(j2)));
     printf("Prev 15 detik j1: %d\n",Jam2Detik(PrevNDetik(j1,15)));
     printf("Prev 15 detik j2: %d\n",Jam2Detik(PrevNDetik(j2,15)));
     printf("Durasi : %d\n",Durasi(j1,j2));
     return 0;
}
