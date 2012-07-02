#include "karakter.h"

 char CC;
int flag;
static char Pita_karakter[1024]="krktrdsp.txt";
static FILE *FILEDSP;
static int retval;
/* mulai baca satu karakter dari mesin */
void START()
{
   //Mulai Baca file.txt
   FILEDSP=fopen(Pita_karakter,"r");
   if(FILEDSP==NULL)
   {
        printf("error mas \n");
   }else{
        retval=fscanf(FILEDSP,"%c",&CC);
   }
}
/*
Baca karakter selanjutnya, menggerakan pita maju satu karakter*/
void ADV()
{
//baca selanjutnya
    retval=fscanf(FILEDSP,"%c",&CC);
    if(CC==MARK)
    {
            fclose(FILEDSP);

    }
}
/* Mengembalikan true jika pita yang di baca adalah . */
boolean EOP()
{
    return(CC==MARK);
}
