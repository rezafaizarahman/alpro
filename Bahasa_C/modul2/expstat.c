#include "expstat.h"


//{ ** KONSTRUKTOR ** }
//{ Konstruktor : create tabel kosong }

void MakeEmpty(TabInt *T)
{
    (*T).Neff=idxmax-idxmin+1;
}
//{* SELEKTOR * }
//{ * Banyaknya elemen  }
int NbElmt(TabInt T)
{
    int j=1,jml=0;
    if(T.Neff==0)
    {
       return 0;
    }else{
        while(j<=T.Neff-1)
        {
           jml=jml+1;
        j++;
        }
    }
    return jml;
}
//Daya tampung container *** }
int MaxNbEl (TabInt T)
{
        return idxmax;
}
//* Selektor INDEKS ***
// Mengirimkan indeks elemen pertama
int GetFirstIdx(TabInt T)
{
    int j=T.Neff,temp;
    if(T.Neff==0)
    {
        return 0;
    }else{
        while(j>=1)
        {
            if(T.TI[j]!=0)
            {
                temp=j;
            }
        j--;
        }
        return temp;
    }
}
// Mengirimkan indeks elemen terakhir
int GetLastIdx(TabInt T)
{
    int j=1,temp;
    while(j<=T.Neff)
    {
        if(T.TI[j]!=0)
        {
            temp=j;
        }
    j++;
    }
    return temp;
}
//*** Menghasilkan sebuah elemen ***
eltype GetElmt(TabInt T,idxtype i)
{
    return T.TI[i];
}

// Selektor SET : Mengubah nilai TABEL dan elemen tabel *
// Untuk type private/limitted private pada bahasa tertentu
// Tout berisi salinan Tin
void SetTab(TabInt Tin,TabInt *Tout)
{
    int j=1;
    while(j<=Tin.Neff)
    {
       // (*Tout).Neff++;
        (*Tout).TI[(*Tout).Neff]=Tin.TI[j];
    j++;
    }
}
//Elemen T yang ke-i bernilai v }
//Mengeset nilai elemen tabel yang ke-i sehingga bernilai v }
void SetEl(TabInt *T,idxtype i,eltype v)
{

   if(i>(*T).Neff)
   {
     (*T).Neff++;
     (*T).TI[i]=v;
   }else{
     (*T).TI[i]=v;
   }
   (*T).Neff++;
}
// F.S. Nilai indeks efektif T bernilai N
// Mengeset nilai indeks elemen efektif sehingga bernilai N
void SetNeff(TabInt *T,idxtype N)
{
    (*T).Neff++;
    (*T).Neff=N;
}
//Mengirimkan true jika i adalah indeks yang valid utk ukuran
//tabel yaitu antara indeks yang terdefinisi utk container}
boolean IsIdxValid(TabInt T,idxtype i)
{
    if((T.TI[i]!=0)&&(i<T.Neff))
    {
        return true;
    }else{
        return false;
    }
}
// Mengirimkan true jika i adalah indes yang terdefinisi utk
//tabel yaitu antara FirstIdx(T)..LastIdx(T)
boolean IsIdxEff(TabInt T,idxtype i)
{
  if((i>=1) &&(i<=T.Neff))
  {
      return true;
  }else{
       return false;
  }
}
//Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak
boolean IsEmpty(TabInt T)
{
    if(T.Neff==0)
    {
        return true;
    }else{
        return false;
    }
}
//Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak
boolean IsFull(TabInt T)
{
    if(T.Neff==idxmax)
    {
        return true;
    }else{
        return false;
    }

}
// membaca banyaknya elemen T dan mengisi nilainya
void BacaIsi(TabInt *T)
{
    (*T).Neff++;
    (*T).TI[(*T).Neff];
}
//Jika T tidak kosong : indeks dan elemen tabel ditulis ke bawah
void TulisIsi(TabInt T)
{
int j=1;
    if(T.Neff!=0)
    {
        while(j<=T.Neff-1)
        {
            printf("%i \n",T.TI[j]);

            j++;
        }

    }else{
        printf("tabel kosong");
    }

}
//Jika T tidak kosong: [e1, e2, ... ,en]
void TuliIsiTab(TabInt T)
{
    int j=1;
    if(T.Neff!=0)
    {

        printf("[");
        while(j<=T.Neff)
        {
            printf("%i",T.TI[j]);
            if(j==T.Neff-1)
            {
                break;
            }else{
                printf(",");
            }
            j++;
        }
        printf("]\n");
    }else{
        printf("[ ]");
    }

}
// T1 dan T2 berukuran sama dan tidak kosong
// Mengirimkan T1 + T2
int PlusTab(TabInt T1,TabInt T2)
{
    int j=1,temp;
    TabInt elmt;
    if((T1.Neff!=0)&&(T2.Neff!=0)&&(T1.Neff==T2.Neff))
    {
            printf("[");
            while(j<=T1.Neff-1)
            {
                temp=T1.TI[j]+T2.TI[j];
                printf("%i",temp);
                if(j==T1.Neff-1)
                {
                    break;
                }else{
                    printf(",");
                }
                 j++;
             }
                         printf("]");
    }else{
            printf("Tabel ukuran tdk sama/kosong");

    }
    //
}
// T1 dan T2 berukuran sama dan tidak kosong
// Mengirimkan T1 - T2
int MinusTab(TabInt T1,TabInt T2)
{
     int j=1,temp;
    TabInt elmt;
    if((T1.Neff!=0)&&(T2.Neff!=0)&&(T1.Neff==T2.Neff))
    {
            printf("[");
            while(j<=T1.Neff-1)
            {
                temp=T1.TI[j]-T2.TI[j];
                printf("%i",temp);
                if(j==T1.Neff-1)
                {
                    break;
                }else{
                    printf(",");
                }
                 j++;
             }
                         printf("]");
    }else{
            printf("Tabel ukuran tdk sama/kosong");

    }
    //
}
// T1 dan T2 berukuran sama dan tidak kosong
// Mengirimkan T1 * T2
int KaliTab(TabInt T1,TabInt T2)
{
    int j=1,temp;
     if((T1.Neff!=0)&&(T2.Neff!=0)&&(T1.Neff==T2.Neff))
    {
            printf("[");
            while(j<=T1.Neff-1)
            {
                temp=T1.TI[j]*T2.TI[j];
                printf("%i",temp);
                if(j==T1.Neff-1)
                {
                    break;
                }else{
                    printf(",");
                }
                 j++;
             }
                         printf("]");
    }else{
            printf("Tabel ukuran tdk sama/kosong");

    }
}

