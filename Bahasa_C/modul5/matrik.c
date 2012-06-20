#include "matrik.h"

/*Konstruktor*/
void MakeMatrik(int NB,int NK,Matrik *M){ //input jmlh brs dan kol
    int i,j;

    for (i=BrsMin;i<=NB;i++)
        for(j=KolMin;j<=NK;j++)
            (*M).Mem[i][j]=nullentry;
        (*M).NbrsEff=0;
        (*M).NkolEff=0;
}

Matrik NullMatrik(){
    int i,j;Matrik M;

    (M).NbrsEff=0;
    (M).NkolEff=0;
    for (i=0;i<=(M).NbrsEff;i++)
        for(j=0;j<=(M).NkolEff;j++)
            (M).Mem[i][j]=nullentry;
    return M;
}

indeks GetIdxBrsMin(){
    return BrsMin;
}

indeks GetIdxBrsMax(){
    return BrsMax;
}

indeks GetIdxKolMin(){
    return KolMin;
}

indeks GetIdxKolMax(){
    return KolMax;
}

boolean IsIdxMValid(int i,int j){
    if(((i>=BrsMin)&&(i<=BrsMax))&&((j>=KolMin)&&(j<=KolMax)))
        return true;
    else
        return false;
}

/*fungsi untuk matrik tidak kosong*/
indeks FirstIdxBrs(Matrik M){
    return (GetIdxBrsMin());
}

indeks FirstIdxKol(Matrik M){
    return (GetIdxKolMin());
}

indeks LastIdxBrs(Matrik M){
    return (M.NbrsEff);
}

indeks LastIdxKol(Matrik M){
    return (M.NkolEff);
}

int GetNbrsEff(Matrik M){
    return (M.NbrsEff);
}

int GetNkolEff(Matrik M){
    return (M.NkolEff);
}

boolean IsIdxMEff(Matrik M, int i,int j){
    if(((i>=FirstIdxBrs(M))&&(i<=LastIdxBrs(M)))&&((j>=FirstIdxKol(M))&&(j<=LastIdxKol(M))))
        return true;
    else
        return false;
}

el_type GetElmtM(Matrik M,int i,int j){
    return M.Mem[i][j];
}

el_type GetElmtDiagonal(Matrik M,int i){
    return M.Mem[i][i];
}

/*Manipulasi matrik*/
void SetBrsEff(Matrik *M,int NB){
    (*M).NbrsEff=NB;
}

void SetKolEff(Matrik *M,int NK){
    (*M).NkolEff=NK;
}

void SetEl_M(Matrik *M,int i,int j,el_type X){
    (*M).Mem[i][j]=X;
}

/*Assignment Matrik*/
void SetM(Matrik Min,Matrik *Mhsl){
    (*Mhsl=Min);
}

/*Baca tulis*/
void BacaMatrik(Matrik *M,int NB,int NK){
/*Melakukan MakeMAtrik(&M,NB,NK), mengisi nilai efektif
dari pembacaan traversal perbaris*/
    int i,j,elm;

    if (IsIdxMValid(NB,NK))
    {
        MakeMatrik(NB,NK,&(*M));
        SetBrsEff(&(*M),NB);SetKolEff(&(*M),NK);
        for (i=GetIdxBrsMin();i<=(*M).NbrsEff;i++)
            for (j=GetIdxKolMin();j<=(*M).NkolEff;j++)
            {
                printf("Entry Elemen [%d %d]: ",i,j);
                scanf("%d",&elm);
                SetEl_M(&(*M),i,j,elm);
            }
    }
}

