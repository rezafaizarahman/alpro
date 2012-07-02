#include "karakterh.h"
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
/*
Menghitung dan Mengembalikan jmlh karakter dalam pita karakter
*/
int CountHuruf(char ds)
{
    int jml=0;

    if(ds!=' ')
    {

        jml=jml+1;

    }
    return jml;
}
/*
Menghitung dan Mengembalikan karakter A dalam pita karakter
*/
int CountHurufA(char ds)
{
 int jml=0;

    if(ds=='a'||ds=='A')
    {

        jml=jml+1;

    }
    return jml;
}
/*
Menghitung dan Mengembalikan pasangan karakter A dan N
dalam pita karakter
*/
int CountAN(char ds)
{
  int jml=0;

        if(ds=='a'||ds=='A'||ds=='n'||ds=='N')
        {
            if(ds=='a'||ds=='A')
            {
                flag=1;
            }else if(ds=='n' && flag==1)
            {

              jml=jml+1;
              flag=NULL;
            }else if(ds=='N' && flag==1)
            {

              jml=jml+1;
              flag=NULL;
            }

        }else{
            flag=NULL;
        }

    return jml;
}/*
Mengembalikan true jika ketemu karakter Vokal (A,I,U, E,O)
dalam pita karakter
*/
boolean IsVokal(char ds)
{
    if(ds=='a'||
       ds=='A'||
       ds=='i'||
       ds=='I'||
       ds=='u'||
       ds=='U'||
       ds=='e'||
       ds=='E'||
       ds=='o'||
       ds=='O')
    {
       return true;
    }else{
        return false;
    }

}
//true jika di simbol
boolean IsSimbol(char ds)
{
    if(ds=='~'||ds=='('||
       ds=='`'||ds==')'||
       ds=='!'||ds=='-'||
       ds=='@'||ds=='_'||
       ds=='#'||ds=='='||
       ds=='$'||ds=='['||
       ds=='%'||ds==']'||
       ds=='^'||ds=='{'||
       ds=='&'||ds=='}'||
       ds==';'||ds==':'||
       ds=='\''||ds=='\"'||
       ds==','||ds=='.'||
       ds=='<'||ds=='>'||
       ds=='?'||ds=='/'||
       ds=='|'||ds=='\\'||
       ds=='*')
    {
       return true;
    }else{
        return false;
    }
}
boolean IsNumber(char ds)
{
    if(ds=='1'||ds=='6'||
       ds=='2'||ds=='7'||
       ds=='3'||ds=='8'||
       ds=='4'||ds=='9'||
       ds=='5'||ds=='0')
    {
       return true;
    }else{

        return false;
    }
}
/*
Mengembalikan true jika ketemu karakter Konsonan Yaitu
karakter selain vokal dalam alfabet pada pita karakter, Tanda
baca dan simbol tidak termasuk konsonan
*/

boolean IsKonsonan(char ds)
{
    if (IsVokal(ds)==0&&IsSimbol(ds)==0&&IsNumber(ds)==0)
    {
        return true;

    }else{
        return false;
    }
}
int CountVokal(char ds)
{
    int jml=0;
    if(IsVokal(ds))
    {
        jml=jml+1;
    }
    return jml;
}
int CountKonsonan(char ds)
{
    int jml=0;
    if(IsKonsonan(ds))
    {
        jml=jml+1;
    }
    return jml;
}
int Count_1(char ds)
{
    int jml=0;
    if(ds=='1')
    {
        jml=jml+1;
    }
    return jml;
}
