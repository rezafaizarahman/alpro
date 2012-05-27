#include "stat.h"

void InitTabel(Tab *Tbl)
{
    int i;
    for(i=1;i<=TabMax;i++){
        (*Tbl).T[i]=0;
    }
    (*Tbl).PosEff = 0;
}

boolean IsEmpty(Tab Tbl)
{
    return (Tbl).PosEff == 0;
}

boolean IsFull(Tab Tbl)
{
    return (Tbl).PosEff == TabMax-1;
}

void InsElm(Tab *Tbl,int elm)
{
    if(IsFull(*Tbl)){
        printf("sorry,sudah penuh\n");
    }
    else
    {
        (*Tbl).PosEff++;
        (*Tbl).T[(*Tbl).PosEff]=elm;
    }
}

void PrintList(Tab Tbl)
{
    int i;
    if(IsEmpty(Tbl)){
        printf("kosong\n");
    }
    else{
        for(i=1;i<=Tbl.PosEff;i++)
        {
            printf("T[%d]=%d \n",i,Tbl.T[i]);
        }
    }
}

int Maks(Tab Tbl)
{
    int i, max;

    max=Tbl.T[0];
    for(i=1;i<=Tbl.PosEff;i++)
    {
        if(max<Tbl.T[i])
        {
            max=Tbl.T[i];
        }
    }

    return max;
}

int Min(Tab Tbl)
{
    int i, minim;

    minim=Tbl.T[0];
    for(i=1;i<=Tbl.PosEff;i++)
    {
        if(minim>Tbl.T[i])
        {
            minim=Tbl.T[i];
        }
    }

    return minim;
}

int count(Tab Tbl)
{
    int i, hitung;

    hitung=0;
    for(i=1;i<=Tbl.PosEff;i++)
    {
        hitung=hitung+1;
    }

    return hitung;
}

boolean IsGenap(int x)
{
    if(x%2==0){
        return true;
    }
        else {
            return false;
        }
}

int HitGenap(Tab Tbl)
{
    int i, hitGen;

    hitGen=0;
    for(i=1;i<=Tbl.PosEff;i++)
    {
        if(IsGenap(Tbl.T[i])){
            hitGen++;
        }
    }

    return hitGen;
}

int SumGenap(Tab Tbl)
{
    int i, jumGen;

    jumGen=0;
    for(i=1;i<=Tbl.PosEff;i++)
    {
        if(IsGenap(Tbl.T[i])){
            jumGen=Tbl.T[i]+jumGen;
        }
    }

    return jumGen;
}

int Mean(Tab Tbl)
{
    int i, jumlah;
    float rata;

    jumlah=0;
    for(i=1;i<=Tbl.PosEff;i++)
    {
        jumlah=jumlah+Tbl.T[i];
    }

    rata=jumlah/Tbl.PosEff;

    return rata;
}

int Range(Tab Tbl)
{
    int jangkauan;

    jangkauan=Last(Tbl)-First(Tbl);

    return jangkauan;
}

void Sort(Tab *Tbl)
{
    int i, j, k, Ni;
    printf("\n");
	for(i=1;i<=(*Tbl).PosEff;i++)
	{
		j=i;
		for(k=i+1;k<=(*Tbl).PosEff-1;k++)
		{
			if((*Tbl).T[k]<(*Tbl).T[j])
				j=k;
		}
		Ni=(*Tbl).T[j];
		(*Tbl).T[j]=(*Tbl).T[i];
		(*Tbl).T[i]=Ni;
	}
}

int Median(Tab Tbl)
{
    int med;

    if(IsGenap(Tbl.PosEff))
    {
        med=((Tbl.PosEff/2)+((Tbl.PosEff/2)+1))/2;
        return med;
    }
    else
    {
        med=(Tbl.PosEff/2)+1;
        return Tbl.T[med];
    }
}

float Variance(Tab Tbl)
{
    int i, hasil;
    float ragam;

    hasil=0;
    for(i=1;i<=Tbl.PosEff;i++)
    {
        hasil=hasil+pow((Tbl.T[i]-Mean(Tbl)),2);
    }

    ragam=hasil/Tbl.PosEff;

    return ragam;
}

float STDev(Tab Tbl)
{
    float simpBaku;

    simpBaku=sqrt(Variance(Tbl));

    return simpBaku;
}
