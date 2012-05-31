#include "RepImpStat.h"

void MakeEmpty(TabInt *T)
{
    int i=IdxMin;
    while(i<=IdxMax)
    {
        (*T).TI[i]=ValUndef;
    i++;
    }
}
int NbElmt(TabInt T)
{
    int j=IdxMin,jml=0;
    if(LastIdx (T)==0)
    {
       return 0;
    }else{
        while(j<=LastIdx (T))
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
        return IdxMax;
}

IdxType GetFirstIdx(TabInt T)
{                           //idx pertama,tabel tdk kosong,IdxMin
    return IdxMin;
}
IdxType GetLastIdx(TabInt T){ //idx terakhir,tabel tdk kosong,IdxMax
    return IdxMax;
}
int LastIdx(TabInt T)
{                           //Fungsi Utility Tambahan pada ADT ini
   int i=0,pos;               //mengembalikan posisi didepan elemen valid terakhir
   while(i<=IdxMax)               //Tabel ini tidak boleh kosong
   {                              //Bandingkan dengan nilai didepannya
       if(T.TI[i+1]==ValUndef)      //Jika sudah bernilai ValUndef
       {
           pos=i;
                                    //Simpan posisi index dan keluar
           break;
       }
    i++;
   }
   return pos;
}
IdxType GetLastEfIdx(TabInt T)
{ //idx terakhir,tabel tdk kosong,IdxMax
    return LastIdx(T);
}
Eltype GetElmt(TabInt T,IdxType i)
{
    //firsts (T)..last(T) :elemen ke-i
    if (IsIdxValid(T,i))
    {
          return T.TI[i];
    }
    else return IdxUndef;
}
void SetTab(TabInt Tin,TabInt *Tout)
{
      int j=IdxMax;
    while(j<=LastIdx(Tin))
    {

        (*Tout).TI[j]=Tin.TI[j];
    j++;
    }

}
void SetEl(TabInt *T,IdxType i,Eltype e){
    if (IsIdxValid(*T,i))
    {
        (*T).TI[i]=e;
    }else{
         printf("Index Tidak valid\n");
    }
}

/*Tes Index Valid*/
boolean IsIdxValid(TabInt T,IdxType i){//i=IdxMin...IdxMax

  if((i>=IdxMin) &&(i<=IdxMax))
  {
      return true;
  }else{
       return false;
  }
}

/*Test Kekosongan Tabel*/
boolean IsEmpty(TabInt T){
    if(LastIdx (T)==0)
    {
        return true;
    }else{
        return false;
    }
}

boolean IsFull(TabInt T){
    if(LastIdx (T) ==IdxMax)
    {
        return true;
    }else{
        return false;
    }
}
void BacaIsi(TabInt *T){ //Membaca data elemen selama, jumlahnya masih di bawah IdxMax
    int i,numel,val;
    while(true){
        printf("Berapa Elemen Tabel Yang Dibuat [100]: ");
        scanf("%d",&numel);
        if ((numel<IdxMin)||(numel>IdxMax))
        {
            printf ("#elemen out of bound\n");
            continue;
        }
        else break;
    }
    for(i=IdxMin;i<numel+1;i++){
        printf("Isi Elemen %d : ",i);
        scanf("%d",val);
    }
}
void TulisIsi(TabInt T){
     int j=IdxMin;
    if(IsEmpty (T)==0)
    {
        while(j<=LastIdx (T))
        {

            printf("%i \n",T.TI[j]);
            j++;
        }
    }else{
        printf("tabel kosong");
    }
}
void TulisIsiTab(TabInt T){
     int j=IdxMin;

    if(IsEmpty (T)==0)
    {   printf("[");
        while(j<=LastIdx (T))
        {
            printf("%i",T.TI[j]);
            if(j==LastIdx (T))
            {
                break;
            }else{
                printf(",");
            }
            j++;
        }
     printf("]");
    }else{
        printf("[ ]");
    }
}
int PlusTab(TabInt T1,TabInt T2)
{
    int j=IdxMin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.TI[j];
                k=T2.TI[j];
                temp=i+k;
                printf("%i",temp);

                if(j==LastIdx(T1))
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
int MinusTab(TabInt T1,TabInt T2)
{
    int j=IdxMin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.TI[j];
                k=T2.TI[j];
                temp=i-k;
                printf("%i",temp);

                if(j==LastIdx(T1))
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

int KaliTab(TabInt T1,TabInt T2)
{
    int j=IdxMin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.TI[j];
                k=T2.TI[j];
                temp=i*k;
                printf("%i",temp);

                if(j==LastIdx(T1))
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
int KaliKons(TabInt Tin,Eltype c)
{
    int j=IdxMin,temp,k;
    if(IsEmpty(Tin)==0)
    {
            printf("[");
            while(j<=LastIdx(Tin))
            {
                k=Tin.TI[j];

                temp=k*c;
                printf("%i",temp);

                if(j==LastIdx(Tin))
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
boolean IsEQ(TabInt T1,TabInt T2)
{
    int j,flag=0;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0))
    {
        j=IdxMin;

       if(LastIdx(T1)==LastIdx(T2))
        {
            while(j<=LastIdx(T2))

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
                if(flag==LastIdx(T1))
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
boolean IsLess(TabInt T1,TabInt T2)
{
    int j=IdxMin,flag=NULL;
    while(j<=LastIdx(T1))
    {
        if(LastIdx(T1)==LastIdx(T2))
        {

                if(T1.TI[j]<T2.TI[j])
                {

                    flag++;
                }else{
                    return false;
                }

        }else{
            return false;
        }

    j++;
    }
    if(flag==LastIdx(T1))
    {
        return true;
    }else{
        return false;
    }
}
//Search apakah ada elemen tabel T yang bernilai X }
//Jika ada, menghasilkan indeks i terkecil, dg elemen ke-i = X }
//Jika tidak ada, mengirimkan IdxUndef
IdxType Search1 (TabInt T,Eltype X)
{
    int j=IdxMin,temp;
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
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
            return IdxUndef;
        }

    }else{
        return IdxUndef;
    }
}
//Search apakah ada elemen tabel T yang bernilai X }
//Jika ada, menghasilkan indeks i terkecil, dg elemen ke-i =X }
//Jika tidak ada, mengirimkan IdxUndef }
IdxType Search2 (TabInt T,Eltype X)
{
    int j=IdxMin;
    boolean found=false; //untuk menetukan ketemu/tidak
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
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
            return IdxUndef;  //tidak ketemu
        }

    }else{
        return IdxUndef;        //tabel kosong
    }
}
boolean SearchB(TabInt T,Eltype X)
{
    int j=1,temp;
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
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
        return IdxUndef;
    }
}
// Jika ada, menghasilkan true, jika tdk ada menghasilkan false }
// dengan metoda sequential search dengan sentinel }
// Untuk sentinel, manfaatkan indeks ke-0 dalam definisi array
// dalam Bahasa C yang tidak dipakai dalam definisi tabel }
int SearchSentinel(TabInt T,Eltype X)
{
    int j,N=LastIdx(T);
    if(IsEmpty(T)==1)
    {
        return IdxUndef;
    }else{
        T.TI[N+1]=X;   //{ pasang sentinel }
        j=IdxMin;
        while (T.TI[j] != X)
        {
              //{ Tidak perlu tes terhadap batas i,karena pasti berhenti}

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
Eltype ValMax(TabInt T)
{
  int j=IdxMin,temp;
  temp=T.TI[j];
  while(j<=LastIdx(T))
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
Eltype ValMin(TabInt T)
{
  int j=IdxMin,temp;
  temp=T.TI[j];
  while(j<=LastIdx(T))
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
IdxType IdxMaxTab(TabInt T)
{
  int j=IdxMin,temp,x;
  temp=T.TI[j];
  x=j;
  while(j<=LastIdx(T))
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
IdxType IdxMinTab(TabInt T)
{
  int j=1,temp,x;
  temp=T.TI[j];
  x=j;
  while(j<=LastIdx(T))
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
    MakeEmpty(&*Tout);
    while(j<=LastIdx(Tin))
    {
        (*Tout).TI[j]=Tin.TI[j];
    j++;
    }
}
//elemen pertama menjadi terakhir, elemen kedua menjadi elemen sebelum terakhir, dst..
TabInt InverseTab(TabInt *T)
{
  int j=1,temp,s;
  s=LastIdx(*T);
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
    int j=IdxMin,n,temp=NULL;
    n=LastIdx(T);
    while(j<=(LastIdx(T)/2))
    {
        if(T.TI[j]==T.TI[n])
        {
            temp++;
        }
        n--;
        j++;
    }
    if(temp==(LastIdx(T)/2))
    {
        return true;
    }else{
        return false;
    }
}

void MaxSortAsc(TabInt *T)
{
    int j,x,pass=IdxMin,temp;
    while(pass<=LastIdx(*T))
    {

        x=pass;
        j=pass+1;
        while(j<=LastIdx(*T)+1)
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
    while(pass<=LastIdx(*T))
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
void AddAsLastEl(TabInt *T,Eltype X)
{
    if(IsFull((*T))==1)
    {
        printf("Tabel penuh");
    }else{

        (*T).TI[LastIdx(*T)+1]=X;
    }
}
//Menambahkan X sebagai elemen ke-i tabel tanpa mengganggu kontiguitas terhadap elemen yang sudah ada
// i adalah indeks yang valid. }
// X adalah elemen ke-i T yang baru }
// Proses : Geser elemen ke-i+1 s.d. terakhir }
void AddEli(TabInt *T,Eltype X,IdxType i)
{
   int j;
   if(((IsEmpty((*T))==0))&&(IsFull((*T))==0))
   {
       if((IsIdxValid((*T),i)==1)&&(LastIdx(*T)+1<=IdxMax))
       {

           j=LastIdx(*T);
           while(j>=i)
           {
                (*T).TI[j+1]=(*T).TI[j];  //geser array ke i+1(j+1)
                j--;
           }
           (*T).TI[i]=X;//(input ti=x)
       }
    }
}

//X adalah nilai elemen terakhir T sebelum penghapusan, }
// Banyaknya elemen tabel berkurang satu
void DelLastEl (TabInt *T,Eltype *X)
{
  int j=LastIdx(*T);
  (*X)=(*T).TI[LastIdx(*T)];

  while(j<=LastIdx(*T))
  {
      (*T).TI[j]=(*T).TI[j+1];
      j++;
  }

}
//Proses : Menghapus elemen ke-i tabel tanpa mengganggu
void DelEli (TabInt *T,IdxType i,Eltype *X)
{
    int j;
    j=i;
    (*X)=(*T).TI[i];

    while(j<=LastIdx(*T))
    {
         (*T).TI[j]=(*T).TI[j+1];
      j++;
    }

}
//Jika tabel belum penuh, menambahkan X sbg elemen terakhir T,
// jika belum ada elemen yang bernilai X. Jika sudah ada
// elemen tabel yang bernilai X maka I.S. = F.S. dan dituliskan
// pesan "nilai sudah ada"
// Cek keunikan dengan sequential search dg sentinel
void AddElUnik(TabInt *T,Eltype X)
{
    if(SearchSentinel((*T),X)==1)
    {
        printf("Nilai Sudah Ada...");
    }else{
        if(LastIdx(*T)==IdxMax)
        {
               printf("Tabel Penuh...");
        }else{

            (*T).TI[LastIdx(*T)]=X;
        }
    }
}
/*Tabel boleh kosong. Jika tidak kosong, elemen
terurut membesar.mengirimkan indeks di mana harga X dengan indeks terkecil
diketemukan mengirimkan IdxUndef jika tidak ada elemen tabel bernilai X
Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel kosong */
IdxType SearchUrut (TabInt T,Eltype X)
{
    int j=IdxMin;
    if(IsEmpty(T)==1)
    {
        return IdxUndef;
    }else{
        MaxSortAsc(&T);
        while(j<=LastIdx(T))
        {
            if(T.TI[j]==X)
            {
                return j;
                break;
            }else{
                return IdxUndef;
            }
        j++;
        }
    }
}
Eltype Max(TabInt T)
{
    if(IsEmpty(T)==1)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.TI[LastIdx(T)];
    }

}
Eltype Min(TabInt T)
{
    if(IsEmpty(T)==1)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.TI[1];
    }
}
Eltype MaxMin(TabInt T)
{
    int a[1];
    if(IsEmpty(T)==1)
    {
       printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        a[0]=T.TI[LastIdx(T)];
        a[1]=T.TI[1];
        printf("[%i,%i]", a[0],a[1]);
    }

}
//Menambahkan X tanpa mengganggu keterurutan nilai dalam tabel }
// Nilai dalam tabel tidak harus unik.
void Add1Urut(TabInt *T,Eltype X)
{
    int z=IdxMin,j,poss;

     if(LastIdx(*T)==IdxMax)
     {
         printf("Tabel Penuh...");
     }else{

        MaxSortAsc((&*T));
        poss=0;
        while(z<=LastIdx(*T))
        {
            if(X>=(*T).TI[z])
            {
                if(X<=(*T).TI[z+1])
                {
                    poss=z+1;
                    break;
                }

            }else if(X>(*T).TI[LastIdx(*T)]){

                   poss=LastIdx(*T)-1;
            }
         z++;
        }
        j=LastIdx(*T);
         while(j>=poss)
         {
            (*T).TI[j+1]=(*T).TI[j];//geser array ke i+1(j+1)
             j--;
         }

         (*T).TI[poss]=X;
     }

}
void Del1Urut(TabInt *T,Eltype X)
{   int j,i=1,pos;

    MaxSortAsc((&*T));
    while(i<=LastIdx(*T))
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

    while(j<=LastIdx(*T))
    {
         (*T).TI[j]=(*T).TI[j+1];
      j++;
    }


}
