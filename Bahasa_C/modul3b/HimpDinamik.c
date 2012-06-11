#include "HimpDinamik.h"

/*Konstruktor*/
//Buat Tabel Kosong dengan ukura input N, output Tabel T
void MakeEmpty(int N, Tabint *T)
{
	int i=0;
   (*T).T=(int *) malloc(N*sizeof(int));
   while(i<=N)
   {

        (*T).T[i]=NULL;

        i++;
   }
//ke NULL
  (*T).size=N;
   if((*T).T==NULL) printf("Alokasi Gagal\n");
}
int NbElmt(Tabint T)
{
    int j=idxmin,jml=0;
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
int MaxNbEl (Tabint T)
{

        return T.size;
}

idxtype GetFirstIdx(Tabint T)
{                           //idx pertama,tabel tdk kosong,IdxMin
    return idxmin;
}
idxtype GetLastIdx(Tabint T){ //idx terakhir,tabel tdk kosong,lastindex
    return LastIdx(T);
}
int LastIdx(Tabint T)
{                           //Fungsi Utility Tambahan pada ADT ini
   int i=0,pos;               //mengembalikan posisi didepan elemen valid terakhir
   while(i<=T.size)               //Tabel ini tidak boleh kosong
   {                              //Bandingkan dengan nilai didepannya
       if(T.T[i+1]==NULL)      //Jika sudah bernilai ValUndef
       {
           pos=i;
                                    //Simpan posisi index dan keluar
           break;
       }
    i++;
   }
   return pos;
}
idxtype GetLastEfIdx(Tabint T)
{ //idx terakhir,tabel tdk kosong,IdxMax
    return LastIdx(T);
}
eltype GetElmt(Tabint T,idxtype i)
{
    //firsts (T)..last(T) :elemen ke-i
    if (IsIdxValid(T,i))
    {
          return T.T[i];
    }
    else return idxundef;
}
void SetTab(Tabint Tin,Tabint *Tout)
{
    int j=idxmax;
    while(j<=LastIdx(Tin))
    {

        (*Tout).T[j]=Tin.T[j];
    j++;
    }
}
void SetEl(Tabint *T,idxtype i,eltype e){
    if (IsIdxValid(*T,i))
    {
        (*T).T[i]=e;
    }else{
         printf("Index Tidak valid\n");
    }
}

/*Tes Index Valid*/
boolean IsIdxValid(Tabint T,idxtype i){//i=IdxMin...IdxMax

  if((i>=idxmin)&&(i<=T.size))
  {
      return true;
  }else{
       return false;
  }
}

/*Test Kekosongan Tabel*/
boolean IsEmpty(Tabint T){
    if(LastIdx (T)==0)
    {
        return true;
    }else{
        return false;
    }
}

boolean IsFull(Tabint T){
    if(LastIdx (T)==T.size)
    {
        return true;
    }else{
        return false;
    }
}
void BacaIsi(Tabint *T){ //Membaca data elemen selama, jumlahnya masih di bawah IdxMax
    int i,numel,val;
    while(true){
        printf("Berapa Elemen Tabel Yang Dibuat [100]: ");
        scanf("%d",&numel);
        if ((numel<idxmin)||(numel>idxmax))
        {
            printf ("#elemen out of bound\n");
            continue;
        }
        else break;
    }
    for(i=idxmin;i<numel+1;i++){
        printf("Isi Elemen %d : ",i);
        scanf("%d",val);
    }
}
void TulisIsi(Tabint T){
     int j=idxmin;
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx (T))
        {

            printf("%i \n",T.T[j]);
            j++;
        }
    }else{
        printf("tabel kosong");
    }
}
void TulisIsiTab(Tabint T){
     int j=idxmin;

    if(IsEmpty (T)==0)
    {   printf("[");
        while(j<=LastIdx (T))
        {
            printf("%i",T.T[j]);
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
int PlusTab(Tabint T1,Tabint T2)
{
    int j=idxmin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.T[j];
                k=T2.T[j];
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
int MinusTab(Tabint T1,Tabint T2)
{
    int j=idxmin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.T[j];
                k=T2.T[j];
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

int KaliTab(Tabint T1,Tabint T2)
{
    int j=idxmin,temp,i,k;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0)&&(LastIdx(T1)==LastIdx(T2)))
    {
            printf("[");
            while(j<=LastIdx(T1))
            {
                i=T1.T[j];
                k=T2.T[j];
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
int KaliKons(Tabint Tin,eltype c)
{
    int j=idxmin,temp,k;
    if(IsEmpty(Tin)==0)
    {
            printf("[");
            while(j<=LastIdx(Tin))
            {
                k=Tin.T[j];

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
boolean IsEQ(Tabint T1,Tabint T2)
{
    int j,flag=0;
    if((IsEmpty(T1)==0)&&(IsEmpty(T2)==0))
    {
        j=idxmin;

       if(LastIdx(T1)==LastIdx(T2))
        {
            while(j<=LastIdx(T2))

            {
                    if(T1.T[j]==T2.T[j])
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
boolean IsLess(Tabint T1,Tabint T2)
{
    int j=idxmin,flag=NULL;
    while(j<=LastIdx(T1))
    {
        if(LastIdx(T1)==LastIdx(T2))
        {

                if(T1.T[j]<T2.T[j])
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
idxtype Search1 (Tabint T,eltype X)
{
    int j=idxmin,temp;
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
        {
            if(T.T[j]==X)
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
idxtype Search2 (Tabint T,eltype X)
{
    int j=idxmin;
    boolean found=false; //untuk menetukan ketemu/tidak
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
        {
            if(T.T[j]==X)
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
boolean SearchB(Tabint T,eltype X)
{
    int j=1,temp;
    if(IsEmpty(T)==0)
    {
        while(j<=LastIdx(T))
        {
            if(T.T[j]==X)
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
int SearchSentinel(Tabint T,eltype X)
{
    int j,N=LastIdx(T);
    if(IsEmpty(T)==1)
    {
        return idxundef;
    }else{
        T.T[N+1]=X;   //{ pasang sentinel }
        j=idxmin;
        while (T.T[j] != X)
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
eltype ValMax(Tabint T)
{
  int j=idxmin,temp;
  temp=T.T[j];
  while(j<=LastIdx(T))
  {
      if(temp>T.T[j])
      {
           temp=temp;
      }else{
           temp=T.T[j];
      }
      j++;
  }
  return temp;
}
eltype ValMin(Tabint T)
{
  int j=idxmin,temp;
  temp=T.T[j];
  while(j<=LastIdx(T))
  {
      if(temp<T.T[j])
      {
           temp=temp;
      }else{
           temp=T.T[j];
      }
      j++;
  }
  return temp;
}
idxtype IdxMaxTab(Tabint T)
{
  int j=idxmin,temp,x;
  temp=T.T[j];
  x=j;
  while(j<=LastIdx(T))
  {
      if(temp>T.T[j])
      {
           temp=temp;
            x=x;
      }else{
           temp=T.T[j];
           x=j;
      }
      j++;
  }
  return x;
}
idxtype IdxMinTab(Tabint T)
{
  int j=1,temp,x;
  temp=T.T[j];
  x=j;
  while(j<=LastIdx(T)-1)
  {
      if(temp<T.T[j])
      {
           temp=temp;
      }else{
           temp=T.T[j];
           x=j;
      }
      j++;
  }
  return x;
}

// Menyalin isi Tin ke Tout
Tabint CopyTab(Tabint Tin,Tabint *Tout)
{
    int j=1;
    MakeEmpty(Tin.size,&*Tout);
    while(j<=LastIdx(Tin))
    {
        (*Tout).T[j]=Tin.T[j];
    j++;
    }
}
//elemen pertama menjadi terakhir, elemen kedua menjadi elemen sebelum terakhir, dst..
Tabint InverseTab(Tabint *T)
{
  int j=1,temp,s;
  s=LastIdx(*T);
  while(j<=(s/2))
  {
     temp=(*T).T[j];
	 (*T).T[j]=(*T).T[s];
	 (*T).T[s]=temp;

      s--;
      j++;

  }

}

//elemen pertama = elemen terakhir,elemen kedua = elemen sebelum terakhir,dst...
//Menghasilkan true jika tabel simetrik
boolean IsSimetris(Tabint T)
{
    int j=idxmin,n,temp=NULL;
    n=LastIdx(T);
    while(j<=(LastIdx(T)/2))
    {
        if(T.T[j]==T.T[n])
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

void MaxSortAsc(Tabint *T)
{
    int j,x,pass=idxmin,temp;
    while(pass<=LastIdx(*T))
    {

        x=pass;
        j=pass+1;
        while(j<=LastIdx(*T)+1)
        {
                if((*T).T[x]<(*T).T[pass])
                {
                    temp=(*T).T[x];
                    (*T).T[x]=(*T).T[pass];
                    (*T).T[pass]=temp;
                }
           x=j;
           j++;
        }
        pass++;
    }
}
/* T elemennya terurut menurun dengan Insertion Sort
 Proses : mengurutkan T sehingga elemennya menurun/mengecil */
void InsSortDesc(Tabint *T)
{
    int i,pass=2,temp;
    while(pass<=LastIdx(*T))
    {
        temp=(*T).T[pass];
        i=pass-1;
        /*Cari i, Temp < Ti and i > 1 */
        while ((temp>(*T).T[i])&&(i > 0))
        {
           (*T).T[i+1]=(*T).T[i];

           /*Temp ≥ Ti (tempat yg tepat) or i = 1 (sisipkan sbg. elmt. pertama) */
            if(temp<=(*T).T[i])
            {
                temp=(*T).T[i+1];
            }else if(temp>(*T).T[i])
            {
                (*T).T[i+1]=(*T).T[i];
                (*T).T[i]=temp;
            }
        i--;
        }
        pass++;
    }

}

/* X adalah elemen terakhir T yang baru
Proses : Menambahkan sebagai elemen ke-i yang baru*/
void AddAsLastEl(Tabint *T,eltype X)
{
    if(IsFull((*T))==1)
    {
        printf("Tabel penuh");
    }else{
        (*T).T[LastIdx(*T)+1]=X;
    }
}
//Menambahkan X sebagai elemen ke-i tabel tanpa mengganggu kontiguitas terhadap elemen yang sudah ada
// i adalah indeks yang valid. }
// X adalah elemen ke-i T yang baru }
// Proses : Geser elemen ke-i+1 s.d. terakhir }
void AddEli(Tabint *T,eltype X,idxtype i)
{
   int j;
   if(((IsEmpty((*T))==0))&&(IsFull((*T))==0))
   {
       if((IsIdxValid((*T),i)==1)&&(LastIdx(*T)+1<=(*T).size))
       {

           j=LastIdx(*T);

           while(j>=i)
           {
                (*T).T[j+1]=(*T).T[j];  //geser array ke i+1(j+1)
                j--;
           }
           (*T).T[i]=X;//(input ti=x)
       }
    }
}

//X adalah nilai elemen terakhir T sebelum penghapusan, }
// Banyaknya elemen tabel berkurang satu
void DelLastEl (Tabint *T,eltype *X)
{
  int j=LastIdx(*T);
  (*X)=(*T).T[LastIdx(*T)];

  while(j<=LastIdx(*T))
  {
      (*T).T[j]=(*T).T[j+1];
      j++;
  }

}
//Proses : Menghapus elemen ke-i tabel tanpa mengganggu
void DelEli (Tabint *T,idxtype i,eltype *X)
{
    int j;
    j=i;
    (*X)=(*T).T[i];

    while(j<=LastIdx(*T))
    {
         (*T).T[j]=(*T).T[j+1];
      j++;
    }


}
//Jika tabel belum penuh, menambahkan X sbg elemen terakhir T,
// jika belum ada elemen yang bernilai X. Jika sudah ada
// elemen tabel yang bernilai X maka I.S. = F.S. dan dituliskan
// pesan "nilai sudah ada"
// Cek keunikan dengan sequential search dg sentinel
void AddElUnik(Tabint *T,eltype X)
{
    if(SearchSentinel((*T),X)==1)
    {
        printf("Nilai Sudah Ada...");
    }else{
        if(LastIdx(*T)==idxmax)
        {
               printf("Tabel Penuh...");
        }else{

            (*T).T[LastIdx(*T)]=X;

        }
    }
}
/*Tabel boleh kosong. Jika tidak kosong, elemen
terurut membesar.mengirimkan indeks di mana harga X dengan indeks terkecil
diketemukan mengirimkan IdxUndef jika tidak ada elemen tabel bernilai X
Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel kosong */
idxtype SearchUrut (Tabint T,eltype X)
{
    int j=idxmin;
    if(IsEmpty(T)==1)
    {
        return idxundef;
    }else{
        MaxSortAsc(&T);
        while(j<=LastIdx(T))
        {
            if(T.T[j]==X)
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
eltype Max(Tabint T)
{
    if(IsEmpty(T)==1)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.T[LastIdx(T)];
    }

}
eltype Min(Tabint T)
{
    if(IsEmpty(T)==1)
    {
        printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        return T.T[1];
    }
}
eltype MaxMin(Tabint T)
{
    int a[1];
    if(IsEmpty(T)==1)
    {
       printf("Tabel Masih Kosong");
    }else{
        MaxSortAsc(&T);
        a[0]=T.T[LastIdx(T)];
        a[1]=T.T[1];
        printf("[%i,%i]", a[0],a[1]);
    }

}
//Menambahkan X tanpa mengganggu keterurutan nilai dalam tabel }
// Nilai dalam tabel tidak harus unik.
void Add1Urut(Tabint *T,eltype X)
{
    int z=1,j,poss;

     if(LastIdx(*T)==(*T).size)
     {
         printf("Tabel Penuh...");
     }else{

        MaxSortAsc((&*T));

        poss=0;
        while(z<=LastIdx(*T)+1)
        {
            if(X>=(*T).T[z])
            {
                if(X<=(*T).T[z+1])
                {
                    poss=z+1;
                    break;
                }else{
                    poss=z;
                }
            }


         z++;
        }
        j=LastIdx(*T);
         while(j>=poss)
         {
            (*T).T[j+1]=(*T).T[j];//geser array ke i+1(j+1)
             j--;
         }

         (*T).T[poss]=X;

     }
}
void Del1Urut(Tabint *T,eltype X)
{   int j,i=1,pos;
    if(SearchB((*T),X)==1)
    {

    MaxSortAsc((&*T));

    while(i<=LastIdx(*T))
    {

        if((*T).T[i]==X)
        {

            pos=i;
            break;
        }
        i++;
    }
    j=pos;

    while(j<=LastIdx(*T))
    {
         (*T).T[j]=(*T).T[j+1];
      j++;
    }


    }else{
        printf("Elemen Tidak ada di Tabel");
    }
}