//Mengirimkan tabel dengan setiap elemen Tin dikalikan c
int KaliKons(TabInt Tin,eltype c)
{
    int j=1,temp;

    if(Tin.Neff!=0)
    {
        printf("[");
       while(j<=Tin.Neff)
       {
            temp=Tin.TI[j]*c;
             printf("%i",temp);
            if(j==Tin.Neff-1)
            {
                   break;
            }else{
                   printf(",");
            }
            j++;
       }
       printf("]");
    }else{
        printf("Tabel Kosong");
    }

}
// true jika ukuran T1 = T2 dan semua elemennya sama
boolean IsEQ(TabInt T1,TabInt T2)
{
    int j,flag=1;
    if((T1.Neff!=0)&&(T1.Neff!=0))
    {
        j=1;

       if(T1.Neff==T2.Neff)
        {
            while(j<=T1.Neff-1)

            {
                    if(T1.TI[j]==T2.TI[j])
                    {
                        flag++;
                    }else{
                        return false;
                        break;
                    }
            j++;
            }
                if(flag==T1.Neff)
                {
                    return true;
                }else{
                    return false;
                }
        }else{
           return false;
        }
    }else{
        return true;
    }


}
//Mengirimkan true jika T1 < T2
boolean IsLess(TabInt T1,TabInt T2)
{
    int j=1,flag;
    while(j<=T1.Neff-1)
    {
        if(T1.Neff<T2.Neff)
        {
                if(T1.TI[j]<T2.TI[j])
                {
                    flag++;
                }else{
                    return false;
                }
                if(flag==T1.Neff)
                {
                    return true;
                }else{
                    return false;
                }
        }else{
            return false;
        }
    j++;
    }
}
//Search apakah ada elemen tabel T yang bernilai X }
//Jika ada, menghasilkan indeks i terkecil, dg elemen ke-i = X }
//Jika tidak ada, mengirimkan IdxUndef
idxtype Search1 (TabInt T,eltype X)
{
    int j=1,temp;
    if(T.Neff!=0)
    {
        while(j<=T.Neff)
        {
            if(T.TI[j]==X)
            {
                temp=j;
                break;
            }
            j++;
        }
        if(temp==j)
        {
            return j;
        }else{
            return idxundef;
        }

    }else{
        return idxundef;
    }
}
//Search apakah ada elemen tabel T yang bernilai X }
//Jika ada, menghasilkan indeks i terkecil, dg elemen ke-i =X }
//Jika tidak ada, mengirimkan IdxUndef }
idxtype Search2 (TabInt T,eltype X)
{
    int j=1;
    boolean found=false; //untuk menetukan ketemu/tidak
    if(T.Neff!=0)
    {
        while(j<=T.Neff)
        {
            if(T.TI[j]==X)
            {
                found=true;//x=t.tI[j]
                break;//keluar dari loop
            }
            j++;
        }
        if(found==true)
        {
            return j;
        }else{
            return idxundef;  //tidak ketemu
        }

    }else{
        return idxundef;        //tabel kosong
    }
}
//Jika ada, menghasilkan true, jika tdk ada menghasilkan false
boolean SearchB(TabInt T,eltype X)
{
    int j=1,temp;
    if(T.Neff!=0)
    {
        while(j<=T.Neff)
        {
            if(T.TI[j]==X)
            {
                temp=j;
                break;
            }
            j++;
        }
        if(temp==j)
        {
            return true;
        }else{
            return false;
        }
    }else{
        return idxundef;
    }
}
// Jika ada, menghasilkan true, jika tdk ada menghasilkan false }
// dengan metoda sequential search dengan sentinel }
// Untuk sentinel, manfaatkan indeks ke-0 dalam definisi array
// dalam Bahasa C yang tidak dipakai dalam definisi tabel }
int SearchSentinel(TabInt T,eltype X)
{
    int j,N=T.Neff;
    if(T.Neff==0)
    {
        return idxundef;
    }else{
        T.TI[N+1]=X;   //{ pasang sentinel }
        j=1;
        while (T.TI[j] != X)
        {               //{ Tidak perlu tes terhadap batas i,karena pasti berhenti}
            j = j + 1;
        }                 // T 1 = X; harus diperiksa apakah ketemunya di sentinel }
        if (j < N+1) {
            return true;   //{ ketemu pada elemen tabel }
        }else{
            return false;
        }
    }

}
//Mengirimkan nilai maksimum tabel
eltype ValMax(TabInt T)
{
  int j=1,temp;
  temp=T.TI[j];
  while(j<=T.Neff)
  {
      if(temp>T.TI[j])
      {
           temp=temp;
      }else{
           temp=T.TI[j];
      }
      j++;
  }
  return temp;
}
eltype ValMin(TabInt T)
{
  int j=1,temp;
  temp=T.TI[j];
  while(j<=T.Neff-1)
  {
      if(temp<T.TI[j])
      {
           temp=temp;
      }else{
           temp=T.TI[j];
      }
      j++;
  }
  return temp;
}
//Mengirimkan indeks i dengan elemen ke-i adalah nilai maks
idxtype IdxMaxTab(TabInt T)
{
  int j=1,temp,x;
  temp=T.TI[j];
  x=j;
  while(j<=T.Neff-1)
  {
      if(temp>T.TI[j])
      {
           temp=temp;
            x=x;
      }else{
           temp=T.TI[j];
           x=j;
      }
      j++;
  }
  return x;
}
idxtype IdxMinTab(TabInt T)
{
  int j=1,temp,x;
  temp=T.TI[j];
  x=j;
  while(j<=T.Neff-1)
  {
      if(temp<T.TI[j])
      {
           temp=temp;
           x=x;
      }else{
           temp=T.TI[j];
           x=j;
      }
      j++;
  }
  return x;
}
// Menyalin isi Tin ke Tout
TabInt CopyTab(TabInt Tin,TabInt *Tout)
{
    int j=1;
    while(j<=Tin.Neff-1)
    {
        (*Tout).Neff++;
        (*Tout).TI[(*Tout).Neff]=Tin.TI[j];
    j++;
    }
}
//elemen pertama menjadi terakhir, elemen kedua menjadi elemen sebelum terakhir, dst..
TabInt InverseTab(TabInt *T)
{
  int j=0,temp,s;
  s=(*T).Neff;
  while(j<=(s/2))
  {
     temp=(*T).TI[j];
	 (*T).TI[j]=(*T).TI[s];
	 (*T).TI[s]=temp;

      s--;
      j++;

  }

}

