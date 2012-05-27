#include "stat.h"

int main()
{
    Tab T;
    int i;
    InitTabel(&T);
    PrintList(T);
    for(i=1;i<=26;i++)
    {
        if (i%2==0)
        {
        InsElm(&T,i*3+2);
        }
        else
        {
        InsElm(&T,i*2-1);
        }

    }
    printf("data unsorted\n");
    PrintList(T);
    printf("Maks :%d\n",Maks(T));
    printf("Min :%d\n",Min(T));
    printf("Count :%d\n",count(T));
    printf("%d Gnp?:%s\n",T.T[10],IsGenap(T.T[10])?"Ya":"Tidak");
    printf("Count Genap :%d\n",HitGenap(T));
    printf("Sum Genap :%d\n",SumGenap(T));
    printf("Mean :%d\n",Mean(T));
    printf("Range :%d\n",Range(T));
    printf("data sorted\n");
    Sort(&T);
    PrintList(T);
    printf("Median :%d\n",Median(T));
    printf("Varian :%f\n",Variance(T));
    printf("Deviasi :%f\n",STDev(T));
    return 0;
}