void TulisMatrik(Matrik M){
/*Traversal per baris dan menulis ke layar index dan elemennya
[i,j,<elm>]*/
    int i,j;

    printf("\n");
    for (i=GetIdxBrsMin();i<=M.NbrsEff;i++)
    {
        for (j=GetIdxKolMin();j<=M.NkolEff;j++)
        {
            //printf("[%d,%d,<%d>]",i,j,M.Mem[i][j]);
            printf("%8.2f",(float)M.Mem[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

Matrik PlusMatrik(Matrik M1, Matrik M2)
{
    Matrik M;
    int i,j;

    if((M1.NbrsEff==M2.NbrsEff)&&(M1.NkolEff==M2.NkolEff)){
        for (i=FirstIdxBrs(M1);i<=LastIdxBrs(M1);i++)
        {
            for (j=FirstIdxKol(M1);j<=LastIdxKol(M1);j++)
            {
                M1.Mem[i][j] = M1.Mem[i][j]+M2.Mem[i][j];
            }
        }
    }
    else{
        return M1;
    }

    return M1;
}

Matrik MinusMatrik(Matrik M1, Matrik M2)
{
    Matrik M;
    int i, j;

    if((M1.NbrsEff==M2.NbrsEff)&&(M1.NkolEff==M2.NkolEff))
    {
        for(i=FirstIdxBrs(M1);i<=M2.NbrsEff;i++)
        {
            for(j=FirstIdxKol(M1);j<=M2.NkolEff;j++)
            {
                M1.Mem[i][j]=M1.Mem[i][j]-M2.Mem[i][j];
            }
        }
    }
    else
        return M1;

    return M1;
}

Matrik MulMFX(Matrik M, int X)
{
    int i,j;

    for (i=FirstIdxBrs(M);i<=M.NbrsEff;i++)
    {
        for (j=FirstIdxKol(M);j<=M.NkolEff;j++)
        {
            M.Mem[i][j] = M.Mem[i][j]*X;
        }
    }
    return M;
}

void MulMPX(Matrik *M, int K)
{
    int i, j;

    for (i=FirstIdxBrs(*M);i<=(*M).NbrsEff;i++)
    {
        for (j=FirstIdxKol(*M);j<=(*M).NkolEff;j++)
        {
            (*M).Mem[i][j] = (*M).Mem[i][j]*K;
        }
    }
}

boolean IsEqM(Matrik M1, Matrik M2)
{
    int i,j;
    boolean sama;

    if(NBElmt(M1)==NBElmt(M2)){
        for (i=FirstIdxBrs(M1);i<=M1.NbrsEff;i++)
        {
            for (j=FirstIdxKol(M1);j<=M1.NkolEff;j++)
            {
                if(M1.Mem[i][j]==M2.Mem[i][j]){
                    sama=true;
                    continue;
                }
                else
                    return sama;
            }
        }
    }
    else{
        return sama;
    }

    return sama;
}

boolean EQSize(Matrik M1, Matrik M2)
{
    if((GetNbrsEff(M1)==GetNbrsEff(M2))&&(GetNkolEff(M1)==GetNkolEff(M2)))
        return true;
    else
        return false;
}

int NBElmt(Matrik M)
{
    int jum;
    int i,j;

    jum=0;
    for (i=FirstIdxBrs(M);i<=M.NbrsEff;i++)
    {
        for (j=FirstIdxKol(M);j<=M.NkolEff;j++)
        {
            jum++;
        }
    }
    return jum;
}

boolean StrongEQ(Matrik M1, Matrik M2)
{
    int i,j;
    boolean sama;

    if((FirstIdxBrs(M1)==FirstIdxBrs(M2)&&LastIdxBrs(M1)==LastIdxBrs(M2))&&(FirstIdxKol(M1)==FirstIdxKol(M2)&&LastIdxKol(M1)==LastIdxKol(M2))){
        for (i=FirstIdxBrs(M1);i<=M1.NbrsEff;i++)
        {
            for (j=FirstIdxKol(M1);j<=M1.NkolEff;j++)
            {
                if(M1.Mem[i][j]==M2.Mem[i][j]){
                    sama=true;
                    continue;
                }
                else
                    return sama;
            }
        }
    }
    else{
        return sama;
    }

    return sama;
}

boolean NEQ(Matrik M1, Matrik M2)
{
    if(!(StrongEQ(M1,M2)))
        return true;
    else
        return false;
}

boolean MLT(Matrik M1, Matrik M2)
{
    if(NBElmt(M1)<NBElmt(M2))
        return true;
    else
        return false;
}

boolean IsBujurSangkar(Matrik M)
{
    if(GetNbrsEff(M)==GetNkolEff(M))
        return true;
    else
        return false;
}

boolean IsSymetri(Matrik M)
{
    int i, j;
    boolean sim=false;

    if(IsBujurSangkar(M)){
        for (i=FirstIdxBrs(M);i<=M.NbrsEff;i++)
        {
            for (j=FirstIdxKol(M);j<=M.NkolEff;j++)
            {
                if(M.Mem[i][j]==M.Mem[j][i]){
                    sim=true;
                    continue;
                }
                else
                    return sim;
            }
        }
    }
    else{
        sim=false;
    }

    return sim;
}

boolean IsSatuan(Matrik M)
{
    boolean satuan=false;
    int i, j;

    if(IsBujurSangkar(M))
    {
        for(i=FirstIdxBrs(M);i<=M.NbrsEff;i++)
        {
            for(j=FirstIdxKol(M);j<=M.NkolEff;j++)
            {
                if((GetElmtDiagonal(M,i)==1)&&((!GetElmtDiagonal(M,i))==0)){
                    satuan=true;
                    continue;
                }
                else
                    satuan=false;
            }
        }
    }
    else
        return satuan;

    return satuan;
}

boolean IsSparse(Matrik M)
{
    int countbukan0=0;
    int i, j;

    for(i=FirstIdxBrs(M);i<=M.NbrsEff;i++)
    {
        for(j=FirstIdxKol(M);j<=M.NkolEff;j++)
        {
            if(M.Mem[i][j]!=0)
                countbukan0++;
        }
    }

    return (countbukan0<=(0.05*NBElmt(M)));
}

float Determinan(Matrik M)
{
    //cuma buat matrik ordo 2x2
    float det;
    det = (M.Mem[1][1]*M.Mem[2][2])-(M.Mem[1][2]*M.Mem[2][1]);
    return det;
}

Matrik Invers(Matrik M)
{

}

void invers(Matrik *M)
{
    //cuma buat matrik ordo 2x2
    int hasilbagi, temp;

    temp=(*M).Mem[1][1];
    (*M).Mem[1][1]=(*M).Mem[2][2];
    (*M).Mem[2][2]=temp;

    hasilbagi=1/Determinan(*M);
    (*M).Mem[1][2]=hasilbagi*(-1*(*M).Mem[1][2]);
    (*M).Mem[2][1]=hasilbagi*(-1*(*M).Mem[2][1]);
}

void Transpose(Matrik *M)
{
    //cuma buat matrik ordo 2x2
    int i, j, temp;

    if(IsBujurSangkar(*M)){
        for (i=FirstIdxBrs(*M);i<=(*M).NbrsEff;i++)
        {
            for (j=FirstIdxKol(*M)+1;j<=(*M).NkolEff;j++)
            {
                temp=(*M).Mem[i][j];
                (*M).Mem[i][j]=(*M).Mem[j][i];
                (*M).Mem[j][i]=temp;
            }
        }
    }
}