//elemen pertama = elemen terakhir,elemen kedua = elemen sebelum terakhir,dst...
//Menghasilkan true jika tabel simetrik
boolean IsSimetris(TabInt T)
{
    int j=1,n,temp;
    n=T.Neff;
    while(j<=(T.Neff/2))
    {
        if(T.TI[j]==T.TI[n])
        {
            temp++;
        }
        n--;
        j++;
    }
    if(temp==(T.Neff/2))
    {
        return true;
    }else{
        return false;
    }
}
/* T elemennya terurut menaik dengan Maximum Sort }
Proses : mengurutkan T sehingga elemennya menaik/membesar */
void MaxSortAsc(TabInt *T)
{
    int j,x,pass=0,temp;
    while(pass<=(*T).Neff-1)
    {
        x=pass;
        j=pass+1;
        while(j<=(*T).Neff)
        {
                if((*T).TI[x]<(*T).TI[pass])
                {
                    temp=(*T).TI[x];
                    (*T).TI[x]=(*T).TI[pass];
                    (*T).TI[pass]=temp;
                }
           x=j;
           j++;
        }
        pass++;
    }
}
/* T elemennya terurut menurun dengan Insertion Sort
 Proses : mengurutkan T sehingga elemennya menurun/mengecil */
void InsSortDesc(TabInt *T)
{
    int i,pass=2,temp;
    while(pass<=(*T).Neff+1)
    {
        temp=(*T).TI[pass];
        i=pass-1;
        /*Cari i, Temp < Ti and i > 1 */
        while ((temp>(*T).TI[i])&&(i > 0))
        {
           (*T).TI[i+1]=(*T).TI[i];

           /*Temp ≥ Ti (tempat yg tepat) or i = 1 (sisipkan sbg. elmt. pertama) */
            if(temp<=(*T).TI[i])
            {
                temp=(*T).TI[i+1];
            }else if(temp>(*T).TI[i])
            {
                (*T).TI[i+1]=(*T).TI[i];
                (*T).TI[i]=temp;
            }
        i--;
        }
        pass++;
    }

}
/* X adalah elemen terakhir T yang baru
Proses : Menambahkan sebagai elemen ke-i yang baru*/
void AddAsLastEl(TabInt *T,eltype X)
{
    if(IsFull((*T))==1)
    {
        printf("Tabel penuh");
    }else{

        (*T).TI[(*T).Neff]=X;
         (*T).Neff++;
    }
}
//Menambahkan X sebagai elemen ke-i tabel tanpa mengganggu kontiguitas terhadap elemen yang sudah ada
// i adalah indeks yang valid. }
// X adalah elemen ke-i T yang baru }
// Proses : Geser elemen ke-i+1 s.d. terakhir }
void AddEli(TabInt *T,eltype X,idxtype i)
{
   int j;
   if(((IsEmpty((*T))==0))&&(IsFull((*T))==0))
   {
       if((IsIdxValid((*T),i)==1)&&((*T).Neff+1<=idxmax))
       {

           j=(*T).Neff;
           while(j>=i)
           {
                (*T).TI[j+1]=(*T).TI[j];  //geser array ke i+1(j+1)
                j--;
           }
             (*T).Neff++;
           (*T).TI[i]=X;//(input ti=x)

       }
    }
}
//X adalah nilai elemen terakhir T sebelum penghapusan, }
// Banyaknya elemen tabel berkurang satu
void DelLastEl (TabInt *T,eltype *X)
{
  int j=(*T).Neff;
  (*X)=(*T).TI[(*T).Neff];
  (*T).Neff--;
  while(j<=(*T).Neff)
  {
      (*T).TI[j]=(*T).TI[j+1];
      j++;
  }

}
//Proses : Menghapus elemen ke-i tabel tanpa mengganggu
void DelEli (TabInt *T,idxtype i,eltype *X)
{
    int j;
    j=i;
    (*X)=(*T).TI[i];

    while(j<=(*T).Neff)
    {
         (*T).TI[j]=(*T).TI[j+1];
      j++;
    }
    (*T).Neff--;

}
//Jika tabel belum penuh, menambahkan X sbg elemen terakhir T,
// jika belum ada elemen yang bernilai X. Jika sudah ada
// elemen tabel yang bernilai X maka I.S. = F.S. dan dituliskan
// pesan "nilai sudah ada"
// Cek keunikan dengan sequential search dg sentinel
void AddElUnik(TabInt *T,eltype X)
{
    if(SearchSentinel((*T),X)==1)
    {
        printf("Nilai Sudah Ada...");
    }else{
        if((*T).Neff==idxmax)
        {
               printf("Tabel Penuh...");
        }else{

            (*T).TI[(*T).Neff]=X;
            (*T).Neff++;
        }
    }
}
/*Tabel boleh kosong. Jika tidak kosong, elemen
terurut membesar.mengirimkan indeks di mana harga X dengan indeks terkecil
diketemukan mengirimkan IdxUndef jika tidak ada elemen tabel bernilai X
Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel kosong */
idxtype SearchUrut (TabInt T,eltype X)
{
    int j=1;
    if(T.Neff==0)
    {
        return idxundef;
    }else{
        MaxSortAsc(&T);
        while(j<=T.Neff)
        {
            if(T.TI[j]==X)
            {
                return j;
                break;
            }else{
                return idxundef;
            }
        j++;
        }
    }
}
eltype Max(TabInt T)
{
    if(T.Neff==0)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.TI[T.Neff-1];
    }

}
eltype Min(TabInt T)
{
    if(T.Neff==0)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.TI[1];
    }
}
eltype MaxMin(TabInt T)
{
    int a[1];
    if(T.Neff==0)
    {
       printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        a[0]=T.TI[T.Neff-1];
        a[1]=T.TI[1];
        printf("[%i,%i]", a[0],a[1]);
    }

}
//Menambahkan X tanpa mengganggu keterurutan nilai dalam tabel }
// Nilai dalam tabel tidak harus unik.
void Add1Urut(TabInt *T,eltype X)
{
    int z=1,j,poss;

     if((*T).Neff==idxmax)
     {
         printf("Tabel Penuh...");
     }else{

        MaxSortAsc((&*T));
        poss=0;
        while(z<=(*T).Neff-1)
        {
            if(X>=(*T).TI[z])
            {
                if(X<=(*T).TI[z+1])
                {
                    poss=z+1;
                    break;
                }

            }else if(X>(*T).TI[(*T).Neff]){

                   poss=(*T).Neff-1;
            }
         z++;
        }
        j=(*T).Neff;
         while(j>=poss)
         {
            (*T).TI[j+1]=(*T).TI[j];//geser array ke i+1(j+1)
             j--;
         }

         (*T).TI[poss]=X;
         (*T).Neff++;
     }

}
void Del1Urut(TabInt *T,eltype X)
{   int j,i=1,pos;

    MaxSortAsc((&*T));
    while(i<=(*T).Neff)
    {
        if((*T).TI[i]==X)
        {
           // printf("%i",pos);
            pos=i;
            break;
        }
        i++;
    }
    j=pos;
    (*T).Neff--;
    while(j<=(*T).Neff)
    {
         (*T).TI[j]=(*T).TI[j+1];
      j++;
    }


}
