/* PROBLEMA NUMARUL 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#if ! defined (_MSC_VER)
#include <stdbool.h>
#endif

bool f(const double f, double * result)
{
    bool rezvalid=true;
    if(x<100)
    {
        if(x==(-4))
        {
            rezvalid=false;
        }
        else
        {
            *result=(((x*x)-2)/(x+4));
        }
    }
    else if(x<200)
    {
        *result=log10(x*(x-1))/log10(7);
    }
    else
    {
        rezvalid=false;//functia nu s-a putut calcula pentru ca double nu suporta e la puterea 40000
    }
    return rezvalid;
}
int main()
{
    double x;
    double y_res;
    printf("introduceti numarul x: /n");
    scanf("%lf",&x);
    if(f(x,&yres))printf("f(%lf)=%lf",x,y_res);
    return 0;
}*/

/* PROBLEMA NUMARUL 2
#include <stdio.h>
const int DIM=20;
void readmatrix(unsigned short l,unsigned short c,int m[DIM][DIM])
{
    unsigned short i,j;
    if((l>DIM)||(c>DIM)||(l<1)||(c<1))
    {
        printf("dimensiunile nu sunt valide");
        return;
    }
    if(m)
    {
        for(i=0;i<l;++i)
            for(j=0;j<c;++j)
        {
            printf("dati elementul[%hu][%hu]",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
void printmatrix(unsigned short l,unsigned short c,int m[DIM][DIM])
{
    unsigned short i,j;
    printf("Matricea citita este ");
    for(i=0;i<l;++i)
    {
        printf("/n");
        for(j=0;j<c;++j)
        printf("%d",m[i][j]);
    }
}
int main()
{
    unsigned short m,n,p,i,j,k;
    int a[DIM][DIM];
    int b[DIM][DIM];
    int c[DIM][DIM];
    do{
    printf("Introduceti m,n,p");
    scanf("%hu,%hu,%hu",&m,&n,&p);
    readmatrix(m,n,a);
    readmatrix(n,p,b);
    } while((m>DIM)||(n>DIM)||(p>DIM));
    for(i=0;i<m;++i)
    {
        for(j=0;j<p;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;++k)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printmatrix(m,p,c);
    return 0;
}*/
/*PROBLEMA NR.3

#include <stdio.h>
#include <math.h>

double cosinus(double x, unsigned short nr_digiti)
{
    unsigned int i=0;
    double rezultat,sum=1,ter_curent=1;
    double ref=cos(x);
    do
    {
    ter_curent*=-(x*x)/((2*i+2)*(2*i+1));
    i++;
    sum+=term_curent;
    }
    while(fabs(re_sum)*pow(10,nr_digiti+1)>1);
    return sum;
}

int main()
{
    double x,rez,ref;
    unsigned short nr_digits;
    printf("da valoarea lui x"); scanf("%lf",&x);
    printf("da numarul de digits");scanf("%hu",&nr_digits);
    rez=cosinus(x,nr_digits);
    ref=cos(x);
    printf("Valoarea rezultata este %lf fata de ref %lf",rez,ref);
    return 0;
}*/
/*
#include <stdio.h>
#define DIM 20
int main()
{
    int a[DIM]={5,8,13,1,-9,7,-2},aux;
    unsigned short i,j;
    for(i=0;i<=(DIM-2);++i)
        for(j=0;j<=(DIM-1);++j)
    {
        if(a[i]>a[j])
        {
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
        }
    }
    printf("Sirul este:");
    for(i=0;i<=(DIM-1);++i)
    {
     printf("%d ",a[i]);
    }
    return 0;
}*/


int main()
{
    while(1)
    {
         if(clock())printf("1");
    }
    return 0;
}
*/
/*Problema 6
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    double x,y;
    double (*pf)(double);
    printf("Introdu x:");scanf("%lf",&x);
    while(1)
    {
      switch (tolower(getch()))
      {
          case 's': pf=sin; break;
          case 'c': pf=cos; break;
          case 27 : exit(0); break;//iesi cu ESCAPE
          default: printf("\nFunctie neimplementata");pf=NULL;break;
      }
       if(pf)
    {
       y=pf(x);
        printf("\n Valoarea lui F(%lf)= %lf",x,y);
    }
    }


return 0;
}
*/
/*Problema 7
#include "Aritmetice.h"
#include "aplicatie.h"
#include <stdio.h>
static double g_a=0,g_b=0;
int main()
{
    double rez=0,x=0,y=0;
    printf("Dati cele 2 numere"); scanf("%lf %lf",&x,&y);
    if((x!=a)||(y!=b))
    {
           g_a=x;g_b=y;
           resulrez=sum(x,y) ;
    }
printf("sum()")
    return 0;
}*/
/*Problema no 8*/
#include <stdio.h>
#include <conio.h>
#define DIM_MAX 80
int main()
{
    char a,sir1[DIM_MAX],sir2[DIM_MAX];
    int i,L1,L2;
    printf("\n Introduceti sirul");
    for(i=0;i<DIM_MAX;++i)
    {
        a=getch();
        if(a!=13) sir1[i]=a;
        else
        {
            sir[i]='\0';//sau pot sa pun sir[i]=0;
            break;
        }
        L1=(i-1);
    }
    printf("\nIntroduceti sirul 2:");
    gets(sir2);
    for(i=0;i<DIM_MAX;++i)
    {
        L2=i;
        if(sir2[i]==0) break;
    }
    for(i=0;i<(L1/2);++i)
    {
        a=sir1[i];
        sir1[i]=sir1[L1-i-1];
        sir1[]

    }
    for(i=0;i<L2;++i)
    {
        if((i%2)==0) sir2[i]='*';
    }
    puts(sir1);
    puts(sir2);
    return 0;
}


